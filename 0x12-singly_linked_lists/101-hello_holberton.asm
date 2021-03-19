	SECTION .data

fmt:	db "%s", 10, 0
msg:	db "Hello, Holberton",0

	SECTION .text

	extern printf
	global main

main:
	mov  esi, msg
	mov  edi, fmt
	mov  eax, 0
	call printf

	mov ebx, 0
