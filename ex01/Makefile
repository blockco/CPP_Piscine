all: main.o
	g++ -o main main.o
main.o:
	g++ -c main.cpp
clean:
	rm -f main.o
fclean: clean
	rm -f main
re: fclean all
