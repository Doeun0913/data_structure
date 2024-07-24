CPP     = g++.exe
CC      = gcc.exe
OBJS    = main.o stackL.o
TARGET  = stackL.exe

all: $(TARGET)

clean:
	del $(OBJS)   
	del $(TARGET)

$(TARGET): 	$(OBJS)
	$(CC) -o $@ $(OBJS)