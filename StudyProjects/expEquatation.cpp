#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int exm(){
	/*declared the values of x in array*/
	float xArray[] = {2.25,2.32,2.45,2.55,2.65,2.75};
	int xArrayLength = 6;
	float y1, y2, y, p;
	/*the for-loop is used for counting different values of x*/
	for (int i = 0; i < xArrayLength; i++){
		y1 = sinh(xArray[i]);
		/*iomanip library allows us to use setprecision() that sets the amount of digits after comma*/
		cout << "\ny1"<< setprecision(16) << "=" << y1 << "\n";
		y2 = cosh(xArray[i]);
		cout << "y2" << setprecision(16) << "=" << y2 << "\n";
		y = pow(y2, 2) - pow(y1, 2);
		cout << "x" << i << setprecision(16)<<"=" << y << "\n";
		p = abs(y - 1);
		cout << "The observational error equals to " << p << "\n";
	}
	system("Pause");
	return 0;
}
/*OUTPUT:

y1=4.691168308258057
y2=4.796567440032959
x0=0.9999980926513672
The observational error equals to 1.9073486328125e-006

y1=5.038700103759766
y2=5.136973381042481
x1=0.9999980926513672
The observational error equals to 1.9073486328125e-006

y1=5.751026630401611
y2=5.837320327758789
x2=1.000003814697266
The observational error equals to 3.814697265625e-006

y1=6.364510536193848
y2=6.442592620849609
x3=1.000003814697266
The observational error equals to 3.814697265625e-006

y1=7.041694164276123
y2=7.112345695495606
x4=1.000003814697266
The observational error equals to 3.814697265625e-006

y1=7.789351940155029
y2=7.853280067443848
x5=1.000003814697266
The observational error equals to 3.814697265625e-006
Для продолжения нажмите любую клавишу . . .
*/