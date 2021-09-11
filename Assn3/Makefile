output.txt: a.out ass3_19CS10069_19CS30007_test.c
	./a.out < ass3_19CS10069_19CS30007_test.c > output.txt

%.c: %.l # cancels the implicit conversion of ass3_19CS10069_19CS30007.l to ass3_19CS10069_19CS30007.c using implicit make rules

a.out: lex.yy.c
	cc lex.yy.c -lfl

lex.yy.c: ass3_19CS10069_19CS30007.l ass3_19CS10069_19CS30007.c
	flex ass3_19CS10069_19CS30007.l ass3_19CS10069_19CS30007.c

clean:
	rm a.out lex.yy.c
