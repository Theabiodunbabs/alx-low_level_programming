section .data
	hello db "Hello, HOberton", 0
	len equ $ - hello

section .text
global _start

_start:
	; Write the string to stdout
	mov rax, 1
	mov rdi, 1
	mov rsi, hello
	mov rdx, line
	syscall

	; Exit the program
	mov rax, 60
	xor rdi, rdi
	syscall
