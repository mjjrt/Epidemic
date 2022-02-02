
OBJS	= main.o Person.o Simulation.o
SOURCE	= Person.cpp Simulation.cpp main.cpp
HEADER	= 
OUT	= main
CC	 = g++-11
FLAGS = -g -Wall -Werror -std=c++11
CFLAGS =# `pkg-config --cflags --libs gtkmm-2.4`
#LFLAGS	 ='pkg-config --cflags --libs gtk+-2.0'

all: $(OBJS)
	$(CC) $(OBJS) $(FLAGS) -o $(OUT) $(CFLAGS)
	rm -rf $(OBJS) *.o

$(OBJS): $(SOURCE)
	$(CC) -c $(FLAGS) $(CFLAGS) $(SOURCE)

clean:
	rm -f $(OBJS) $(OUT) *.csv *.o
