
My_project : operation.o id.o main.o 
	gcc -Wall -o My_Project operation.o id.o main.o 
operation.o: operation.c 
	gcc -Wall -c operation.c
id.o: operation.o id.c
	gcc -Wall -c id.c
main.o: id.o main.c
	gcc -Wall -c main.c 
run : My_Project
	./My_Project  
tarball: 
	tar -zcvf Project_Education_version.tar.gz id.c id.h main.c operation.c operation.h makefile
clean:
	rm -rf *.o
