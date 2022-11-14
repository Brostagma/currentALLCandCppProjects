all:build take run
build:
	g++ -c ../src/main.cpp -o ../lib/main.o 
	g++ -c ../src/map.cpp -o ../lib/map.o

take:
	g++ ../lib/main.o -o ../debug/main.out
	g++ ../lib/main.o -o ../debug/main.exe

run:
	../debug/main.out

clean: 
	rm ../*/*.o
	rm ../debug/*