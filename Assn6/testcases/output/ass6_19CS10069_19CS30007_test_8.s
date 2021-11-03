	.file	"./testcases/input/ass6_19CS10069_19CS30007_test_8.c"
	.text
	.section	.rodata
.LC0:
	.string	"Testing branch intruction\n"
.LC1:
	.string	"\nHello World\n"
.LC2:
	.string	"If executed correctly\n"
.LC3:
	.string	"If executed incorrectly\n"
.LC4:
	.string	"else if executed correctly\n"
.LC5:
	.string	"else executed incorrectly\n"
.LC6:
	.string	"if executed correctly\n"
.LC7:
	.string	"Else executed incorrectly\n"
.LC8:
	.string	"If executed incorrectly\n"
.LC9:
	.string	"else if executed incorrectly\n"
.LC10:
	.string	"else executed correctly\n"
.LC11:
	.string	"else executed incorrectly\n"
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
	subq	$228, %rsp

	movq 	$.LC0, -24(%rbp)
	movq 	-24(%rbp), %rdi
	call	printStr
	movl	%eax, -32(%rbp)
	movl	$707, %eax
	movl 	%eax, -40(%rbp)
	movl	-40(%rbp), %eax
	movl 	%eax, -36(%rbp)
	movq 	-36(%rbp), %rdi
	call	printInt
	movl	%eax, -44(%rbp)
	movq 	$.LC1, -48(%rbp)
	movq 	-48(%rbp), %rdi
	call	printStr
	movl	%eax, -56(%rbp)
	movl	$707, %eax
	movl 	%eax, -60(%rbp)
	movl	-36(%rbp), %eax
	cmpl	-60(%rbp), %eax
	je .L1
	jmp .L2
.L1: 
	nop
	movq 	$.LC2, -108(%rbp)
	movq 	-108(%rbp), %rdi
	call	printStr
	movl	%eax, -116(%rbp)
	jmp .L2
.L2: 
	movl	$707, %eax
	movl 	%eax, -64(%rbp)
	movl	-36(%rbp), %eax
	cmpl	-64(%rbp), %eax
	jne .L3
	jmp .L4
.L3: 
	nop
	movq 	$.LC3, -120(%rbp)
	movq 	-120(%rbp), %rdi
	call	printStr
	movl	%eax, -128(%rbp)
	jmp .L8
.L4: 
	movl	$500, %eax
	movl 	%eax, -68(%rbp)
	movl	-36(%rbp), %eax
	cmpl	-68(%rbp), %eax
	jg .L5
	jmp .L7
.L5: 
	movl	$999, %eax
	movl 	%eax, -72(%rbp)
	movl	-36(%rbp), %eax
	cmpl	-72(%rbp), %eax
	jl .L6
	jmp .L7
.L6: 
	nop
	movq 	$.LC4, -132(%rbp)
	movq 	-132(%rbp), %rdi
	call	printStr
	movl	%eax, -140(%rbp)
	jmp .L8
.L7: 
	nop
	movq 	$.LC5, -144(%rbp)
	movq 	-144(%rbp), %rdi
	call	printStr
	movl	%eax, -152(%rbp)
.L8: 
	movl	$900, %eax
	movl 	%eax, -76(%rbp)
	movl	-36(%rbp), %eax
	cmpl	-76(%rbp), %eax
	jg .L10
	jmp .L9
.L9: 
	movl	$800, %eax
	movl 	%eax, -80(%rbp)
	movl	-36(%rbp), %eax
	cmpl	-80(%rbp), %eax
	jl .L10
	jmp .L11
.L10: 
	nop
	movq 	$.LC6, -156(%rbp)
	movq 	-156(%rbp), %rdi
	call	printStr
	movl	%eax, -164(%rbp)
	jmp .L12
.L11: 
	nop
	movq 	$.LC7, -168(%rbp)
	movq 	-168(%rbp), %rdi
	call	printStr
	movl	%eax, -176(%rbp)
.L12: 
	movl	$1000, %eax
	movl 	%eax, -84(%rbp)
	movl	-36(%rbp), %eax
	cmpl	-84(%rbp), %eax
	jg .L14
	jmp .L13
.L13: 
	movl	$200, %eax
	movl 	%eax, -88(%rbp)
	movl	-36(%rbp), %eax
	cmpl	-88(%rbp), %eax
	je .L14
	jmp .L15
.L14: 
	nop
	movq 	$.LC8, -180(%rbp)
	movq 	-180(%rbp), %rdi
	call	printStr
	movl	%eax, -188(%rbp)
	jmp .L19
.L15: 
	movl	$7, %eax
	movl 	%eax, -92(%rbp)
	movl 	-36(%rbp), %eax
	movl 	-92(%rbp), %edx
	subl 	%edx, %eax
	movl 	%eax, -96(%rbp)
	movl	$700, %eax
	movl 	%eax, -100(%rbp)
	movl	-96(%rbp), %eax
	cmpl	-100(%rbp), %eax
	jne .L16
	jmp .L17
.L16: 
	nop
	movq 	$.LC9, -192(%rbp)
	movq 	-192(%rbp), %rdi
	call	printStr
	movl	%eax, -200(%rbp)
	jmp .L19
.L17: 
	nop
	movq 	$.LC10, -204(%rbp)
	movq 	-204(%rbp), %rdi
	call	printStr
	movl	%eax, -212(%rbp)
	jmp .L19
.L18: 
	nop
	movq 	$.LC11, -216(%rbp)
	movq 	-216(%rbp), %rdi
	call	printStr
	movl	%eax, -224(%rbp)
	movl	-36(%rbp), %eax
	cmpl	0(%rbp), %eax
	je .L18
	jmp .L17
.L19: 
	movl	$0, %eax
	movl 	%eax, -104(%rbp)
	movl	-104(%rbp), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
