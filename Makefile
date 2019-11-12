CC=gcc
AR=ar
OBJECTS_MAIN=main.o
OBJECTS_LIB=basicMath.o power.o
FLAGS= -Wall -g

all: mymaths mymathd mains maind 

mymaths: $(OBJECTS_LIB)
	$(AR) -rcs libmyMath.a $(OBJECTS_LIB) 
mymathd: $(OBJECTS_LIB)
	$(CC) $(FLAGS) -shared $(OBJECTS_LIB) -o libmyMath.so 
maind: $(OBJECTS_MAIN) mymathd
	$(CC) $(FLAGS) -o maind $(OBJECTS_MAIN) ./libmyMath.so
mains: $(OBJECTS_MAIN) mymaths
	$(CC) $(FLAGS) -o mains $(OBJECTS_MAIN) libmyMath.a
power.o: power.c myMath.h
	$(CC) $(FLAGS) -c power.c 
basicMath.o: basicMath.c myMath.h
	$(CC) $(FLAGS) -c basicMath.c 
main.o: main.c myMath.h 
	$(CC) $(FLAGS) -c main.c 
	
.PHONY: clean all

clean:
	rm -f *.o *.a *.so mains maind 