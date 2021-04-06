OBJS	= ED_test.o engineers.o
PROG	= ED_findExperimental.exe
all: $(PROG)

$(PROG): $(OBJS)
	g++ -std=c++11 -pedantic-errors -Werror=pedantic -Wall -Wextra -g -o $(PROG) $(OBJS)

ED_test.o: engineers.h
engineers.o: engineers.h

clean:
	rm -f *.o *~ $(PROG)