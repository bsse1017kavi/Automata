#include<iostream>
using namespace std;

int main(void)
{
	int n = 0;
	
	string s;
	
	cin >> s;
	
	for(int i=0;i<s.length();i++)
	{
		cout << n << "\t";
		if((s[i]=='0' || s[i]=='1') && s[i+1]=='*')
		{
			cout << s[i] << "\t" << n << endl;
			cout << n;
	 	} 
	}
	
	return 0;
}
