section .data
	message db "Hello, Holberton", 10

section .text
global main
main:
	mov rax, 1
	move rdi, 1
	move rsi, message
	move rdx, 17
	syscall
	move rax, 60
	move rdi, 0
	syscall
