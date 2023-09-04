#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <elf.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int copy_file(const char * from_filename, const char *to_filename);
int open_elf_file(const char *filename);
void print_elf_header_info(Elf64_Ehdr header);

#endif /* MAIN_H */
