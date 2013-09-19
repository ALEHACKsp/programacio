#include <iostream>
using namespace std;

int main(){
	int variable;
	const int num;
	cin >> variable;
	num = variable;

	while(variable >= 0){
		cout << num - variable << endl;
		--variable;
	}

}