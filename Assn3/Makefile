a.out: lex.yy.c
	gcc -W lex.yy.c -lfl
	
lex.yy.c: ass3_19CS10069_19CS30007.l ass3_19CS10069_19CS30007_.c
	flex ass3_19CS10069_19CS30007.l ass3_19CS10069_19CS30007_.c

clean: 
	rm a.out lex.yy.c