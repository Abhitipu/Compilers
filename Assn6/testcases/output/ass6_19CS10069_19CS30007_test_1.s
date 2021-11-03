	.file	"./testcases/input/ass6_19CS10069_19CS30007_test_1.c"
	.text
	.comm	and.Global, 4, 4
	.comm	me.Global, 32, 32
	.globl	t_2
	.data
	.align 4
	.type	t_2, @object
	.size	t_2, 4
t_2:
	.long	8
	.comm	got.Global, 4, 4
	.globl	t_3
	.data
	.align 4
	.type	t_3, @object
	.size	t_3, 4
t_3:
	.long	4
	.comm	t_4, 4, 4
	.comm	a.Global, 8, 8
	.comm	whole.Global, 4, 4
	.globl	lot.Global
	.data
	.align 4
	.type	lot.Global, @object
	.size	lot.Global, 4
lot.Global:
	.long	0
	.globl	t_5
	.data
	.align 4
	.type	t_5, @object
	.size	t_5, 4
t_5:
	.long	0
	.comm	of.Global, 1, 1
	.comm	history.Global, 8, 8
	.section	.rodata
.LC0:
	.string	"Testing some binary operations\n"
.LC1:
	.string	" + "
.LC2:
	.string	" = "
.LC3:
	.string	"\n"
.LC4:
	.string	" - "
.LC5:
	.string	" = "
.LC6:
	.string	"\n"
.LC7:
	.string	" * "
.LC8:
	.string	" = "
.LC9:
	.string	"\n"
.LC10:
	.string	" / "
.LC11:
	.string	" = "
.LC12:
	.string	"\n"
	.text
	movl	0(%rbp), %eax
	movl 	%eax, 0(%rbp)
	movl	0(%rbp), %eax
	movl 	%eax, 0(%rbp)
	movl	$8, %eax
	movl 	%eax, 0(%rbp)
	movl	$4, %eax
	movl 	%eax, 0(%rbp)
	movl	0(%rbp), %eax
	negl	%eax
	movl 	%eax, 0(%rbp)
	movl	0(%rbp), %eax
	movl 	%eax, 0(%rbp)
	movl	$0, %eax
	movl 	%eax, 0(%rbp)
	movl	0(%rbp), %eax
	movl 	%eax, 0(%rbp)
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
	subq	$314, %rsp

	movl	0(%rbp), %eax
	movl 	%eax, -44(%rbp)
	movl	-44(%rbp), %eax
	movl 	%eax, -40(%rbp)
	movl	$0, %eax
	movl 	%eax, -52(%rbp)
	movl	-52(%rbp), %eax
	movl 	%eax, -48(%rbp)
	movb	$'X', -57(%rbp)
	movl	-57(%rbp), %eax
	movl 	%eax, -56(%rbp)
	movq 	$.LC0, -58(%rbp)
	movq 	-58(%rbp), %rdi
	call	printStr
	movl	%eax, -66(%rbp)
	movl	$24, %eax
	movl 	%eax, -70(%rbp)
	movl	-70(%rbp), %eax
	movl 	%eax, -28(%rbp)
	movl	$8, %eax
	movl 	%eax, -78(%rbp)
	movl	-78(%rbp), %eax
	movl 	%eax, -36(%rbp)
	movl 	-28(%rbp), %eax
	movl 	-36(%rbp), %edx
	addl 	%edx, %eax
	movl 	%eax, -90(%rbp)
	movl	-90(%rbp), %eax
	movl 	%eax, -86(%rbp)
	movq 	-28(%rbp), %rdi
	call	printInt
	movl	%eax, -94(%rbp)
	movq 	$.LC1, -98(%rbp)
	movq 	-98(%rbp), %rdi
	call	printStr
	movl	%eax, -106(%rbp)
	movq 	-36(%rbp), %rdi
	call	printInt
	movl	%eax, -110(%rbp)
	movq 	$.LC2, -114(%rbp)
	movq 	-114(%rbp), %rdi
	call	printStr
	movl	%eax, -122(%rbp)
	movq 	-86(%rbp), %rdi
	call	printInt
	movl	%eax, -126(%rbp)
	movq 	$.LC3, -130(%rbp)
	movq 	-130(%rbp), %rdi
	call	printStr
	movl	%eax, -138(%rbp)
	movl 	-28(%rbp), %eax
	movl 	-36(%rbp), %edx
	subl 	%edx, %eax
	movl 	%eax, -146(%rbp)
	movl	-146(%rbp), %eax
	movl 	%eax, -142(%rbp)
	movq 	-28(%rbp), %rdi
	call	printInt
	movl	%eax, -150(%rbp)
	movq 	$.LC4, -154(%rbp)
	movq 	-154(%rbp), %rdi
	call	printStr
	movl	%eax, -162(%rbp)
	movq 	-36(%rbp), %rdi
	call	printInt
	movl	%eax, -166(%rbp)
	movq 	$.LC5, -170(%rbp)
	movq 	-170(%rbp), %rdi
	call	printStr
	movl	%eax, -178(%rbp)
	movq 	-142(%rbp), %rdi
	call	printInt
	movl	%eax, -182(%rbp)
	movq 	$.LC6, -186(%rbp)
	movq 	-186(%rbp), %rdi
	call	printStr
	movl	%eax, -194(%rbp)
	movl 	-28(%rbp), %eax
	imull 	-36(%rbp), %eax
	movl 	%eax, -202(%rbp)
	movl	-202(%rbp), %eax
	movl 	%eax, -198(%rbp)
	movq 	-28(%rbp), %rdi
	call	printInt
	movl	%eax, -206(%rbp)
	movq 	$.LC7, -210(%rbp)
	movq 	-210(%rbp), %rdi
	call	printStr
	movl	%eax, -218(%rbp)
	movq 	-36(%rbp), %rdi
	call	printInt
	movl	%eax, -222(%rbp)
	movq 	$.LC8, -226(%rbp)
	movq 	-226(%rbp), %rdi
	call	printStr
	movl	%eax, -234(%rbp)
	movq 	-198(%rbp), %rdi
	call	printInt
	movl	%eax, -238(%rbp)
	movq 	$.LC9, -242(%rbp)
	movq 	-242(%rbp), %rdi
	call	printStr
	movl	%eax, -250(%rbp)
	movl 	-28(%rbp), %eax
	cltd
	idivl 	-36(%rbp)
	movl 	%eax, -258(%rbp)
	movl	-258(%rbp), %eax
	movl 	%eax, -254(%rbp)
	movq 	-28(%rbp), %rdi
	call	printInt
	movl	%eax, -262(%rbp)
	movq 	$.LC10, -266(%rbp)
	movq 	-266(%rbp), %rdi
	call	printStr
	movl	%eax, -274(%rbp)
	movq 	-36(%rbp), %rdi
	call	printInt
	movl	%eax, -278(%rbp)
	movq 	$.LC11, -282(%rbp)
	movq 	-282(%rbp), %rdi
	call	printStr
	movl	%eax, -290(%rbp)
	movq 	-254(%rbp), %rdi
	call	printInt
	movl	%eax, -294(%rbp)
	movq 	$.LC12, -298(%rbp)
	movq 	-298(%rbp), %rdi
	call	printStr
	movl	%eax, -306(%rbp)
	movl	$0, %eax
	movl 	%eax, -310(%rbp)
	movl	-310(%rbp), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
