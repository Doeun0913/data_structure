CPP     = g++.exe
CC      = gcc.exe
OBJS    = main.o deQue.o
TARGET  = deQue.exe

all: $(TARGET)

clean:
	del $(OBJS)   
	del $(TARGET)

$(TARGET): 	$(OBJS)
	$(CC) -o $@ $(OBJS)