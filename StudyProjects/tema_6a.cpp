#include <iostream>
#include <stdlib.h> //for rand() function
using namespace std;

int tema6(){
	int matr[3][12];
	//generating random values for uor matrix
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 12; j++){
			matr[i][j] = rand() % 10;
		}
	}

	for (int i = 0; i<3; i++)    //This loops on the rows.
	{
		for (int j = 0; j<12; j++) //This loops on the columns
		{
			cout << matr[i][j] << "  ";
		}
		cout << endl;//jump to the next line
	}

	cout << "\nResult:\n";
	for (int i = 0; i < 12; i++)    //This loops on the rows.
	{	
		if (i % 4 == 0)cout << "\n";//skip one line, so we can take required output
		for (int j = 0; j < 3; j++) //This loops on the columns
		{
			cout << matr[j][i] << "  ";
		}
		cout << endl;
	}
	system("Pause");//for debuging
	return 0;
}
