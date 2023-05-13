   #include <bits/stdc++.h>
using namespace std;
string isPalindrome(string S)
{
  
    string P = S;
    reverse(P.begin(), P.end());
    if (S == P) {
        
        return "Yes";
    }
    else {
        
        return "No";
    }
}
 

  int main()
  {
#ifndef  ONLINE_JUDGE
    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);
#endif 


{
    string S = "MADAM";
    cout << isPalindrome(S);
 
    return 0;
}

    
}