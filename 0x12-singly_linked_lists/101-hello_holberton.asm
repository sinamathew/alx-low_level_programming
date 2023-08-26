section .data
    hello_fmt db "Hello, Holberton", 10, 0  ; Format string for printf

section .text
    global main

main:
    ; Prepare arguments for printf
    mov rdi, hello_fmt  ; Format string address
    xor rax, rax        ; Clear RAX (no floating-point arguments)
    call printf

    ; Exit the program
    mov rax, 60         ; syscall number for exit
    xor rdi, rdi        ; status code 0
    syscall

