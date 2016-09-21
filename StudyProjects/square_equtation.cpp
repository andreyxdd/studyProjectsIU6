#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int square(){
	int a, b, c, e;
	double D, x1, x2;
	cout << "Please input a,b and c: \n";
	cin >> a >> b >> c;
	D = pow(b, 2) - 4 * a*c;
	if (D >= 0){
		e = 2 * a;
		x1 = (-b + sqrt(D)) / e;
		x2 = (-b - sqrt(D)) / e;
		cout<<"Result: \n"<< setprecision(10)<<"x1="<<x1<<" and "<<"x2="<<x2<<"\n";/*setprecision() sets the number of digits after comma 
		within using the iomanip library*/
	}
	else{
		cout << "No result\n";
	}
	system("Pause");/*for debgging*/
	return 0;
}
