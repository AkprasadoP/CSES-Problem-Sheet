#include<bits/stdc++.h>
using namespace std;

int main()
{
	int cnt = 0, ans = 0 ;
	char c;
	vector<char> v;    
    string s(v.begin(), v.end());
    cin>>s;

    for( int i =0; i< s.length() ;i++){

    	if(s[i] != c)
    	{
    		c = s[i];  // updating the current answer
    		cnt = 0;   
    	}

    	if(s[i] == c)
    	{
    		cnt++; // counting till the number repeats
    	}

    	ans = max(ans , cnt);

    }

    cout << ans;
 
    // cout << str << endl;  

}