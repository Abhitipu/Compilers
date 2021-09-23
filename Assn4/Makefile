asgn4_19CS10069_19CS30007.txt: a.out asgn4_19CS10069_19CS30007_test.c
	./a.out < asgn4_19CS10069_19CS30007_test.c > asgn4_19CS10069_19CS30007.txt

a.out: lex.yy.o asgn4_19CS10069_19CS30007.o y.tab.o
	gcc lex.yy.o asgn4_19CS10069_19CS30007.o y.tab.o -lfl 

lex.yy.c: asgn4_19CS10069_19CS30007.l y.tab.h
	flex asgn4_19CS10069_19CS30007.l

y.tab.c: asgn4_19CS10069_19CS30007.y 
	bison -dty asgn4_19CS10069_19CS30007.y --report=solved

asgn4_19CS10069_19CS30007.o: asgn4_19CS10069_19CS30007.c 
	gcc -c asgn4_19CS10069_19CS30007.c 

y.tab.h: asgn4_19CS10069_19CS30007.y
	bison -dty asgn4_19CS10069_19CS30007.y --report=solved

lex.yy.o: lex.yy.c 
	gcc -c lex.yy.c 

y.tab.o: y.tab.c 
	gcc -c y.tab.c

clean:
	rm a.out lex.yy.* y.output asgn4_19CS10069_19CS30007.o y.tab.* 
