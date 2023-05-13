#include<bits/stdc++.h>
using namespace std;

int fact(int n)
{
	if (n==0)
		return 1;
	else
		return fact(n-1)*n;

}

int main()
{
	
  
#ifndef  ONLINE_JUDGE
    freopen("input2.txt", "r", stdin);

    freopen("output2.txt", "w", stdout);

#endif

    int r;
    r =fact(5);
    cout<<r;
    return 0;
}