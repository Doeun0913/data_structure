CPP     = g++.exe
CC      = gcc.exe
OBJS    = main.o stackL.o testPair.o
TARGET  = testPair.exe

all: $(TARGET)

clean:
	del $(OBJS)   
	del $(TARGET)

$(TARGET): 	$(OBJS)
	$(CC) -o $@ $(OBJS)