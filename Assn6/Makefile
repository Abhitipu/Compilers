test: tinyC libass2_19CS10069.a
	
	@echo "TEST 1"
	./tinyC _test_1 < testcases/input/ass6_19CS10069_19CS30007_test_1.c > testcases/output/ass6_19CS10069_19CS30007_quads1.out
	@echo "\nTest 1 Successfully Translated !\n"

	@echo "TEST 2"
	./tinyC _test_2 < testcases/input/ass6_19CS10069_19CS30007_test_2.c > testcases/output/ass6_19CS10069_19CS30007_quads2.out
	@echo "\nTest 2 Successfully Translated !\n"
	
	@echo "TEST 3"
	./tinyC _test_3 < testcases/input/ass6_19CS10069_19CS30007_test_3.c > testcases/output/ass6_19CS10069_19CS30007_quads3.out
	@echo "\nTest 3 Successfully Translated !\n"
	
	@echo "TEST 4"
	./tinyC _test_4 < testcases/input/ass6_19CS10069_19CS30007_test_4.c > testcases/output/ass6_19CS10069_19CS30007_quads4.out
	@echo "\nTest 4 Successfully Translated !\n"
	
	@echo "TEST 5"
	./tinyC _test_5 < testcases/input/ass6_19CS10069_19CS30007_test_5.c > testcases/output/ass6_19CS10069_19CS30007_quads5.out
	@echo "\nTest 5 Successfully Translated !\n"
	
	@echo "TEST 6"
	./tinyC _test_6 < testcases/input/ass6_19CS10069_19CS30007_test_6.c > testcases/output/ass6_19CS10069_19CS30007_quads6.out
	@echo "\nTest 6 Successfully Translated !\n"
	
	@echo "TEST 7"
	./tinyC _test_7 < testcases/input/ass6_19CS10069_19CS30007_test_7.c > testcases/output/ass6_19CS10069_19CS30007_quads7.out
	@echo "\nTest 7 Successfully Translated !\n"

	@echo "TEST 8"
	./tinyC _test_8 < testcases/input/ass6_19CS10069_19CS30007_test_8.c > testcases/output/ass6_19CS10069_19CS30007_quads8.out
	@echo "\nTest 8 Successfully Translated !\n"

	@echo "TEST 9"
	./tinyC _test_9 < testcases/input/ass6_19CS10069_19CS30007_test_9.c > testcases/output/ass6_19CS10069_19CS30007_quads9.out
	@echo "\nTest 9 Successfully Translated !\n"

	@echo "Generating .o from .s !\n"
	gcc -c testcases/output/ass6_19CS10069_19CS30007_test_1.s -o testcases/output/ass6_19CS10069_19CS30007_test_1.o
	gcc -c testcases/output/ass6_19CS10069_19CS30007_test_2.s -o testcases/output/ass6_19CS10069_19CS30007_test_2.o
	gcc -c testcases/output/ass6_19CS10069_19CS30007_test_3.s -o testcases/output/ass6_19CS10069_19CS30007_test_3.o
	gcc -c testcases/output/ass6_19CS10069_19CS30007_test_4.s -o testcases/output/ass6_19CS10069_19CS30007_test_4.o
	gcc -c testcases/output/ass6_19CS10069_19CS30007_test_5.s -o testcases/output/ass6_19CS10069_19CS30007_test_5.o
	gcc -c testcases/output/ass6_19CS10069_19CS30007_test_6.s -o testcases/output/ass6_19CS10069_19CS30007_test_6.o
	gcc -c testcases/output/ass6_19CS10069_19CS30007_test_7.s -o testcases/output/ass6_19CS10069_19CS30007_test_7.o
	gcc -c testcases/output/ass6_19CS10069_19CS30007_test_8.s -o testcases/output/ass6_19CS10069_19CS30007_test_8.o
	gcc -c testcases/output/ass6_19CS10069_19CS30007_test_9.s -o testcases/output/ass6_19CS10069_19CS30007_test_9.o
	@echo "Successfully Generated .o files !\n\n"

	@echo "Compiling the test files !\n"
	gcc testcases/output/ass6_19CS10069_19CS30007_test_1.o -o testcases/output/test1 -L. -lass2_19CS10069 -no-pie
	gcc testcases/output/ass6_19CS10069_19CS30007_test_2.o -o testcases/output/test2 -L. -lass2_19CS10069 -no-pie
	gcc testcases/output/ass6_19CS10069_19CS30007_test_3.o -o testcases/output/test3 -L. -lass2_19CS10069 -no-pie
	gcc testcases/output/ass6_19CS10069_19CS30007_test_4.o -o testcases/output/test4 -L. -lass2_19CS10069 -no-pie
	gcc testcases/output/ass6_19CS10069_19CS30007_test_5.o -o testcases/output/test5 -L. -lass2_19CS10069 -no-pie
	gcc testcases/output/ass6_19CS10069_19CS30007_test_6.o -o testcases/output/test6 -L. -lass2_19CS10069 -no-pie
	gcc testcases/output/ass6_19CS10069_19CS30007_test_7.o -o testcases/output/test7 -L. -lass2_19CS10069 -no-pie
	gcc testcases/output/ass6_19CS10069_19CS30007_test_8.o -o testcases/output/test8 -L. -lass2_19CS10069 -no-pie
	gcc testcases/output/ass6_19CS10069_19CS30007_test_9.o -o testcases/output/test9 -L. -lass2_19CS10069 -no-pie
	@echo "Successfully Compiled All test files !\n\n"
	
tinyC: lex.yy.o ass6_19CS10069_19CS30007.tab.o ass6_19CS10069_19CS30007_translator.o ass6_19CS10069_19CS30007_target_translator.o
	g++ -g lex.yy.o ass6_19CS10069_19CS30007.tab.o ass6_19CS10069_19CS30007_translator.o ass6_19CS10069_19CS30007_target_translator.o -lfl -o tinyC

ass6_19CS10069_19CS30007_target_translator.o: ass6_19CS10069_19CS30007_target_translator.cxx ass6_19CS10069_19CS30007_translator.h
	g++ -g -c ass6_19CS10069_19CS30007_target_translator.cxx

ass6_19CS10069_19CS30007_translator.o: ass6_19CS10069_19CS30007_translator.cxx ass6_19CS10069_19CS30007_translator.h
	g++ -g -c ass6_19CS10069_19CS30007_translator.cxx

lex.yy.o: lex.yy.c
	g++ -g -c lex.yy.c

ass6_19CS10069_19CS30007.tab.o: ass6_19CS10069_19CS30007.tab.c
	g++ -g -c ass6_19CS10069_19CS30007.tab.c

lex.yy.c: ass6_19CS10069_19CS30007.l ass6_19CS10069_19CS30007.tab.h ass6_19CS10069_19CS30007_translator.h
	flex ass6_19CS10069_19CS30007.l

ass6_19CS10069_19CS30007.tab.c: ass6_19CS10069_19CS30007.y
	bison -dv ass6_19CS10069_19CS30007.y -W

ass6_19CS10069_19CS30007.tab.h: ass6_19CS10069_19CS30007.y
	bison -dv ass6_19CS10069_19CS30007.y -W

libass2_19CS10069.a:
	gcc -W -c ass2_19CS10069.c
	ar -rcs libass2_19CS10069.a ass2_19CS10069.o

tarify:
	tar -cvf ass6_19CS10069_19CS30007.tar ./input/ ./output/ ass6_19CS10069_19CS30007_translator.h ass6_19CS10069_19CS30007_translator.cxx ass6_19CS10069_19CS30007.l ass6_19CS10069_19CS30007.y Makefile README.md
cleanTarify:
	rm ass6_19CS10069_19CS30007.tar
clean:
	rm lex.yy.c *.o	tinyC\
	   ass6_19CS10069_19CS30007.tab.c\
	   ass6_19CS10069_19CS30007.tab.h\
	   ass6_19CS10069_19CS30007.output\
	   testcases/output/*\
	   libass2_19CS10069.a\
	   ass2_19CS10069.o
	   
