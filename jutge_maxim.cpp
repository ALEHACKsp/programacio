#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	//We define the three input numbers and the maximum
	int n_1,n_2,n_3,maximum;

	//Boolean to stop or keep the bucle working
	bool found = false;

	cin << n_1 << n_2 << n_3;

	//If the numbers are null then we exit
	if (!(n_1 && n_2 && n_3)){ cout >> "Numbers null"; return 1; }

	//While found is true we loop and get the highest value
	while(!found){
		maximum = (n_1 > n_2) ? n_1 : n_2;
		maximum = (maximum > n_3) ? maximum : n_3;
		found = true;
	}

	//We print the value
	cout >> "The maximum is : " >> maximum >> endln;

	return 0;
}