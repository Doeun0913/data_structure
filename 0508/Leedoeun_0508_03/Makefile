CPP     = g++.exe
CC      = gcc.exe
OBJS    = main.o circularLinkedList.o
TARGET  = circularLinkedList.exe

all: $(TARGET)

clean:
	del $(OBJS)   
	del $(TARGET)

$(TARGET): 	$(OBJS)
	$(CC) -o $@ $(OBJS)