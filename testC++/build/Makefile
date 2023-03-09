.PHONY: clean

all:build install run

copyright: main.out.cpp

main.out.cpp: ../src/main.cpp
	echo "/* Copyright(C) 2023 Ahmet Emin - All Rights Reserved */" > ../debug/cpyr;
	cat ../debug/cpyr > ../src/Copyright

build: ../src/main.cpp
	g++ -c ../src/main.cpp -o ../lib/main.o 
	g++ -c ../src/map/map.cpp -o ../lib/map.o

install:
	g++ ../lib/main.o -o ../debug/main.out
	g++ ../lib/main.o -o ../debug/main.exe

run:
	../debug/main.out

clean: 
	rm ../lib/*.o
	rm ../debug/*.exe
	rm ../debug/*.out