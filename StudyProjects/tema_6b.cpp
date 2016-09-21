#include <iostream>
#include <utility>	//for creating function which uses the pair<,> type
#include <stdlib.h> //for rand() and srand() functions
#include <time.h> //for srand() function
using namespace std;

//this function take three value: the matrix and its sizes
pair<int,int> maxOfMatrix(int array2D[][10], int sizeOfLines, int sizeOfColumns){
	//declare temprorary values
	int value=0,tempN=0,tempM=0; 
	for (int i = 0; i < sizeOfLines; i++){ //loops through rows
		for (int j = 0; j < sizeOfColumns; j++){ //loops through columns 
			//finding the maximum value in the matrix
			if (value < array2D[i][j]){
				value = array2D[i][j];
				tempN = i;
				tempM = j;
			}
		}
	}
	//returning the pair element which made up within the special function
	//that pair returns the indices of maximum element's row and column in the matrix
	return make_pair(tempN, tempM);;
}


int tema6b(){
	cout << "Enter size of the matrix that are less or equal to ten\n";
	//initializing the sizes of matrix, n - amount of rows, m -amount of columns
	int n, m; 
	cin >> n >> m;
	//declaring the matrix with the maximum size 10x10
	int matr[10][10];

	//generating random values for our matrix
	//srand(time(NULL));<<<---UNCOMMENT THIS STRING!!!
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			matr[i][j] = rand() % 29-9;
		}
	}

	cout << "\nOur matrix:\n";//show our matrix (for debuging)
	for (int i = 0; i<n; i++)    //loops though the rows
	{
		for (int j = 0; j<m; j++) //loops through the columns
		{
			cout << matr[i][j] << "   ";
		}
		//jump to the next line
		cout << endl;
	}

	//showing the index of maximum element's column (for debugging)
	//columns are going to swap, so we need the second value of our pair which contains the elemnt's column
	int col1 = maxOfMatrix(matr, n, m).second;
	cout << "\nThe column with the maximum element in the matrix is " << col1 + 1 << "\n";

	//showing the index of the first negative value's column (for debugging)
	int col2=0;
	for (int i = 0; i < m; i++){
			if (matr[0][i] < 0){
				cout << "\nThe column with the first negative value is " << i + 1 <<"\n";
				col2 = i;
				//only the first met elemnt is necessary, so break operator is used
				break;
			}
	}

	//actual switch columns in our matrix
	int temp;
	for (int i = 0; i < n; i++){
		temp = matr[i][col1];
		matr[i][col1] = matr[i][col2];
		matr[i][col2] = temp;
	}

	//show our new matrix
	cout << "\nNew matrix:\n";
	for (int i = 0; i<n; i++){
		for (int j = 0; j<m; j++) cout << matr[i][j] << "   ";
		cout << endl;
	}

	//for debbuging
	system("Pause");
	return 0;
}

