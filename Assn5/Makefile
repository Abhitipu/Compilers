test: a.out
	
	@echo "TRANSLATING TEST FILE 1 \n(2D ARRAYS and LOOPS)==>\n\n"
	./a.out < test_tiny.c > ass5_19CS10069_19CS30007_quads1.out
	@echo "Test File 1 Successfully Translated !\n"

	@echo "\nALL TEST FILES SUCCESSFULLY TRANSLATED !!\n"

a.out: lex.yy.o ass5_19CS10069_19CS30007.tab.o ass5_19CS10069_19CS30007_translator.o
	g++ lex.yy.o ass5_19CS10069_19CS30007.tab.o ass5_19CS10069_19CS30007_translator.o -lfl

ass5_19CS10069_19CS30007_translator.o: ass5_19CS10069_19CS30007_translator.cxx ass5_19CS10069_19CS30007_translator.h
	g++ -c ass5_19CS10069_19CS30007_translator.cxx

lex.yy.o: lex.yy.c
	g++ -c lex.yy.c

ass5_19CS10069_19CS30007.tab.o: ass5_19CS10069_19CS30007.tab.c
	g++ -c ass5_19CS10069_19CS30007.tab.c

lex.yy.c: ass5_19CS10069_19CS30007.l ass5_19CS10069_19CS30007.tab.h ass5_19CS10069_19CS30007_translator.h
	flex ass5_19CS10069_19CS30007.l

ass5_19CS10069_19CS30007.tab.c: ass5_19CS10069_19CS30007.y
	bison -dtv ass5_19CS10069_19CS30007.y -W

ass5_19CS10069_19CS30007.tab.h: ass5_19CS10069_19CS30007.y
	bison -dtv ass5_19CS10069_19CS30007.y -W

clean:
	rm lex.yy.c\
	   lex.yy.o\
	   a.out\
	   ass5_19CS10069_19CS30007.tab.c\
	   ass5_19CS10069_19CS30007.tab.h\
	   ass5_19CS10069_19CS30007.tab.o\
	   ass5_19CS10069_19CS30007.output\
	   ass5_19CS10069_19CS30007_translator.o\
	   ass5_19CS10069_19CS30007_translator.h.gch\
	   ass5_19CS10069_19CS30007_quads1.out\