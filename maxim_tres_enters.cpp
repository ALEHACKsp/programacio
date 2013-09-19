#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int num1,num2,num3,max;
	cin >>num1>>num2>>num3;

	if(num1 > num2 ? true : false)
	{
		max = num1 > num3 ? num1 : num3;
	}else{
		max = num2 > num3 ? num2 : num3;
	}	

	cout << max;

	return 0;
}