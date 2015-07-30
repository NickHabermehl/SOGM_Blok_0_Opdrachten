
all: helloworld oppervlakte optellen print_array max_array rotateleft_array

helloworld: helloworld.cpp
	g++ -c helloworld.cpp
	g++ -o helloworld helloworld.o

oppervlakte: oppervlakte.cpp
	g++ -c oppervlakte.cpp
	g++ -o oppervlakte oppervlakte.o

optellen: optellen.cpp
	g++ -c optellen.cpp
	g++ -o optellen optellen.o

print_array: print_array.cpp
	g++ -c print_array.cpp
	g++ -o print_array print_array.o

max_array: max_array.cpp
	g++ -c max_array.cpp
	g++ -o max_array max_array.o	

rotateleft_array: rotateleft_array.cpp
	g++ -c rotateleft_array.cpp
	g++ -o rotateleft_array rotateleft_array.o

clean:
		rm -f *.o
		rm -f `find . -perm +111 -type f`

