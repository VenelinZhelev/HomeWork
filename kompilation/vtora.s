	.file	"vtora.c"
	.text
	.def	__main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
.LC0:
	.ascii "NOD e %d\0"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$64, %rsp
	.seh_stackalloc	64
	.seh_endprologue
	call	__main
	movl	$12, -16(%rbp)
	movl	$18, -20(%rbp)
	movl	-16(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	$1, -12(%rbp)
	jmp	.L2
.L5:
	movl	-4(%rbp), %eax
	cltd
	idivl	-20(%rbp)
	movl	%edx, %eax
	testl	%eax, %eax
	jne	.L3
	movl	-4(%rbp), %eax
	movl	%eax, -8(%rbp)
	jmp	.L4
.L3:
	movl	-16(%rbp), %eax
	imull	-12(%rbp), %eax
	movl	%eax, -4(%rbp)
	addl	$1, -12(%rbp)
.L2:
	movl	-12(%rbp), %eax
	cmpl	-20(%rbp), %eax
	jle	.L5
.L4:
	movl	-8(%rbp), %eax
	movl	%eax, %edx
	leaq	.LC0(%rip), %rax
	movq	%rax, %rcx
	call	printf
	movl	$0, %eax
	addq	$64, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.ident	"GCC: (Rev7, Built by MSYS2 project) 13.1.0"
	.def	printf;	.scl	2;	.type	32;	.endef
