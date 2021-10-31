	.file	"test_tiny_1.c"
	.text
	.globl	printInt
	.type	printInt, @function
printInt:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$88, %rsp
	.cfi_offset 3, -24
	movl	%edi, -84(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -24(%rbp)
	xorl	%eax, %eax
	movq	%rsp, %rax
	movq	%rax, %rdi
	movl	$13, -60(%rbp)
	movl	-60(%rbp), %eax
	movslq	%eax, %rdx
	subq	$1, %rdx
	movq	%rdx, -56(%rbp)
	movslq	%eax, %rdx
	movq	%rdx, %r8
	movl	$0, %r9d
	movslq	%eax, %rdx
	movq	%rdx, %rcx
	movl	$0, %ebx
	cltq
	movl	$16, %edx
	subq	$1, %rdx
	addq	%rdx, %rax
	movl	$16, %esi
	movl	$0, %edx
	divq	%rsi
	imulq	$16, %rax, %rax
	movq	%rax, %rdx
	andq	$-4096, %rdx
	movq	%rsp, %rbx
	subq	%rdx, %rbx
	movq	%rbx, %rdx
.L2:
	cmpq	%rdx, %rsp
	je	.L3
	subq	$4096, %rsp
	orq	$0, 4088(%rsp)
	jmp	.L2
.L3:
	movq	%rax, %rdx
	andl	$4095, %edx
	subq	%rdx, %rsp
	movq	%rax, %rdx
	andl	$4095, %edx
	testq	%rdx, %rdx
	je	.L4
	andl	$4095, %eax
	subq	$8, %rax
	addq	%rsp, %rax
	orq	$0, (%rax)
.L4:
	movq	%rsp, %rax
	addq	$0, %rax
	movq	%rax, -48(%rbp)
	movl	$0, -76(%rbp)
	movl	$0, -80(%rbp)
	cmpl	$-2147483648, -84(%rbp)
	jne	.L5
	movabsq	$3690757306333606445, %rax
	movq	%rax, -36(%rbp)
	movl	$3683382, -28(%rbp)
	movl	$0, -72(%rbp)
	jmp	.L6
.L7:
	movl	-76(%rbp), %eax
	leal	1(%rax), %edx
	movl	%edx, -76(%rbp)
	movl	-72(%rbp), %edx
	movslq	%edx, %rdx
	movzbl	-36(%rbp,%rdx), %ecx
	movq	-48(%rbp), %rdx
	cltq
	movb	%cl, (%rdx,%rax)
	addl	$1, -72(%rbp)
.L6:
	cmpl	$10, -72(%rbp)
	jle	.L7
	jmp	.L8
.L5:
	cmpl	$0, -84(%rbp)
	jne	.L9
	movl	-76(%rbp), %eax
	leal	1(%rax), %edx
	movl	%edx, -76(%rbp)
	movq	-48(%rbp), %rdx
	cltq
	movb	$48, (%rdx,%rax)
	jmp	.L8
.L9:
	cmpl	$0, -84(%rbp)
	jns	.L10
	negl	-84(%rbp)
	movl	$1, -80(%rbp)
	movl	-76(%rbp), %eax
	leal	1(%rax), %edx
	movl	%edx, -76(%rbp)
	movq	-48(%rbp), %rdx
	cltq
	movb	$45, (%rdx,%rax)
.L10:
	movl	$0, -68(%rbp)
	movl	-84(%rbp), %eax
	movl	%eax, -64(%rbp)
	jmp	.L11
.L12:
	movl	-64(%rbp), %eax
	movslq	%eax, %rdx
	imulq	$1717986919, %rdx, %rdx
	shrq	$32, %rdx
	sarl	$2, %edx
	sarl	$31, %eax
	subl	%eax, %edx
	movl	%edx, %eax
	movl	%eax, -64(%rbp)
	addl	$1, -68(%rbp)
.L11:
	cmpl	$0, -64(%rbp)
	jg	.L12
	movl	-68(%rbp), %eax
	addl	%eax, -76(%rbp)
	movl	-84(%rbp), %eax
	movl	%eax, -64(%rbp)
	jmp	.L13
.L14:
	movl	-64(%rbp), %ecx
	movslq	%ecx, %rax
	imulq	$1717986919, %rax, %rax
	shrq	$32, %rax
	movl	%eax, %edx
	sarl	$2, %edx
	movl	%ecx, %eax
	sarl	$31, %eax
	subl	%eax, %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	addl	%eax, %eax
	subl	%eax, %ecx
	movl	%ecx, %edx
	movl	%edx, %eax
	leal	48(%rax), %ecx
	movl	-68(%rbp), %eax
	leal	-1(%rax), %edx
	movl	-80(%rbp), %eax
	addl	%edx, %eax
	movq	-48(%rbp), %rdx
	cltq
	movb	%cl, (%rdx,%rax)
	movl	-64(%rbp), %eax
	movslq	%eax, %rdx
	imulq	$1717986919, %rdx, %rdx
	shrq	$32, %rdx
	sarl	$2, %edx
	sarl	$31, %eax
	subl	%eax, %edx
	movl	%edx, %eax
	movl	%eax, -64(%rbp)
	subl	$1, -68(%rbp)
.L13:
	cmpl	$0, -68(%rbp)
	jg	.L14
.L8:
	movq	-48(%rbp), %rax
	movl	-76(%rbp), %edx
	movq	%rax, %rsi
#APP
# 38 "./testcases/input/test_tiny_1.c" 1
	movl $1, %eax 
	movq $1, %rdi 
	syscall 
	
# 0 "" 2
#NO_APP
	movl	$1, %eax
	movq	%rdi, %rsp
	movq	-24(%rbp), %rsi
	xorq	%fs:40, %rsi
	je	.L16
	call	__stack_chk_fail@PLT
.L16:
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	printInt, .-printInt
	.globl	NestyFunction
	.type	NestyFunction, @function
NestyFunction:
.LFB1:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movl	%edi, -20(%rbp)
	movl	-20(%rbp), %eax
	movl	%eax, -12(%rbp)
	movl	-12(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -8(%rbp)
	movl	-8(%rbp), %eax
	addl	%eax, -12(%rbp)
	movl	-12(%rbp), %eax
	movl	%eax, %edi
	call	printInt
	movl	-12(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -4(%rbp)
	movl	-4(%rbp), %eax
	addl	%eax, -12(%rbp)
	movl	-12(%rbp), %eax
	movl	%eax, %edi
	call	printInt
	movl	-12(%rbp), %eax
	movl	%eax, %edi
	call	printInt
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	NestyFunction, .-NestyFunction
	.globl	main
	.type	main, @function
main:
.LFB2:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$1, %edi
	call	NestyFunction
	movl	$0, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	 1f - 0f
	.long	 4f - 1f
	.long	 5
0:
	.string	 "GNU"
1:
	.align 8
	.long	 0xc0000002
	.long	 3f - 2f
2:
	.long	 0x3
3:
	.align 8
4:
