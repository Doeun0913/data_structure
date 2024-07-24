CPP     = g++.exe
CC      = gcc.exe
OBJS    = main.o stackS.o
TARGET  = stackS.exe

all: $(TARGET)

clean:
	del $(OBJS)   
	del $(TARGET)

$(TARGET): 	$(OBJS)
	$(CC) -o $@ $(OBJS)