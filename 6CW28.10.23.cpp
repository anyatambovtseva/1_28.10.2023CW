#include <iostream>
using namespace std;
int main()
{
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 }, i, maxi=-100, mini=100,b,c;
	
	for (i = 0; i < 10; i++)
	{
		cout << a[i] << " ";
		if (a[i] > maxi)
		{
			maxi = a[i];
			b = i;
		}
		if (a[i] < mini)
		{
			mini = a[i];
			c = i;
		}
	}
	cout << endl;
	a[b] = mini;
	a[c] = maxi;
	for (i = 0; i < 10; i++)
	{
		cout << a[i] << " ";
	}
	return 0;
}
