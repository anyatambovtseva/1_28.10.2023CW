#include <iostream>
#include <cmath>
using namespace std;
string palindrom(string s)
{
	string p = s;
	reverse(p.begin(), p.end());
	if (p == s)
	{
		cout << "is a palindrom - " << s << endl;
		return s;
	}
	else
	{
		cout << "is not a palindrom - " << s << endl;
		return s;
	}
}
int main()
{
	string a[] = { "aba", "abba", "abb", "asdf" };
	for (string i : a)
		cout << palindrom(i) << endl;
	return 0;
}