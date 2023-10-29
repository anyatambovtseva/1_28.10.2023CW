#include <iostream>
using namespace std;
int main()
{
	int a[10] = { 0,1,2,2,4,5,3,4,8,9 }, i, c, b;
	cout << "enter the limit (b<c)" << endl;
	cin >> b;
	cin >> c;
	for (i = 0; i < 10; i++)
	{
		if (a[i] >= b && a[i] <= c)
			cout << i << endl;
	}
	return 0;
}