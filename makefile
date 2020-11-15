CC=gcc
AR=ar
OBJECT_MAIN= main.o
OBJECT_LIB= basicMath.o power.o
FLAGS= -Wall -g 

.PHONY: all clean mymaths mymathd
all: mymaths mymathd maind mains
mains:$(OBJECT_MAIN) libmyMath.a
	$(CC) $(FLAGS) -o mains $(OBJECT_MAIN) ./libmyMath.a
maind:$(OBJECT_MAIN)
	$(CC) $(FLAGS) -o maind $(OBJECT_MAIN) ./libmyMath.so
mymaths: libmyMath.a
libmyMath.a: $(OBJECT_LIB) 
	$(AR) -rcs libmyMath.a $(OBJECT_LIB) 
mymathd:libmyMath.so
libmyMath.so: $(OBJECT_LIB) 
	$(CC) -shared -o libmyMath.so $(OBJECT_LIB)
basicMath.o:basicMath.c myMath.h
	$(CC) -Wall  -fPIC -c basicMath.c
power.o:power.c myMath.h
	$(CC) -Wall -fPIC -c power.c
main.o:main.c myMath.h
	$(CC) $(FLAGS) -c main.c

clean:
	rm -f *.o *.a *.so mains maind
