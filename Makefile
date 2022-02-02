
OBJS	= main.o
SOURCE	= main.cpp
HEADER	= 
OUT	= main
CC	 = g++-11
FLAGS	 = -g -Wall -std=c++11
LFLAGS	 = 

all: $(OBJS)
	$(CC) $(OBJS) -o $(OUT) $(LFLAGS)
	rm -rf $(OBJS)

main.o: main.cpp
	$(CC) -c $(FLAGS) main.cpp


clean:
	rm -f $(OBJS) $(OUT) *.csv
