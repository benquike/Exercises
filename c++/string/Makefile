TARGET=test

all:$(TARGET)

CPP_SRC += string-exercise.cpp

OBJS = $(CPP_SRC:.cpp=.o)

$(TARGET):$(OBJS)
	g++ $(OBJS) -o $(TARGET)
