build: ../src/main.o
	g++ ../src/main.o -o ../debug/main
	../debug/main

main.o: ../src/main.cpp
	g++ -c ../src/main.cpp -o ../src/main.o

run: 
	../debug/main

clean: 
	rm ../*/*.o
	rm ../debug/main