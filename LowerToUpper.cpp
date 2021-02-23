#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void upper(string& s)
{
	for(int i=0; i<s.length(); i++){
		s[i]=toupper(s[i]);
	}
}

int main()
{

	string s;
	int t, t1 = 1;
	cin >> t;
	getchar();

	for(int i=0; i<t; i++){
		getline(cin,s);
		upper(s);
		cout << "Case " << t1++ << ": ";
		cout << s << endl;
	}
    return 0;
}