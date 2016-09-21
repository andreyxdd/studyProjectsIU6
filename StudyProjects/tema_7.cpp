#include <iostream>
#include <string>
#include <cstring>
#include <vector>
using namespace std;

vector<const char*> removeCharacter(string str, const char* value){
	vector<const char*> data(str.begin(), str.end());
	int count = 0;
	for (int i = 0; i < unsigned(data.size()); i++){
		if (data[i] == value){
			data.insert(data.begin(), data[i]);
			count++;
		}
	}
	data.erase(data.begin() + count);
	return data;
}


int main(){
	string str;
	cout << "Enter the string:\n";
	getline(cin,str);
	
	system("pause");
	return 0;
}