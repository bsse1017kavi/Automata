#include<iostream>
#include<stdio.h>
using namespace std;

struct state
{
	/*int sn;//state number*/
	int t0;// transition for 0
	int t1;// transition for 1
};

int main(void)
{
	string s;
	
	int n;
	
	cout << "Enter the number of states: " ;
	
	cin >> n;
	
	state** states = new state*[n];
	
	for(int i=0;i<n;i++) states[i] = new state;
	 
	int a,b,c;
	for(int i=0;i<n*2;i++)
	{
		
		cin >> a >> b >> c;
		
		if(b==0) states[a]->t0 = c;
		
		else if(b==1)states[a]->t1 = c; 
		
		//cout << i << endl;
	}
	
	cout << "Enter a string: ";
	
	cin >> s;
	
	int k = 0;
	
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='0')
		{
			cout << k << " ";
			k = states[k]->t0;
		}
		
		else if(s[i]=='1')
		{
			cout << k << " ";
			k = states[k]->t1; 
		} 
	}
	
	cout << endl;
	
	if(k==n-1) cout << "Accepted" << endl;
	
	else cout << "Not Accepted" << endl;
	
	return 0;
}
