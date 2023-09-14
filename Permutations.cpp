#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t
main ()
{

  int n;
  cin >> n;
  string a = "";


   if (n<=3 && n > 1)
      {
	     cout << "NO SOLUTION" << endl;
	     return 0;
      }
      for (int i = 1; i <= n; i++)
	{
	  if (i % 2 == 0)
	    {
	      cout << i << " ";
	    }
	  else
	    {
	      a += to_string(i) + " ";
	    }

	}



      cout << a;
    
  return 0;


}
