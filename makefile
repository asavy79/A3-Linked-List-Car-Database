carBase: addNewCar.o printAll.o mainA3.o noMoreCars.o include/headerA3.h
	gcc addNewCar.o printAll.o mainA3.o noMoreCars.o -o bin/carBase

addNewCar.o: src/addNewCar.c include/headerA3.h
	gcc -std=c99 -Wall -c src/addNewCar.c

printAll.o: src/printAll.c include/headerA3.h
	gcc -std=c99 -Wall -c src/printAll.c

mainA3.o: src/mainA3.c include/headerA3.h
	gcc -std=c99 -Wall -c src/mainA3.c

noMoreCars.o: src/noMoreCars.c include/headerA3.h
	gcc -std=c99 -Wall -c src/noMoreCars.c

clean:
	rm *.o bin/carBase