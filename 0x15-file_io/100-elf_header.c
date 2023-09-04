#include "main.h"

/**
 * open_elf_file - opens and validates an ELF file
 * @filename: name of the ELF file
 *
 * Return: file descriptor of the ELF file on success, -1 on failure
 */
int open_elf_file(const char *filename)
{
	int fd;
	Elf64_Ehdr header;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		dprintf(2, "Error: Can't open file %s\n", filename);
		exit(98);
	}

	if (read(fd, &header, sizeof(header)) != sizeof(header) ||
		header.e_ident[EI_MAG0] != ELFMAG0 ||
		header.e_ident[EI_MAG1] != ELFMAG1 ||
		header.e_ident[EI_MAG2] != ELFMAG2 ||
		header.e_ident[EI_MAG3] != ELFMAG3 ||
		header.e_ident[EI_CLASS] != ELFCLASS64 ||
		header.e_ident[EI_DATA] != ELFDATA2LSB)
	{
		dprintf(2, "Error: %s is not an ELF file\n", filename);
		close(fd);
		exit(98);
	}

	return (fd);
}

/**
 * print_elf_header_info - displays information from the ELF header
 * @header: ELF header structure
 */
void print_elf_header_info(Elf64_Ehdr header)
{
	printf("ELF Header:\n");
	printf("  Magic:   %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x\n",
			header.e_ident[EI_MAG0], header.e_ident[EI_MAG1], header.e_ident[EI_MAG2], header.e_ident[EI_MAG3],
			header.e_ident[EI_CLASS], header.e_ident[EI_DATA], header.e_ident[EI_VERSION], header.e_ident[EI_OSABI],
			header.e_ident[EI_ABIVERSION], header.e_ident[EI_PAD], header.e_ident[EI_NIDENT]);
	printf("  Class:                             ELF64\n");
	printf("  Data:                              2's complement, little endian\n");
	printf("  Version:                           1 (current)\n");
	printf("  OS/ABI:                            UNIX - System V\n");
	printf("  ABI Version:                       0\n");
	printf("  Type:                              %d (Executable file)\n", header.e_type);
	printf("  Entry point address:               %lx\n", (unsigned long)header.e_entry);
}

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		dprintf(2, "Usage: %s elf_filename\n", argv[0]);
		exit(97);
	}

	int fd = open_elf_file(argv[1]);
	Elf64_Ehdr header;

	if (lseek(fd, 0, SEEK_SET) == -1 || read(fd, &header, sizeof(header)) != sizeof(header))
	{
	dprintf(2, "Error reading ELF header from file %s\n", argv[1]);
		close(fd);
		exit(98);
	}

	print_elf_header_info(header);

	close(fd);
	return (0);
}

