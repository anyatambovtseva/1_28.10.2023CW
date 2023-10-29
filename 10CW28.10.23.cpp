#include <iostream>
using namespace std;
int main()
{
	int a[10] = { 0,1,2,2,4,5,3,4,8,9 }, i;
	for (i = 1; i < 10; i++)
	{
		if (a[i] > a[i - 1])
			cout << a[i] << endl;
	}
	return 0;
}