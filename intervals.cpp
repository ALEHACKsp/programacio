#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int interval_1[2], interval_2[2], interval_final[2];

	cin >> interval_1[0] >> interval_1 [1];
	cin >> interval_2[0] >> interval_2 [1];

	int distancia_principi = interval_2[0] - interval_1[0];
	int distancia_final = interval_2[1] - interval_1[1];

	char sign;

	if (distancia_principi > 0 and distancia_final < 0)
	{
		sign = '1';
		interval_final[0] = interval_1[0]; interval_final[1] = interval_1[1];
	}else if(distancia_principi < 0 and distancia_final > 0)
	{
		sign = '2';
		interval_final[0] = interval_2[0]; interval_final[1] = interval_2[1];
	}else if (distancia_principi == 0 and distancia_final == 0)
	{
		sign = '=';
		interval_final[0] = interval_1[0]; interval_final[1] = interval_1[1];
	}else if(distancia_principi > 0 and distancia_final > 0)
	{
		sign = '?';
		interval_final[0] = interval_2[0]; interval_final[1] = interval_1[1];
	}else if (distancia_principi < 0 and distancia_final < 0)
	{
		sign = '?';
		interval_final[0] = interval_1[0]; interval_final[1] = interval_2[1];
	}

	cout << sign << interval_final[0] << interval_final[1] << endl;

	return 0;
}