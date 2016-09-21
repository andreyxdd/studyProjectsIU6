#include <iostream>
#include <string>
#include <time.h>
using namespace std;

int tema4(){
	/*actual number to examine*/
	long long number;
	/*the counter of odd numbers*/
	int count=0;
	/*declare counter for our loops*/
	int i = 0;
	cout << "Input any number\n";
	cin >> number;
	/*convert number to string*/
	string s = to_string(number);
	/*then convert string to char, so we can iterate through*/
	char const *str = s.c_str();
	//to check time that function take to execute
	clock_t tStart = clock();
	for (; i < strlen(str); i++){
		/*convert each element of char array to the int and examine each digit  on oddness*/
		if ((str[i] - '0') & 1)count++;
	}

	/*uncomment if necessury*/
	
	/*while (i != strlen(str)){
		if ((str[i] - '0') & 1)count++;
		i++;
	}*/

	/*do{
		if ((str[i] - '0') & 1)count++;
		i++;
	} while (i != strlen(str));*/

	//output code executing time
	printf("Time taken: %.3fs\n", (double)(clock() - tStart) / CLOCKS_PER_SEC);
	cout << "The amount of odd numbers is " << count<<"\n";

	//for debugging
	system("pause");
	return 0;
}
