CPP     = g++.exe
CC      = gcc.exe
OBJS    = main.o LinkedPoly.o
TARGET  = LinkedPoly.exe

all: $(TARGET)

clean:
	del $(OBJS)   
	del $(TARGET)

$(TARGET): 	$(OBJS)
	$(CC) -o $@ $(OBJS)