#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int cnt=0;
	vector<int> v(n);
	
	for(int i=0 ;i<n; i++){
		cin>> v[i];
	}
	
	sort (v.begin(), v.end());
		for (int i = 1; i<n;i++){
			if(v[i] != v[i-1]){
				cnt++;
			}
		}
	
	cout << cnt + 1 << "\n";  //time complexcity (olog(n) // space complexcity O(n)
}