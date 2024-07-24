CPP     = g++.exe
CC      = gcc.exe
OBJS    = main.o cQueueS.o
TARGET  = cQueueS.exe

all: $(TARGET)

clean:
	del $(OBJS)   
	del $(TARGET)

$(TARGET): 	$(OBJS)
	$(CC) -o $@ $(OBJS)