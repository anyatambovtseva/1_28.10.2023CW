#include <iostream>
using namespace std;
int main()
{
	int a[10] = { 0,1,2,3,4,5,6,7,8,9 },i;
	float sr, s=0, k=0;
	for (i = 0; i < 10; i++)
	{
		s = s + a[i];
		k++;
	}
	sr = s / k;
	cout << sr;
	for (i = 0; i < 10; i++)
	{
		if (a[i] > sr)
			cout << a[i] << endl;
	}
	return 0;
}