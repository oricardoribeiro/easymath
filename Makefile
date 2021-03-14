IDIR =./include
CC=gcc
CFLAGS=-I$(IDIR)

easymath: main.o funclogo.o
	$(CC) -o easymath main.o funclogo.o
