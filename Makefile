parser.exe: parser.cc
	g++ -std=c++11 -Wall -Wextra -pedantic -o parser.exe parser.cc

clean:
	rm *.exe

