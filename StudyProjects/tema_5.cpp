#include <iostream>//for using cout and cin ooperators
#include <algorithm>//for using sort() function
#include <stdlib.h> //for using srand() and rand() function
#include <time.h>//for usinf time() function
using namespace std;


int tema5(){
	//declare the array of 20 coordinates of points
	int arrayLength = 20;
	int* arrayOfCoordinates=new int[arrayLength];
	//declare counter for loops
	int i = 0;
	//randomly generating elements of array
	srand(time(NULL));
	for (; i < arrayLength; i++){
		arrayOfCoordinates[i]=rand()%100-50;
	}
	//output the array of coordinates
	cout << "The array of coordinates: ";
	for (i=0; i < arrayLength; i++){
		cout << arrayOfCoordinates[i]<<", ";
	}
	//sort the array and find substraction between last and first element of the sorting array
	sort(arrayOfCoordinates,arrayOfCoordinates+arrayLength);
	//so maxSubstraction is the biggest distance between coordinates in the array
	int maxSubstraction = arrayOfCoordinates[arrayLength - 1] - arrayOfCoordinates[0];
	cout << "\nThe maximum distance between two coordinates is " << maxSubstraction  << "\n";
	//for debugging
	system("pause");
	//free the memory
	delete[] arrayOfCoordinates;
	return 0;
}
