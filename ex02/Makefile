all: main.o
	g++ -o tests tests.o Account.class.o
main.o:
	g++ -c tests.cpp Account.class.cpp
clean:
	rm -f tests.o Account.class.o
fclean: clean
	rm -f main
re: fclean all
