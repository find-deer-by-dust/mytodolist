add.c=./src/add.c
add.o=./src/add.o
sub.c=./src/sub.c
sub.o=./src/sub.o
*.o=./src/*.o
libcal.so=./lib/libcal.so

main: main.c  ${libcal.so}
	gcc main.c -Iinclude ${libcal.so} -o main 

${add.o}: ${add.c}
	gcc -c ${add.c} -Iinclude  -o ${add.o}

${sub.o}: ${sub.c}
	gcc -c ${sub.c} -Iinclude  -o ${sub.o}

${libcal.so}:${add.o} ${sub.o}
	gcc -shared -o ${libcal.so} ${*.o}	

clean:
	rm main
	rm ${*.o}
