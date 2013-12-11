CC=g++

pad: Document.cpp Main.cpp
	g++ Document.cpp Main.cpp -o pad -lncursesw

install: pad
	cp ./pad /usr/bin

clean:	pad
	rm ./pad
