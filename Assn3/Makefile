a.out: lex.yy.c ass3_19CS10069_19CS30007.c
	gcc -W lex.yy.c ass3_19CS10069_19CS30007.c -ll
	
lex.yy.c: ass3_19CS10069_19CS30007.l
	flex ass3_19CS10069_19CS30007.l

clean: 
	rm a.out lex.yy.c