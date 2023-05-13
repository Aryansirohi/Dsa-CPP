   #include <bits/stdc++.h>
using namespace std;

int Binarysearch(int arr[],int size,int element)
{
	int low, mid, high;
     low =0;
     high = size-1;

     while(low<=high)
     {
        mid=(low+high)/2;
        if(arr[mid]==element)
        {
            return mid;

        }
        if (arr[mid]<element){
            low = mid+1;
        }
        else
        {
            high = mid-1;
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
   
    

    int arr[] = {1,3,5,56,64,73,123,156,177};
    int size = sizeof(arr)/sizeof(int);
    int element =64;
    int searchindex = Binarysearch(arr,size,element);
    cout<<"The element" " "<<element<<  " "   "was found at index "<<searchindex<<endl;
    return 0;
}

    
