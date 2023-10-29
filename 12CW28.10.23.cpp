#include <iostream>
using namespace std;
int main()
{
    int a[10] = { 1,2,2,3,3,5,6,7,7,7 },i, k=1, maxi=0;
    for (i = 0; i < 9; i++)
    {
        if (a[i] == a[i + 1])
            k++;            
        else
        {            
            if (k > maxi)
                maxi = k;
            k = 1;
        }
    }
    if (k > maxi)
        maxi = k;
    cout << maxi << endl;
    return 0;
}