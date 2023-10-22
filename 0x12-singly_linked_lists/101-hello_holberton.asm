section .data
    hello db 'Hello, Holberton',10  ; The string to be printed (with newline character)
    hello_len equ $ - hello         ; Calculate the length of the string

section .text
    global _start

_start:
    ; Prepare the arguments for printf
    mov rdi, hello       ; Address of the format string
    mov rax, 0           ; Clear RAX to indicate a normal printf call
    call printf          ; Call the printf function

    ; Exit the program
    mov rax, 60          ; syscall number for exit
    xor rdi, rdi         ; Exit status (0)
    syscall

section .bss
    section .text

global printf
extern printf
