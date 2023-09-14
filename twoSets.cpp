#include<bits/stdc++.h>
using namespace std;
#define int long long int 

string divide(int n)
{
	string result;
	int total_sum = (n * (n + 1)) / 2;

	if(total_sum % 2 != 0){
		return " NO ";
	}

	int target_sum = total_sum / 2;
	vector<int > f_set;
	vector<int > s_set;
	int current_sum = 0 ;


	for ( int i = n ; i > 0; i--){
		if(current_sum + i  <= target_sum)
		{
			f_set.push_back(i);
			current_sum += i;
		}

		else {
			s_set.push_back(i);
		}
	}

	if ( current_sum == target_sum)
	{
		result = "YES\n";
	    result += to_string(f_set.size()) + "\n";
	    for(int i : f_set)
	    {
	    	result += to_string(i) + " ";
	    } 

	    result += "\n";
	    result += to_string(s_set.size()) + "\n";
	    for ( int i : s_set)
	    {
	    	result += to_string(i) + " ";
	    }

	    return result ; 
	}

	else {

		return "NO";

	}
}

int32_t main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin>> n;

	string result = divide(n);

	cout << result;

	return 0;
}