

DEST=coroutine

SRC= main.c coroutine.h coroutine.c

$(DEST):$(SRC)
		gcc -o $@ coroutine.h coroutine.c main.c

clean:
	rm -rf *.o
