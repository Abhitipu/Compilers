	.file	"./testcases/input/ass6_19CS10069_19CS30007_test_2.c"
	.text
	.section	.rodata
.LC0:
	.string	"\n\n------------------------------------------\n\n"
.LC1:
	.string	"Testing function calls\n"
.LC2:
	.string	"Numbers before swapping\n"
.LC3:
	.string	" "
.LC4:
	.string	"\n"
.LC5:
	.string	"Numbers after swapping\n"
.LC6:
	.string	" "
.LC7:
	.string	"\n"
.LC8:
	.string	"\n\nDone test\n\n"
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
	subq	$192, %rsp

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
	movq 	$.LC2, -72(%rbp)
	movq 	-72(%rbp), %rdi
	call	printStr
	movl	%eax, -80(%rbp)
	movq 	-24(%rbp), %rdi
	call	printInt
	movl	%eax, -84(%rbp)
	movq 	$.LC3, -88(%rbp)
	movq 	-88(%rbp), %rdi
	call	printStr
	movl	%eax, -96(%rbp)
	movq 	-28(%rbp), %rdi
	call	printInt
	movl	%eax, -100(%rbp)
	movq 	$.LC4, -104(%rbp)
	movq 	-104(%rbp), %rdi
	call	printStr
	movl	%eax, -112(%rbp)
	leaq	-24(%rbp), %rax
	movq 	%rax, -116(%rbp)
	leaq	-28(%rbp), %rax
	movq 	%rax, -124(%rbp)
	movq 	-116(%rbp), %rdi
	movq 	-124(%rbp), %rsi
	call	swapTwoNumbers
	movl	%eax, -132(%rbp)
	movq 	$.LC5, -132(%rbp)
	movq 	-132(%rbp), %rdi
	call	printStr
	movl	%eax, -140(%rbp)
	movq 	-24(%rbp), %rdi
	call	printInt
	movl	%eax, -144(%rbp)
	movq 	$.LC6, -148(%rbp)
	movq 	-148(%rbp), %rdi
	call	printStr
	movl	%eax, -156(%rbp)
	movq 	-28(%rbp), %rdi
	call	printInt
	movl	%eax, -160(%rbp)
	movq 	$.LC7, -164(%rbp)
	movq 	-164(%rbp), %rdi
	call	printStr
	movl	%eax, -172(%rbp)
	movq 	$.LC8, -176(%rbp)
	movq 	-176(%rbp), %rdi
	call	printStr
	movl	%eax, -184(%rbp)
	movl	$0, %eax
	movl 	%eax, -188(%rbp)
	movl	-188(%rbp), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE1:
	.size	main, .-main
