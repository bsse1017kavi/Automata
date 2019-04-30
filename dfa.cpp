#include<iostream>
using namespace std;

char s1 = 'a', s2 = 'b', s3 = 'c';

void transition(string s)
{
	char state = s1;
	
	cout << state << " ";
	
	for(int i=0;i<s.length();i++)
	{
		if(state==s1)
		{
			if(s[i]=='0')
			{
				state = s1;
				cout << state << " ";
			}
			
			else
			{
				state = s2;
				cout << state << " ";
			}
		}
		
		else if(state==s2)
		{
			if(s[i]=='1')
			{
				state = s2;
				cout << state << " ";
			}
			
			else
			{
				state = s3;
				cout << state << " ";
			}
		}
		
		else if(state==s3)
		{
			if(s[i]=='1' || s[i]=='0')
			{
				state = s3;
				cout << state << " ";
			}
			
		}
	}
	
	cout << endl;
	
	if(state==s3) cout << "Accepted" << endl;
	
	else cout << "Not Accepted" << endl;;
}

int main(void)
{
	string s;
	
	cin >> s;
	
	transition(s);
	
	return 0;
}
