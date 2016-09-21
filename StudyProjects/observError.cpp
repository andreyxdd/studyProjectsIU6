#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int observeError(){
	float y, y1, y2, y3, y4, y5, y6, p, b, delta;
	y = 1;
	b = y / 3;
	y1 = y / 600;
	/*iomanip library allows us to use setprecision() that sets the amount of digits after comma*/
	cout << "b=" << setprecision(16) << b;/*Output:”b=0.3333333432674408”*/
	delta = abs(0.3333333333333333 - b);
	cout << "\nThe delta of b=" << setprecision(16) << delta;/*Output:”delta=9.934107758624577e-009”*/
	p = (delta*b) / 0.3333333333333333;
	cout << "\nThe observational  error for 'b' equals to " << p << "\n";/*Output:”The observational for error for 'b' equals to 9.93410864802997”*/
	y2 = exp(y1);
	y3 = log(y2);
	y4 = y3 / 14;
	y5 = 14 * y4;
	y6 = 600 * y5;
	cout << "y=" << setprecision(16) << y;/*Output: “y=1”*/
	cout << "\ny6=" << setprecision(16)<<y6;/*Output: “y6=1.000023484230042”*/
	p = abs(y - y6) / y;
	cout << "\nThe observational error for 'y6' equals to " << p <<"\n";/*Output:”The observational for error for 'b' equals to 2.348423004150391e-005”*/
	/*for debugging*/
	system("Pause");
	return 0;
}