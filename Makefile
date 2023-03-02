CC=gcc
CFLAGS=-Wall -Wextra -Werror
BUILD=build/

combin:
	$(CC) $(CFLAGS) combin.c -o $(BUILD)combin
clean:
	rm $(BUILD)combin

run:
	build/combin