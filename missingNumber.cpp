#include<bits/stdc++.h>
using namespace std;
// #define ll long long int

int main()
{
	long long int n ;
    cin>> n;
    long long int sum = 0;

    for(int i = 0; i < n-1 ; i++)
    {
    	long long x;
    	cin>> x;
    	sum = sum + x;
    }

    cout << (n*(n + 1 )) / 2 - sum << endl;
    return 0;
}
