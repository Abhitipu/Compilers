test: a.out
	
	@echo "TRANSLATING TEST FILE 1 \n(2D ARRAYS and LOOPS)==>\n\n"
	./a.out < test_tiny.c > ass5_19CS10069_19CS30007_quads1.out
	@echo "Test File 1 Successfully Translated !\n"

	@echo "\nALL TEST FILES SUCCESSFULLY TRANSLATED !!\n"

a.out: lex.yy.c y.tab.h y.tab.c ass5_19CS10069_19CS30007_translator.h ass5_19CS10069_19CS30007_translator.cxx
	g++ lex.yy.c y.tab.h y.tab.c ass5_19CS10069_19CS30007_translator.h ass5_19CS10069_19CS30007_translator.cxx -lfl

lex.yy.c: ass5_19CS10069_19CS30007.l y.tab.h ass5_19CS10069_19CS30007_translator.h
	flex ass5_19CS10069_19CS30007.l

y.tab.c y.tab.h: ass5_19CS10069_19CS30007.y 
	yacc -dty ass5_19CS10069_19CS30007.y

clean:
	rm lex.yy.c\
	   a.out\
	   y.tab.c\
	   y.tab.h\
	   ass5_19CS10069_19CS30007.output\
	   ass5_19CS10069_19CS30007_quads1.out
%.c: %.l # cancels the implicit conversion of ass3_19CS10069_19CS30007.l to ass3_19CS10069_19CS30007.c using implicit make rules

%.c: %.y # cancels the implicit conversion of ass3_19CS10069_19CS30007.y to ass3_19CS10069_19CS30007.c using implicit make rules

# clean:
# 	rm temp.txt