#include<bits/stdc++.h>
using namespace std;
#define int long long 

int32_t main()
{
	int t;
	cin>> t;
	while(t--)
	{
		int a,b;
		cin>> a >> b;
		int t = a+b;

		if(t % 3 == 0 && min(a,b)*2 >= max(a,b))
		{
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
	return 0;
}