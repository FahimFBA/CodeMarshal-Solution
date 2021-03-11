#include<bits/stdc++.h>

using namespace std;

int main()

{
	long long int t, i, a,b;
	char ch;
	cin >> t; // test cases

	for (i = 1 ; i <= t ; i++)
	{
		cin >> a >> b >> ch;
		

		if (ch == '+') 
		{
			cout << "Case " << i << ": " << a+b << endl;
		}
		else if (ch == '-') 
		{
			cout << "Case " << i << ": " << a-b << endl;
		}
		else if (ch == '%') 
		{
			cout << "Case " << i << ": " << a%b << endl;
		}
		else if (ch == '/') 
		{
			cout << "Case " << i << ": " << a/b << endl;
		}
		else if (ch == '*') 
		{
			cout << "Case " << i << ": " << a*b << endl;
		}
		
	}
		return 0;
}