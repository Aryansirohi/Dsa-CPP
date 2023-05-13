#include <bits/stdc++.h>
using namespace std;
void fun(int n)
{
  if (n>0)
  {
    
    cout<<n;
    fun(n-1);
    fun (n-1);
  }
  
}

  int main()
  {
#ifndef  ONLINE_JUDGE
    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);

#endif
    fun(3);
    return 0; 
  } 