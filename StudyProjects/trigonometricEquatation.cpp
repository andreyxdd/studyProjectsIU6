#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int tri(){
	/*declared the values of x in array*/
	float xArray[] = { 2.15, 2.33, 2.47, 2.55, 2.62, 2.75 };
	int xArrayLength = 6;
	float y1, y2, y, p;
	/*the for-loop is used for counting different values of x*/
	for (int i = 0; i < xArrayLength; i++){
		y1 = sin(xArray[i]);
		/*iomanip library allows us to use setprecision() that sets the amount of digits after comma*/
		cout << "\ny1" << setprecision(16) << "=" << y1 << "\n";
		y2 = cos(xArray[i]);
		cout << "y2" << setprecision(16) << "=" << y2 << "\n";
		y = pow(y2, 2) + pow(y1, 2);
		cout << "x" << i << setprecision(16) << "=" << y << "\n";
		p = abs(y - 1);
		cout << "The observational error equals to " << p << "\n";
	}
	system("Pause");
	return 0;
}
/*OUTPUT:
y1=0.8368987907984977
y2=-0.547357665480271
x0=0.9999999999999999
The observational error equals to 1.110223024625157e-016

y1=0.7253843874668196
y2=-0.6883440203992384
x1=1
The observational error equals to 0

y1=0.6222335553193047
y2=-0.7828316566380653
x2=1
The observational error equals to 0

y1=0.557683717391417
y2=-0.8300535352352221
x3=0.9999999999999998
The observational error equals to 2.220446049250313e-016

y1=0.4982616424118386
y2=-0.8670267214458024
x4=0.9999999999999999
The observational error equals to 1.110223024625157e-016

y1=0.3816609920523317
y2=-0.9243023786324636
x5=1
The observational error equals to 0
Для продолжения нажмите любую клавишу . . .
*/