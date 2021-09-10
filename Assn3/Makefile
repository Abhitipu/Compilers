a.out:	ass3_19CS10069_19CS30007.o lex.yy.o
	gcc -W ass3_19CS10069_19CS30007.o lex.yy.o -lfl
ass3_19CS10069_19CS30007.o: ass3_19CS10069_19CS30007.c
	gcc -W -c ass3_19CS10069_19CS30007.c
lex.yy.o: lex.yy.c
	gcc -W -c lex.yy.c
lex.yy.c: ass3_19CS10069_19CS30007.l
	flex ass3_19CS10069_19CS30007.l
clean: 
	rm a.out ass3_19CS10069_19CS30007.o lex.yy.o lex.yy.c