output.txt: a.out ass3_19CS10069_19CS30007_test.c
	./a.out < ass3_19CS10069_19CS30007_test.c > output.txt

a.out: lex.yy.c
	cc lex.yy.c -lfl

lex.yy.c: ass3_19CS10069_19CS30007.l
	flex ass3_19CS10069_19CS30007.l ass3_19CS10069_19CS30007.c

clean:
	rm a.out lex.yy.c
