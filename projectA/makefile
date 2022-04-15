all: main
main: ./lib/sub.o  ./lib/add.o  ./lib/libcal.a
	gcc -o main ./src/test.c -lcal -L ./lib -I ./include
./lib/sub.o: ./src/sub.c
	gcc -c ./src/sub.c -o ./lib/sub.o
./lib/add.o: ./src/add.c
	gcc -c ./src/add.c -o ./lib/add.o
./lib/libcal.a: ./lib/sub.o ./lib/add.o
	ar -rcs ./lib/libcal.a ./lib/add.o ./lib/sub.o
clean:
	rm -rf ./lib/*.o;
	rm -rf main;
	rm -rf *.a


