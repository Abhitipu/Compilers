	.file	"test_tiny_2.c"
	.text
	.globl	_Z14swapTwoNumbersPiS_
	.type	_Z14swapTwoNumbersPiS_, @function
_Z14swapTwoNumbersPiS_:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movq	-24(%rbp), %rax
	movl	(%rax), %eax
	movl	%eax, -4(%rbp)
	movq	-32(%rbp), %rax
	movl	(%rax), %edx
	movq	-24(%rbp), %rax
	movl	%edx, (%rax)
	movq	-32(%rbp), %rax
	movl	-4(%rbp), %edx
	movl	%edx, (%rax)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	_Z14swapTwoNumbersPiS_, .-_Z14swapTwoNumbersPiS_
	.globl	_Z12areaOfCirclei
	.type	_Z12areaOfCirclei, @function
_Z12areaOfCirclei:
.LFB1:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -20(%rbp)
	movss	.LC0(%rip), %xmm0
	movss	%xmm0, -12(%rbp)
	movl	-20(%rbp), %eax
	imull	%eax, %eax
	movl	%eax, -8(%rbp)
	cvtsi2ssl	-8(%rbp), %xmm0
	movss	-12(%rbp), %xmm1
	mulss	%xmm1, %xmm0
	movss	%xmm0, -4(%rbp)
	movss	-4(%rbp), %xmm0
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	_Z12areaOfCirclei, .-_Z12areaOfCirclei
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
	subq	$32, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movl	$8, -24(%rbp)
	movl	$2, -20(%rbp)
	movss	.LC1(%rip), %xmm0
	movss	%xmm0, -16(%rbp)
	movl	-20(%rbp), %eax
	movl	%eax, %edi
	call	_Z12areaOfCirclei
	movd	%xmm0, %eax
	movl	%eax, -12(%rbp)
	leaq	-20(%rbp), %rdx
	leaq	-24(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_Z14swapTwoNumbersPiS_
	movl	-20(%rbp), %eax
	movl	%eax, %edi
	call	_Z12areaOfCirclei
	movd	%xmm0, %eax
	movl	%eax, -12(%rbp)
	movl	$0, %eax
	movq	-8(%rbp), %rcx
	xorq	%fs:40, %rcx
	je	.L7
	call	__stack_chk_fail@PLT
.L7:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	main, .-main
	.section	.rodata
	.align 4
.LC0:
	.long	1078523331
	.align 4
.LC1:
	.long	1075838976
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
