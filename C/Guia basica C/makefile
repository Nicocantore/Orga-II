CC = gcc
CFLAGS = -Wall -Wextra -pedantic -g

all: $(TARGET)

$(TARGET): hola.o
	$(CC) $(CFLAGS) $^ -o $@

hola.o: hola.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm *.o $(TARGET)

.PHONY: all clean
