#include <bits/stdc++.h>
using namespace std;

int c(int n,int r)
{
	if (r==0 || n==r)
		return 1;
		return c(n-1,r-1)+c(n-r,r);

	
}

int fact (int n)
{
	if(n==0)
		return 1;
	else
		return fact(n-1)*n;
}
 
 int nCr (int n, int r){
  int num,deno;
  num = fact(n);
  deno = fact(r)* fact(n-r);
  return num/deno;
}
   int main(){
   	  
#ifndef  ONLINE_JUDGE
    freopen("input2.txt", "r", stdin);

    freopen("output2.txt", "w", stdout);

#endif
    cout<<nCr(8,5);
    return 0;
   }
