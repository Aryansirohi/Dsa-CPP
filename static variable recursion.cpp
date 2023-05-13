#include <iostream>
using namespace std;
int fun(int n)
{
	static int x =0;
	if(n>0)
	{
		x++;
		return fun(n-1)+x;
	}
	return 0;
}
  int main()
  {
  	#ifndef  ONLINE_JUDGE
    freopen("input2.txt", "r", stdin);

    freopen("output2.txt", "w", stdout);

    #endif

    int r;
    r=fun(5);
    cout<<r;
    return 0;
  	
  }