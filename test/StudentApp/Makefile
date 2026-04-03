CC=gcc

all:app

app: main.o student.o fileOps.o 

	$(CC) -o app main.o student.o fileOps.o 

main.o: main.c 
	$(CC) -c main.c 

student.o: student.c 
	$(CC) -c student.c

fileOps.o: fileOps.c 
	$(CC) -c fileOps.c 

clean:
	rm -f *.o app




