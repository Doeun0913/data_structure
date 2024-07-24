CPP     = g++.exe
CC      = gcc.exe
OBJS    = main.o LinkedList.o
TARGET  = LinkedList.exe

all: $(TARGET)

clean:
	del $(OBJS)   
	del $(TARGET)

$(TARGET): 	$(OBJS)
	$(CC) -o $@ $(OBJS)