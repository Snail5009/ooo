
CFLAGS = -Wall -pedantic -std=c99 -Iinc/
OBJS = bin/main.o bin/cocktail_sort.o

bin/main: ${OBJS}
	gcc -o $@ $^

bin/main.o: src/main.c inc/cocktail_sort.h
	gcc -c -o $@ $< ${CFLAGS}

bin/cocktail_sort.o: src/cocktail_sort.c inc/cocktail_sort.h
	gcc -c -o $@ $< ${CFLAGS}
