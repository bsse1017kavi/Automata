#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	bool chk = true;
	string s;
	int size = s.length();
	cin >> s;
	
	
	while(size!=1)
	{
		for(int i=0;i<s.length();i++)
		{
			if(s[i]=='0' || s[i]=='1') s[i] = 'e';
		}
		
		cout << s << endl;
	
		for(int i=0;i<s.length();i++)
		{
			if(s.find("e+e")!=string::npos)
			{
				s.replace(s.find("e+e"),3,"e");
			}
		
			else if(s.find("e*e")!=string::npos)
			{
				s.replace(s.find("e*e"),3,"e");
			}
		}
		
		cout << s << endl;
	
		for(int i=0;i<s.length();i++)
		{
			if(s.find("(e)")!=string::npos)
			{
				s.replace(s.find("(e)"),3,"e");
			}
		}
		
		cout << s << endl;
		
		if(size==s.length())
		{
			chk = false;
			break;
		}
		
		else size = s.length();
		
	}
	
	//cout << s << endl;
	
	if(chk) cout << "Yes" << endl;
	else cout << "No" << endl;
}
