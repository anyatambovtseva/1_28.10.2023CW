#include <iostream>
using namespace std;
int main()
{
	int a[10] = { 0,1,2,3,4,5,6,7,8,9 }, i, ii=0,n;
	for (i = 0; i < 9; i++)
	{
		for (n = i + 1; n < 10; n++)
			if (a[i] == a[n])
				ii = 1;
	}
	if (ii==1)
		cout << "there are identical elements in the array";
	else
		cout << "there are no identical elements in the array";
	return 0;
}
