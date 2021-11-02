	.file	"./testcases/input/ass6_19CS10069_19CS30007_test_2.c"
	.text
	.text
	.globl	main
	.type	main, @function
main: 
.LFB0:
	.cfi_startproc
	pushq 	%rbp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movq 	%rsp, %rbp
	.cfi_def_cfa_register 5
	subq	$72, %rsp

	movl	$5, %eax
	movl 	%eax, -28(%rbp)
	movl	-28(%rbp), %eax
	movl 	%eax, -24(%rbp)
	leaq	-24(%rbp), %rax
	movq 	%rax, -44(%rbp)
	movl	-44(%rbp), %eax
	movl 	%eax, -36(%rbp)
	movl	-36(%rbp), %eax
	movl	0(%eax),%eax
	movl 	%eax, -60(%rbp)
	movq 	-60(%rbp), %rdi
	call	printInt
	movl	%eax, -64(%rbp)
	movl	$0, %eax
	movl 	%eax, -68(%rbp)
	movl	-68(%rbp), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
