test: a.out
	
	@echo "TEST 1"
	./a.out < input/test_tiny_1.c > output/ass5_19CS10069_19CS30007_quads1.tac
	@echo "\nTest 1 Successfully Translated !\n"

	@echo "TEST 2"
	./a.out < input/test_tiny_2.c > output/ass5_19CS10069_19CS30007_quads2.tac
	@echo "\nTest 2 Successfully Translated !\n"
	
	@echo "TEST 3"
	./a.out < input/test_tiny_3.c > output/ass5_19CS10069_19CS30007_quads3.tac
	@echo "\nTest 3 Successfully Translated !\n"
	
	@echo "TEST 4"
	./a.out < input/test_tiny_4.c > output/ass5_19CS10069_19CS30007_quads4.tac
	@echo "\nTest 4 Successfully Translated !\n"
	
	@echo "TEST 5"
	./a.out < input/test_tiny_5.c > output/ass5_19CS10069_19CS30007_quads5.tac
	@echo "\nTest 5 Successfully Translated !\n"
	
	@echo "TEST 6"
	./a.out < input/test_tiny_6.c > output/ass5_19CS10069_19CS30007_quads6.tac
	@echo "\nTest 6 Successfully Translated !\n"
	
	@echo "TEST 7"
	./a.out < input/test_tiny_7.c > output/ass5_19CS10069_19CS30007_quads7.tac
	@echo "\nTest 7 Successfully Translated !\n"

	@echo "TEST 8"
	./a.out < input/test_tiny_8.c > output/ass5_19CS10069_19CS30007_quads8.tac
	@echo "\nTest 8 Successfully Translated !\n"

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
	   output/*