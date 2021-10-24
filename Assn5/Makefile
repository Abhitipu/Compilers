test: a.out
	
	@echo "TRANSLATING TEST FILE 1 \n(2D ARRAYS and LOOPS)==>\n\n"
	./a.out < testcases/input/test_tiny_1.c > testcases/output/ass5_19CS10069_19CS30007_quads1.tac
	@echo "Test File 1 Successfully Translated !\n"

	@echo "TRANSLATING TEST FILE 2 \n(TYPE CASTING AND POINTERS)==>\n\n"
	./a.out < testcases/input/test_tiny_2.c > testcases/output/ass5_19CS10069_19CS30007_quads2.tac
	@echo "Test File 2 Successfully Translated !\n"
	
	@echo "TRANSLATING TEST FILE 3 \n(ARITHMETIC EXPRESSIONS AND NESTED BLOCKS)==>\n\n"
	./a.out < testcases/input/test_tiny_3.c > testcases/output/ass5_19CS10069_19CS30007_quads3.tac
	@echo "Test File 3 Successfully Translated !\n"
	
	@echo "TRANSLATING TEST FILE 4 \n(FUNCTION CALL, TERNARY, IF-ELSE)==>\n\n"
	./a.out < testcases/input/test_tiny_4.c > testcases/output/ass5_19CS10069_19CS30007_quads4.tac
	@echo "Test File 4 Successfully Translated !\n"
	
	@echo "TRANSLATING TEST FILE 5 \n(NESTED IF-ELSE)==>\n\n"
	./a.out < testcases/input/test_tiny_5.c > testcases/output/ass5_19CS10069_19CS30007_quads5.tac
	@echo "Test File 5 Successfully Translated !\n"
	
	@echo "TRANSLATING TEST FILE 6 ==>\n"
	./a.out < testcases/input/test_tiny_6.c > testcases/output/ass5_19CS10069_19CS30007_quads6.tac
	@echo "Test File 6 Successfully Translated !\n"
	
	@echo "TRANSLATING TEST FILE 7 \n(UNCONDITIONAL JUMP GOTO)==>\n\n"
	./a.out < testcases/input/test_tiny_7.c > testcases/output/ass5_19CS10069_19CS30007_quads7.tac
	@echo "Test File 7 Successfully Translated !\n"

	@echo "TRANSLATING TEST FILE 8 \n(UNCONDITIONAL JUMP GOTO)==>\n\n"
	./a.out < testcases/input/test_tiny_8.c > testcases/output/ass5_19CS10069_19CS30007_quads8.tac
	@echo "Test File 8 Successfully Translated !\n"

	@echo "\nALL TEST FILES SUCCESSFULLY TRANSLATED !!\n"

a.out: lex.yy.o ass5_19CS10069_19CS30007.tab.o ass5_19CS10069_19CS30007_translator.o
	g++ -g lex.yy.o ass5_19CS10069_19CS30007.tab.o ass5_19CS10069_19CS30007_translator.o -lfl

ass5_19CS10069_19CS30007_translator.o: ass5_19CS10069_19CS30007_translator.cxx ass5_19CS10069_19CS30007_translator.h
	g++ -g -c ass5_19CS10069_19CS30007_translator.cxx

lex.yy.o: lex.yy.c
	g++ -g -c lex.yy.c

ass5_19CS10069_19CS30007.tab.o: ass5_19CS10069_19CS30007.tab.c
	g++ -g -c ass5_19CS10069_19CS30007.tab.c

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
	   testcases/output/*