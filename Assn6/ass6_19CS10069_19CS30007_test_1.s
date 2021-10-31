	.file	"ass6_19CS10069_19CS30007_test_1.c"
	.text
	.globl	eps
	.data
	.align 4
	.type	eps, @object
	.size	eps, 4
eps:
	.long	563319535
	.comm	you,60,32
	.comm	and,4,4
	.comm	me,32,32
	.globl	got
	.align 4
	.type	got, @object
	.size	got, 4
got:
	.long	-4
	.comm	a,8,8
	.comm	whole,4,4
	.globl	lot
	.bss
	.align 4
	.type	lot, @object
	.size	lot, 4
lot:
	.zero	4
	.comm	of,1,1
	.comm	history,8,8
	.text
	.globl	NestyFunction
	.type	NestyFunction, @function
NestyFunction:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -20(%rbp)
	movl	$2, -16(%rbp)
	movl	$3, -12(%rbp)
	movl	$4, -8(%rbp)
	movl	$5, -4(%rbp)
	addl	$1, -4(%rbp)
	movl	-16(%rbp), %eax
	addl	$12, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	NestyFunction, .-NestyFunction
	.globl	main
	.type	main, @function
main:
.LFB1:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$928, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movss	.LC0(%rip), %xmm0
	movss	%xmm0, -888(%rbp)
	movl	$0, -904(%rbp)
	movb	$88, -913(%rbp)
	movl	$5, -884(%rbp)
	movl	$100, -908(%rbp)
	movl	$0, -912(%rbp)
	movl	$-234, -828(%rbp)
	movl	-828(%rbp), %eax
	movl	%eax, -880(%rbp)
	movl	$122, -692(%rbp)
	movl	-692(%rbp), %eax
	movl	%eax, -876(%rbp)
	movl	$191, -312(%rbp)
	movl	-312(%rbp), %eax
	movl	%eax, -872(%rbp)
	cvtsi2ssl	-884(%rbp), %xmm0
	movss	-888(%rbp), %xmm1
	mulss	%xmm1, %xmm0
	movss	%xmm0, -888(%rbp)
	movl	$0, -912(%rbp)
	jmp	.L4
.L5:
	addl	$2, -908(%rbp)
	movl	-912(%rbp), %eax
	leal	0(,%rax,4), %edx
	movl	-908(%rbp), %eax
	addl	%eax, %edx
	movl	-912(%rbp), %eax
	cltq
	movl	%edx, -832(%rbp,%rax,4)
	addl	$1, -912(%rbp)
.L4:
	cmpl	$9, -912(%rbp)
	jle	.L5
	movl	$0, -912(%rbp)
	movl	$10, -884(%rbp)
.L6:
	movl	-912(%rbp), %eax
	cltq
	movl	-832(%rbp,%rax,4), %eax
	addl	%eax, -904(%rbp)
	addl	$1, -912(%rbp)
	movl	-912(%rbp), %eax
	cmpl	-884(%rbp), %eax
	jl	.L6
	movl	$0, -900(%rbp)
	jmp	.L7
.L12:
	movl	$0, -896(%rbp)
	jmp	.L8
.L11:
	movl	$0, -892(%rbp)
	jmp	.L9
.L10:
	movl	-900(%rbp), %edx
	movl	%edx, %eax
	addl	%eax, %eax
	addl	%eax, %edx
	movl	-896(%rbp), %eax
	sall	$2, %eax
	leal	(%rdx,%rax), %ecx
	movl	-892(%rbp), %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	leal	(%rcx,%rax), %esi
	movl	-892(%rbp), %eax
	movslq	%eax, %rdi
	movl	-900(%rbp), %eax
	movslq	%eax, %rdx
	movl	-896(%rbp), %eax
	movslq	%eax, %rcx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$2, %rax
	movq	%rcx, %rdx
	addq	%rdx, %rdx
	addq	%rcx, %rdx
	addq	%rdx, %rax
	addq	%rdi, %rax
	movl	%esi, -592(%rbp,%rax,4)
	addl	$1, -892(%rbp)
.L9:
	cmpl	$2, -892(%rbp)
	jle	.L10
	addl	$1, -896(%rbp)
.L8:
	cmpl	$3, -896(%rbp)
	jle	.L11
	addl	$1, -900(%rbp)
.L7:
	cmpl	$11, -900(%rbp)
	jle	.L12
	movl	-912(%rbp), %eax
	imull	-884(%rbp), %eax
	movl	%eax, -868(%rbp)
	movl	-912(%rbp), %edx
	movl	-884(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, -864(%rbp)
	movl	-912(%rbp), %eax
	subl	-884(%rbp), %eax
	movl	%eax, -860(%rbp)
	movl	-912(%rbp), %eax
	cltd
	idivl	-884(%rbp)
	movl	%edx, -856(%rbp)
	movl	-912(%rbp), %eax
	cltd
	idivl	-884(%rbp)
	movl	%eax, -852(%rbp)
	movl	-912(%rbp), %eax
	xorl	-884(%rbp), %eax
	movl	%eax, -848(%rbp)
	movl	-912(%rbp), %eax
	orl	-884(%rbp), %eax
	movl	%eax, -844(%rbp)
	movl	$8388608, -840(%rbp)
	movl	-840(%rbp), %eax
	sarl	$23, %eax
	movl	%eax, -836(%rbp)
	movl	$0, %eax
	movq	-8(%rbp), %rsi
	xorq	%fs:40, %rsi
	je	.L14
	call	__stack_chk_fail@PLT
.L14:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	main, .-main
	.section	.rodata
	.align 4
.LC0:
	.long	794552063
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
