	.file	"./testcases/input/ass6_19CS10069_19CS30007_test_6.c"
	.text
	.section	.rodata
.LC0:
	.string	"K(should be 6) inside nested block = "
.LC1:
	.string	"\n"
.LC2:
	.string	"K(should be 2) outside nested block = "
.LC3:
	.string	"\n"
.LC4:
	.string	"Program to find sum of all elements of an array\n"
.LC5:
	.string	"Sum of all elements of the array is: "
.LC6:
	.string	"\n"
	.text
	.globl	NestyFunction
	.type	NestyFunction, @function
NestyFunction: 
.LFB0:
	.cfi_startproc
	pushq 	%rbp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movq 	%rsp, %rbp
	.cfi_def_cfa_register 5
	subq	$124, %rsp
	movq	%rdi, -20(%rbp)
	movl	$2, %eax
	movl 	%eax, -28(%rbp)
	movl	-28(%rbp), %eax
	movl 	%eax, -24(%rbp)
	nop
	movl	$3, %eax
	movl 	%eax, -68(%rbp)
	movl	-68(%rbp), %eax
	movl 	%eax, -64(%rbp)
	nop
	movl	$4, %eax
	movl 	%eax, -76(%rbp)
	movl	-76(%rbp), %eax
	movl 	%eax, -72(%rbp)
	nop
	movl	$5, %eax
	movl 	%eax, -84(%rbp)
	movl	-84(%rbp), %eax
	movl 	%eax, -80(%rbp)
	nop
	movl	-80(%rbp), %eax
	movl 	%eax, -88(%rbp)
	addl 	$1, -80(%rbp)
	movq 	$.LC0, -92(%rbp)
	movq 	-92(%rbp), %rdi
	call	printStr
	movl	%eax, -100(%rbp)
	movq 	-80(%rbp), %rdi
	call	printInt
	movl	%eax, -104(%rbp)
	movq 	$.LC1, -108(%rbp)
	movq 	-108(%rbp), %rdi
	call	printStr
	movl	%eax, -116(%rbp)
	movq 	$.LC2, -32(%rbp)
	movq 	-32(%rbp), %rdi
	call	printStr
	movl	%eax, -40(%rbp)
	movq 	-24(%rbp), %rdi
	call	printInt
	movl	%eax, -44(%rbp)
	movq 	$.LC3, -48(%rbp)
	movq 	-48(%rbp), %rdi
	call	printStr
	movl	%eax, -56(%rbp)
	movl 	-20(%rbp), %eax
	movl 	-24(%rbp), %edx
	addl 	%edx, %eax
	movl 	%eax, -60(%rbp)
	movl	-60(%rbp), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE0:
	.size	NestyFunction, .-NestyFunction
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
	subq	$244, %rsp

	movq 	$.LC4, -24(%rbp)
	movq 	-24(%rbp), %rdi
	call	printStr
	movl	%eax, -32(%rbp)
	movl	$6, %eax
	movl 	%eax, -60(%rbp)
	movl	$0, %eax
	movl 	%eax, -64(%rbp)
	movl 	-64(%rbp), %eax
	imull 	$4, %eax
	movl 	%eax, -68(%rbp)
	movl	$1, %eax
	movl 	%eax, -72(%rbp)
	movl 	-72(%rbp), %edx
	movl 	-68(%rbp), %eax
	negl	%eax
	cltq
	movl 	%edx, -36(%rbp, %rax, 1)
	movl	$1, %eax
	movl 	%eax, -80(%rbp)
	movl 	-80(%rbp), %eax
	imull 	$4, %eax
	movl 	%eax, -84(%rbp)
	movl	$10, %eax
	movl 	%eax, -88(%rbp)
	movl 	-88(%rbp), %edx
	movl 	-84(%rbp), %eax
	negl	%eax
	cltq
	movl 	%edx, -36(%rbp, %rax, 1)
	movl	$2, %eax
	movl 	%eax, -96(%rbp)
	movl 	-96(%rbp), %eax
	imull 	$4, %eax
	movl 	%eax, -100(%rbp)
	movl	$100, %eax
	movl 	%eax, -104(%rbp)
	movl 	-104(%rbp), %edx
	movl 	-100(%rbp), %eax
	negl	%eax
	cltq
	movl 	%edx, -36(%rbp, %rax, 1)
	movl	$3, %eax
	movl 	%eax, -112(%rbp)
	movl 	-112(%rbp), %eax
	imull 	$4, %eax
	movl 	%eax, -116(%rbp)
	movl	$1000, %eax
	movl 	%eax, -120(%rbp)
	movl 	-120(%rbp), %edx
	movl 	-116(%rbp), %eax
	negl	%eax
	cltq
	movl 	%edx, -36(%rbp, %rax, 1)
	movl	$4, %eax
	movl 	%eax, -128(%rbp)
	movl 	-128(%rbp), %eax
	imull 	$4, %eax
	movl 	%eax, -132(%rbp)
	movl	$10000, %eax
	movl 	%eax, -136(%rbp)
	movl 	-136(%rbp), %edx
	movl 	-132(%rbp), %eax
	negl	%eax
	cltq
	movl 	%edx, -36(%rbp, %rax, 1)
	movl	$5, %eax
	movl 	%eax, -144(%rbp)
	movl 	-144(%rbp), %eax
	imull 	$4, %eax
	movl 	%eax, -148(%rbp)
	movl	$100000, %eax
	movl 	%eax, -152(%rbp)
	movl 	-152(%rbp), %edx
	movl 	-148(%rbp), %eax
	negl	%eax
	cltq
	movl 	%edx, -36(%rbp, %rax, 1)
	movl	$0, %eax
	movl 	%eax, -164(%rbp)
	movl	-164(%rbp), %eax
	movl 	%eax, -160(%rbp)
	nop
	movl	$0, %eax
	movl 	%eax, -204(%rbp)
	movl	-204(%rbp), %eax
	movl 	%eax, -200(%rbp)
.L1: 
	movl	$6, %eax
	movl 	%eax, -208(%rbp)
	movl	-200(%rbp), %eax
	cmpl	-208(%rbp), %eax
	jl .L3
	jmp .L4
.L2: 
	movl	-200(%rbp), %eax
	movl 	%eax, -212(%rbp)
	addl 	$1, -200(%rbp)
	jmp .L1
.L3: 
	movl 	-200(%rbp), %eax
	imull 	$4, %eax
	movl 	%eax, -216(%rbp)
	movl 	-216(%rbp), %eax
	negl	%eax
	cltq
	movl 	-36(%rbp, %rax, 1), %eax
	movl 	%eax, -220(%rbp)
	movl	$2, %eax
	movl 	%eax, -224(%rbp)
	movl 	-220(%rbp), %eax
	movl 	-224(%rbp), %edx
	subl 	%edx, %eax
	movl 	%eax, -228(%rbp)
	movq 	-228(%rbp), %rdi
	call	NestyFunction
	movl	%eax, -232(%rbp)
	movl 	-160(%rbp), %eax
	movl 	-232(%rbp), %edx
	addl 	%edx, %eax
	movl 	%eax, -236(%rbp)
	movl	-236(%rbp), %eax
	movl 	%eax, -160(%rbp)
	jmp .L2
.L4: 
	movq 	$.LC5, -168(%rbp)
	movq 	-168(%rbp), %rdi
	call	printStr
	movl	%eax, -176(%rbp)
	movq 	-160(%rbp), %rdi
	call	printInt
	movl	%eax, -180(%rbp)
	movq 	$.LC6, -184(%rbp)
	movq 	-184(%rbp), %rdi
	call	printStr
	movl	%eax, -192(%rbp)
	movl	$0, %eax
	movl 	%eax, -196(%rbp)
	movl	-196(%rbp), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE1:
	.size	main, .-main
