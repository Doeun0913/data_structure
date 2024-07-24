CPP     = g++.exe
CC      = gcc.exe
OBJS    = main.o LinkedQueue.o
TARGET  = LinkedQueue.exe

all: $(TARGET)

clean:
	del $(OBJS)   
	del $(TARGET)

$(TARGET): 	$(OBJS)
	$(CC) -o $@ $(OBJS)