section .data
hello: db '.'
helloLen: equ $-hello    ;length of string

section .text
global _start

_start:
mov ecx, 5000000000

l1:

   mov ebx, ecx

   mov rdi,1
   mov rsi, hello
   mov rdx,helloLen
   mov rax, 1
   syscall


   mov ecx, ebx
loop l1

mov rdi, 0
mov rax, 60
int 80h
