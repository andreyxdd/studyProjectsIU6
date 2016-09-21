#include <iostream>
#include <cmath>/*for pow(,) function*/
using namespace std;

int tema3a(){
	/*coorfinates of a point*/
	float x, y;
	cout << "Input two real numbers which are coordinates of a point:\n";
	cin >> x >> y;
	cout << "Your coordinates: " << "x=" << x << " and y=" << y;
	/*conditional clause*/
	if (pow(x, 2) + pow(y, 2) <= 1 && pow(x + 1, 2) + pow(y, 2) <= 1){
		cout << "\nThe point with coordinates (x,y) belongs to the given area\n ";
	}
	else{
		cout << "\nThe point with coordinates (x,y) does not belong to the given area\n ";
	}
	/*for debugging*/
	system("Pause");
	return 0;
}
