a.out: main.o libass2_19CS190069.a
	cc main.o -L. -lass2_19CS10069

main.o: main.c myl.h
	cc -Wall -c main.c

libass2_19CS10069.a: ass2_19CS10069.o
	ar -rcs libass2_19CS10069.a ass2_19CS10069.o

ass2_19CS10069.o: ass2_19CS10069.c myl.h
	cc -Wall -c ass2_19CS10069.c

clean:
	rm -f a.out main.o libass2_19CS10069.a ass2_19CS10069.o
