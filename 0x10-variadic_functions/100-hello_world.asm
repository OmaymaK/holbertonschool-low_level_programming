;Filename: 100-hello_world.asm
;author: omayma korbi
;description: a 64-bit program in assembly that prints Hello, World.
global main
section .text
main:
  mov edx,msglen
   mov ecx,message
   mov ebx,1
   mov eax,4
   int 0x80

   mov eax,0
   int 0x80
section .data
	message: db "Hello, World", 0xa
	msglen equ $ - message
