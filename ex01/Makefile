all: main.o
	g++ -o main main.o book.o
main.o:
	g++ -c main.cpp book.cpp
clean:
	rm -f main.o book.o
fclean: clean
	rm -f main
re: fclean all
