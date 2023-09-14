#include<bits/stdc++.h>
using namespace std;
#define int long long 

int32_t main()
{
  int n;
  cin>> n;
  vector<pair<int ,int >>v;
  for (int i=0;i<n;i++){
    int a,b;
    cin>> a >> b;
    v.push_back({b,a});
  }
  
  sort(v.begin(), v.end());
  int cnt = 0;
  int end = 0;
  
  for(int i = 0; i<n ;i++){
    int b = v[i].first;
    int a = v[i].second;
    
    if(a >= end){
      cnt++;
      end = b;
    }
  }
  cout << cnt << endl;
  return 0;
}