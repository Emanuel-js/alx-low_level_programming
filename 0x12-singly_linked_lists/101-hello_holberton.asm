global main
extern printf

	section .text
main:
	  mov rax, 1
	  mov rdi, 1
	  mov rdi, format
	  mov rsi, message
	  mov rdx, 16
	  syscall

	  mov eax, 60
	  xor rdi, rdi
	  syscall

message:
	  db "Hello, Holberton", 13
format:
          db "%s", 10, 0	  
