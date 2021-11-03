	.file	"./testcases/input/ass6_19CS10069_19CS30007_test_4.c"
	.text
	.section	.rodata
.LC0:
	.string	"Program to find gcd of two numbers\n"
.LC1:
	.string	"Enter the first number: "
.LC2:
	.string	"Enter the second number: "
.LC3:
	.string	"The gcd comes out to be: "
.LC4:
	.string	"\n\n"
	.text
	.globl	gcdAlgorithm
	.type	gcdAlgorithm, @function
gcdAlgorithm: 
.LFB0:
	.cfi_startproc
	pushq 	%rbp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movq 	%rsp, %rbp
	.cfi_def_cfa_register 5
	subq	$44, %rsp
	movq	%rdi, -20(%rbp)
	movq	%rsi, -16(%rbp)
	movl	$0, %eax
	movl 	%eax, -24(%rbp)
	movl	-20(%rbp), %eax
	cmpl	-24(%rbp), %eax
	je .L1
	jmp .L2
.L1: 
	movl	-16(%rbp), %eax
	jmp .L3
.L2: 
	movl 	-16(%rbp), %eax
	cltd
	idivl 	-20(%rbp)
	movl 	%edx, -28(%rbp)
	movq 	-28(%rbp), %rdi
	movq 	-20(%rbp), %rsi
	call	gcdAlgorithm
	movl	%eax, -32(%rbp)
	movl	-32(%rbp), %eax
.L3: 
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE0:
	.size	gcdAlgorithm, .-gcdAlgorithm
	.globl	main
	.type	main, @function
main: 
.LFB1:
	.cfi_startproc
	pushq 	%rbp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movq 	%rsp, %rbp
	.cfi_def_cfa_register 5
	subq	$132, %rsp

	movq 	$.LC0, -24(%rbp)
	movq 	-24(%rbp), %rdi
	call	printStr
	movl	%eax, -32(%rbp)
	movq 	$.LC1, -36(%rbp)
	movq 	-36(%rbp), %rdi
	call	printStr
	movl	%eax, -44(%rbp)
	leaq	-48(%rbp), %rax
	movq 	%rax, -52(%rbp)
	movq 	-52(%rbp), %rdi
	call	readInt
	movl	%eax, -60(%rbp)
	movq 	$.LC2, -64(%rbp)
	movq 	-64(%rbp), %rdi
	call	printStr
	movl	%eax, -72(%rbp)
	leaq	-76(%rbp), %rax
	movq 	%rax, -80(%rbp)
	movq 	-80(%rbp), %rdi
	call	readInt
	movl	%eax, -88(%rbp)
	movq 	-48(%rbp), %rdi
	movq 	-76(%rbp), %rsi
	call	gcdAlgorithm
	movl	%eax, -96(%rbp)
	movl	-96(%rbp), %eax
	movl 	%eax, -92(%rbp)
	movq 	$.LC3, -100(%rbp)
	movq 	-100(%rbp), %rdi
	call	printStr
	movl	%eax, -108(%rbp)
	movq 	-92(%rbp), %rdi
	call	printInt
	movl	%eax, -112(%rbp)
	movq 	$.LC4, -116(%rbp)
	movq 	-116(%rbp), %rdi
	call	printStr
	movl	%eax, -124(%rbp)
	movl	$0, %eax
	movl 	%eax, -128(%rbp)
	movl	-128(%rbp), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE1:
	.size	main, .-main
