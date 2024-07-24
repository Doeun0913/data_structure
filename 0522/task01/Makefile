CPP     = g++.exe
CC      = gcc.exe
OBJS    = main.o queueS.o
TARGET  = queueS.exe

all: $(TARGET)

clean:
	del $(OBJS)   
	del $(TARGET)

$(TARGET): 	$(OBJS)
	$(CC) -o $@ $(OBJS)