all: main.o
	g++ -o main main.o book.class.o
main.o:
	g++ -c main.cpp book.class.cpp
clean:
	rm -f main.o book.class.o
fclean: clean
	rm -f main
re: fclean all
