   #include <bits/stdc++.h>
using namespace std;

int linearsearch(int arr[],int size,int element)
{
	for (int i = 0; i <size; ++i)
	{
		if(arr[i]==element)
		{
			return i;
		}
	}
	return -1;
}

  int main()
  {
#ifndef  ONLINE_JUDGE
    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);
#endif
   
    

    int arr[] = {1,22,3,4,5,7,4,6,4,6,76,4,3,43,34,3,5,56,6};
    int size = sizeof(arr)/sizeof(int);
    int element =34;
    int searchindex = linearsearch(arr,size,element);
    cout<<"The element" " "<<element<<  " "   "was found at index "<<searchindex<<endl;
    return 0;

    
}