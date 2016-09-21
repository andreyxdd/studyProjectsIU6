#include <iostream>
#include <cmath>//to examine our results within using atan() function
#include <iomanip>//for using setprecision() function
using namespace std;

int tema4b(){
	//declare counter of iterations
	int i;
	//sum is the summary of the series
	//eps is the iteration accuracy
	double x, sum, y, eps;
	cout << "Enter the value of X:\n";
	cin >> x;
	cout << "Enter the value of epsilon:\n";
	cin >> eps;
	i = 1;
	y = x;
	sum = x;
	while (abs(y) > eps){
		y = (-1)*y*x*x / (2 * i + 1);
		sum += y;
		i++;
	}
	cout << "Summary of the series is equal to " << setprecision(8) << sum;
	cout << "\nThe number of iterations is " << i;
	cout << "\nTrue value of the arctg(x)=" << atan(x) << "\n";
	system("pause");//for debugging
	return 0;
}
