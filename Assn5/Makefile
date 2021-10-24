test: a.out
	
	@echo "TEST 1"
	./a.out < input/ass5_19CS10069_19CS30007_test_1.c > output/ass5_19CS10069_19CS30007_quads1.out
	@echo "\nTest 1 Successfully Translated !\n"

	@echo "TEST 2"
	./a.out < input/ass5_19CS10069_19CS30007_test_2.c > output/ass5_19CS10069_19CS30007_quads2.out
	@echo "\nTest 2 Successfully Translated !\n"
	
	@echo "TEST 3"
	./a.out < input/ass5_19CS10069_19CS30007_test_3.c > output/ass5_19CS10069_19CS30007_quads3.out
	@echo "\nTest 3 Successfully Translated !\n"
	
	@echo "TEST 4"
	./a.out < input/ass5_19CS10069_19CS30007_test_4.c > output/ass5_19CS10069_19CS30007_quads4.out
	@echo "\nTest 4 Successfully Translated !\n"
	
	@echo "TEST 5"
	./a.out < input/ass5_19CS10069_19CS30007_test_5.c > output/ass5_19CS10069_19CS30007_quads5.out
	@echo "\nTest 5 Successfully Translated !\n"
	
	@echo "TEST 6"
	./a.out < input/ass5_19CS10069_19CS30007_test_6.c > output/ass5_19CS10069_19CS30007_quads6.out
	@echo "\nTest 6 Successfully Translated !\n"
	
	@echo "TEST 7"
	./a.out < input/ass5_19CS10069_19CS30007_test_7.c > output/ass5_19CS10069_19CS30007_quads7.out
	@echo "\nTest 7 Successfully Translated !\n"

	@echo "TEST 8"
	./a.out < input/ass5_19CS10069_19CS30007_test_8.c > output/ass5_19CS10069_19CS30007_quads8.out
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