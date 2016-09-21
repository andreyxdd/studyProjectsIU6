#include <iostream>
using namespace std;

int temaa(){
	float x, y, z;
	bool flag;
	cout << "Input three any numbers:\n";
	cin >> x >> y >> z;
	cout << "Your numbers: " << "x=" << x << " y=" << y << " z=" << z;
	/*conditional clause*/
	if ((x > 0 && z < 0 && y < 0) || (z > 0 && x < 0 && y < 0) || (y > 0 && z < 0 && x < 0)){
		flag = true;
	}
	else{
		flag = false;
	}
	if (flag){
		cout << "\nValue of the flag is true\n";;
	}
	else{
		cout << "\nValue of the flag i false\n";
	}
	/*for debugging*/
	system("Pause");
	return 0;
}
