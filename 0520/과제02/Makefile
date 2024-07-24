CPP     = g++.exe
CC      = gcc.exe
OBJS    = main.o stackL.o evalPostfix.o
TARGET  = evalPostfix.exe

all: $(TARGET)

clean:
	del $(OBJS)   
	del $(TARGET)

$(TARGET): 	$(OBJS)
	$(CC) -o $@ $(OBJS)