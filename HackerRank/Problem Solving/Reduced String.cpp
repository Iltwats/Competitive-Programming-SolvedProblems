//https://www.hackerrank.com/challenges/reduced-string/problem


#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	string str;
	cin >> str;
	int len = str.length();
	for (int i = 0; i < len;)
	{
		if (str[i] == str[i + 1] && i > -1)
		{
			str.erase(i, 2);
			i--;
		}
		else
			i++;
	}

	if (!str.empty())
		cout << str << endl;
	else
		cout << "Empty String" << endl;
	return 0;
}
