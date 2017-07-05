all: megaphone.o
	g++ -o megaphone megaphone.o
megaphone.o:
	g++ -c megaphone.cpp
clean:
	rm -f megaphone.o
fclean: clean
	rm -f megaphone
re: fclean all
