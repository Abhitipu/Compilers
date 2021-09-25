asgn4_19CS10069_19CS30007.txt: a.out asgn4_19CS10069_19CS30007_test.c
	./a.out < asgn4_19CS10069_19CS30007_test.c > asgn4_19CS10069_19CS30007.txt
%.c: %.l # cancels the implicit conversion of ass3_19CS10069_19CS30007.l to ass3_19CS10069_19CS30007.c using implicit make rules

%.c: %.y # cancels the implicit conversion of ass3_19CS10069_19CS30007.y to ass3_19CS10069_19CS30007.c using implicit make rules

a.out: lex.yy.c asgn4_19CS10069_19CS30007.c y.tab.h y.tab.c
	gcc lex.yy.c asgn4_19CS10069_19CS30007.c y.tab.c -lfl 

lex.yy.c: asgn4_19CS10069_19CS30007.l y.tab.h
	flex asgn4_19CS10069_19CS30007.l

y.tab.c y.tab.h: asgn4_19CS10069_19CS30007.y 
	yacc -dty asgn4_19CS10069_19CS30007.y

clean:
	rm a.out lex.yy.c *tab* asgn4_19CS10069_19CS30007.txt
	
