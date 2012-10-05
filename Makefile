CC=g++

pad: Document.cpp Main.cpp
	g++ Document.cpp Main.cpp -o pad -lncurses



