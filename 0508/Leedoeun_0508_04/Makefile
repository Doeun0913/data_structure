CPP     = g++.exe
CC      = gcc.exe
OBJS    = main.o DoubleLinkedList.o
TARGET  = DoubleLinkedList.exe

all: $(TARGET)

clean:
	del $(OBJS)   
	del $(TARGET)

$(TARGET): 	$(OBJS)
	$(CC) -o $@ $(OBJS)