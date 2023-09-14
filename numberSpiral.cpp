#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
	int t ;
	cin>> t;
	while(t--)
	{

		int y ,x;
		cin>>y>>x;

		if(y>x)
		{
			if(y%2)
			{
				cout<< (y-1)*(y-1) + 1 + (x - 1) ;
			}
			else
			{
				cout << y*y -(x-1);
			}			
		}

		else 
		{
			if(x%2){
				cout << x*x - (y-1);
			}
			else 
			{
				cout << (x-1)*(x-1) + 1 + (y-1);
			}


		}
		cout << endl;
	}
	return 0;
}