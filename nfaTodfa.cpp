#include<iostream>
#include<queue>
using namespace std;

bool contains(vector<string> v,string s)
{
    vector<string> :: iterator it = v.begin();
    for(;it!=v.end();it++)
    {
        if(*it==s) return true;
    }

    return false;
}

int main(void)
{
	int t;

	string start,ac;

	queue<string> q;
	vector<string> v;

	cout << "Enter the number of transition function:" << endl;

	cin >> t;

    string nfa[t][3];

    for(int i=0;i<t;i++)
    {
        for(int j=0;j<3;j++)
        {
            nfa[i][j] = "-1";
        }
    }

	cout << "Enter the functions:" << endl;

	for(int i=0;i<t;i++)
	{
		string s1,s2,s3;

		cin >> s1 >> s2 >> s3;

		nfa[i][0] = s1;

		if(s2=="0")
        {
             nfa[i][1] = s3;
        }

		else if(s2=="1")
        {
            nfa[i][2] = s3;
        }

	}

	cout << "Enter the starting state:" << endl;

	cin >> start;

	q.push(start);

	cout << "Enter the accepting state:" << endl;

	cin >> ac;

	cout << endl;

	cout << "state" << "\t" << "0" << "\t" << "1" << endl;

	while(!q.empty())
    {
        string s = q.front();
        string temp = "";
        string temp1 = "";
        string t1 = "";
        string t2 = "";

        for(int i=0;i<s.length();i++)
        {
            temp+=s[i];
            for(int k=0;k<t;k++)
            {
                if(nfa[k][0]==temp && nfa[k][1]!="-1") t1+=nfa[k][1];
                if(nfa[k][0]==temp && nfa[k][2]!="-1") t2+=nfa[k][2];
            }

            temp = "";

        }

        for(int i=0;i<s.length();i++)
        {
            temp1+=s[i];
            if(temp1==ac)
            {
                cout << "*";
                break;
            }

            temp1 = "";
        }

        cout << s << "\t" << t1 << "\t" << t2 << endl;
        v.push_back(s);
        q.pop();


        if(t1!="" && !contains(v,t1))
        {
            q.push(t1);
        }
        if(t2!="" && !contains(v,t2)) q.push(t2);

    }



	return 0;
}
