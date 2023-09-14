#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{
	ios_base::sync_with_stdio(false);

	int n ;
	cin >> n;

	vector<int > a(n);


	for(int i = 0; i < n ; i++){
		cin >> a[i];
	}

    int x = 0;
	for(int i = 1; i < n ;i++)
	{
		if(a[i] < a[i-1])
		{

			int newVal = (abs(a[i] - a[i-1]));
			x += newVal;
			a[i] += newVal;

		}
	}

	cout << x  << endl;

	return 0;
}