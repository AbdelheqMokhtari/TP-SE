My_Project : operations.o remarkable_identities.o main.o
	gcc -Wall -o MyProject operations.o remarkable_identities.o main.o
operations.o : operations.c
	gcc -Wall -c operations.c
remarkable_identities.o : operations.o remarkable_identities.c 
	gcc -Wall -c remarkable_identities.c
main.o : remarkable_identities.o main.c
	gcc -Wall -c main.c
run: My_Project 
	./MyProject
tarball:
	tar -zcvf MokhtariAbdelheqMerzouguiHanineMarrefRazane.tar.gz main.c remarkable_identities.c remarkable_identities.h operations.c operations.h makefile 
clean:
	rm -rf *.o 

