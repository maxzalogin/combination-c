CC=gcc
CFLAGS=-Wall -Wextra -Werror
BUILD=build/

main:
	$(CC) $(CFLAGS) main.c -o $(BUILD)main
clean:
	rm $(BUILD)main

run:
	build/main