carBase: addNewCar.o printAll.o mainA3.o noMoreCars.o printOne.o oneLessCar.o countCars.o lookForCarId.o lookForCarModelType.o loadCarData.o sortCarId.o include/headerA3.h
	gcc addNewCar.o printAll.o mainA3.o noMoreCars.o printOne.o oneLessCar.o countCars.o lookForCarId.o lookForCarModelType.o loadCarData.o sortCarId.o -o bin/carBase

addNewCar.o: src/addNewCar.c include/headerA3.h
	gcc -std=c99 -Wall -c src/addNewCar.c

printAll.o: src/printAll.c include/headerA3.h
	gcc -std=c99 -Wall -c src/printAll.c

mainA3.o: src/mainA3.c include/headerA3.h
	gcc -std=c99 -Wall -c src/mainA3.c

noMoreCars.o: src/noMoreCars.c include/headerA3.h
	gcc -std=c99 -Wall -c src/noMoreCars.c

printOne.o: src/printOne.c include/headerA3.h
	gcc -std=c99 -Wall -c src/printOne.c

oneLessCar.o: src/oneLessCar.c include/headerA3.h
	gcc -std=c99 -Wall -c src/oneLessCar.c

countCars.o: src/countCars.c include/headerA3.h
	gcc -std=c99 -Wall -c src/countCars.c

lookForCarId.o: src/lookForCarId.c include/headerA3.h
	gcc -std=c99 -Wall -c src/lookForCarId.c

lookForCarModelType.o: src/lookForCarModelType.c include/headerA3.h
	gcc -std=c99 -Wall -c src/lookForCarModelType.c

loadCarData.o: src/loadCarData.c include/headerA3.h
	gcc -std=c99 -Wall -c src/loadCarData.c

sortCarId.o: src/sortCarId.c include/headerA3.h
	gcc -std=c99 -Wall -c src/sortCarId.c

clean:
	rm *.o bin/carBase