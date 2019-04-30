#include<iostream>
#include<set>
#include<stdio.h>
using namespace std;

struct state
{
	/*int sn;//state number*/
	int t0=-1;// transition for 0
	int t1=-1;// transition for 1
};

int main(void)
{
	string s;
	
	int n;
	
	cout << "Enter the number of states: " ;
	
	cin >> n;
	
	state** states = new state*[n];
	
	set<int>* dfa = new set<int>[n];
	
	for(int i=0;i<n;i++) states[i] = new state;
	 
	int a,b,c;
	while(a==-1)
	{
		
		cin >> a >> b >> c;
		
		if(b==0) states[a]->t0 = c;
		
		else if(b==1)states[a]->t1 = c; 
		
	}
	
	for(int i=0;i<n;i++)
	{
		if(states[i]->t0!=-1)
		{
			dfa[i].insert(states[i].t0);
		}
	}
	
	/*cout << "Enter a string: ";
	
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
	
	else cout << "Not Accepted" << endl;*/
	
	return 0;
}
