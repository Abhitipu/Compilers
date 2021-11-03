	.file	"./testcases/input/ass6_19CS10069_19CS30007_test_2.c"
	.text
	.section	.rodata
.LC0:
	.string	"Testing function calls\n"
.LC1:
	.string	"Numbers before swapping\n"
.LC2:
	.string	" "
.LC3:
	.string	"\n"
.LC4:
	.string	"Numbers after swapping\n"
.LC5:
	.string	" "
.LC6:
	.string	"\n"
	.text
	.globl	swapTwoNumbers
	.type	swapTwoNumbers, @function
swapTwoNumbers: 
.LFB0:
	.cfi_startproc
	pushq 	%rbp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movq 	%rsp, %rbp
	.cfi_def_cfa_register 5
	subq	$60, %rsp
	movq	%rdi, -20(%rbp)
	movq	%rsi, -12(%rbp)
	movq	-20(%rbp), %rax
	movl	(%rax),%eax
	movl 	%eax, -28(%rbp)
	movl	-28(%rbp), %eax
	movl 	%eax, -24(%rbp)
	movq	-20(%rbp), %rax
	movl	(%rax),%eax
	movl 	%eax, -36(%rbp)
	movq	-12(%rbp), %rax
	movl	(%rax),%eax
	movl 	%eax, -40(%rbp)
	movq	-20(%rbp), %rax
	movl	-40(%rbp), %edx
	movl	%edx, (%rax)
	movq	-12(%rbp), %rax
	movl	(%rax),%eax
	movl 	%eax, -44(%rbp)
	movq	-12(%rbp), %rax
	movl	-24(%rbp), %edx
	movl	%edx, (%rax)
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE0:
	.size	swapTwoNumbers, .-swapTwoNumbers
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
	subq	$168, %rsp

	movl	$2, %eax
	movl 	%eax, -32(%rbp)
	movl	-32(%rbp), %eax
	movl 	%eax, -24(%rbp)
	movl	$3, %eax
	movl 	%eax, -40(%rbp)
	movl	-40(%rbp), %eax
	movl 	%eax, -28(%rbp)
	movq 	$.LC0, -48(%rbp)
	movq 	-48(%rbp), %rdi
	call	printStr
	movl	%eax, -56(%rbp)
	movq 	$.LC1, -60(%rbp)
	movq 	-60(%rbp), %rdi
	call	printStr
	movl	%eax, -68(%rbp)
	movq 	-24(%rbp), %rdi
	call	printInt
	movl	%eax, -72(%rbp)
	movq 	$.LC2, -76(%rbp)
	movq 	-76(%rbp), %rdi
	call	printStr
	movl	%eax, -84(%rbp)
	movq 	-28(%rbp), %rdi
	call	printInt
	movl	%eax, -88(%rbp)
	movq 	$.LC3, -92(%rbp)
	movq 	-92(%rbp), %rdi
	call	printStr
	movl	%eax, -100(%rbp)
	leaq	-24(%rbp), %rax
	movq 	%rax, -104(%rbp)
	leaq	-28(%rbp), %rax
	movq 	%rax, -112(%rbp)
	movq 	-104(%rbp), %rdi
	movq 	-112(%rbp), %rsi
	call	swapTwoNumbers
	movl	%eax, -120(%rbp)
	movq 	$.LC4, -120(%rbp)
	movq 	-120(%rbp), %rdi
	call	printStr
	movl	%eax, -128(%rbp)
	movq 	-24(%rbp), %rdi
	call	printInt
	movl	%eax, -132(%rbp)
	movq 	$.LC5, -136(%rbp)
	movq 	-136(%rbp), %rdi
	call	printStr
	movl	%eax, -144(%rbp)
	movq 	-28(%rbp), %rdi
	call	printInt
	movl	%eax, -148(%rbp)
	movq 	$.LC6, -152(%rbp)
	movq 	-152(%rbp), %rdi
	call	printStr
	movl	%eax, -160(%rbp)
	movl	$0, %eax
	movl 	%eax, -164(%rbp)
	movl	-164(%rbp), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE1:
	.size	main, .-main
