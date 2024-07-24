CPP     = g++.exe
CC      = gcc.exe
OBJS    = main.o InsertLinkedList.o
TARGET  = InsertLinkedList.exe

all: $(TARGET)

clean:
	del $(OBJS)   
	del $(TARGET)

$(TARGET): 	$(OBJS)
	$(CC) -o $@ $(OBJS)