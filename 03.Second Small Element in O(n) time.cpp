#include <bits/stdc++.h>
using namespace std;
//Second Smallest And Second Largest;
/*
=Complexity Analysis

Time Complexity: O(N), Single-pass solution

Space Complexity: O(1)
*/
int SmallestAndLargest(int arr[],int n)
{  if(n==0 || n==1)
        cout<<-1<<" "<<-1<<endl;
int small=INT_MAX;
int SecondSmallest=INT_MAX;

int i;
for(i=0;i<n;i++)
{ 
    if(arr[i]<small)
    {
        SecondSmallest=small;
        small=arr[i];
    }
    else if(arr[i] < SecondSmallest&& arr[i] != small)
       {
          SecondSmallest = arr[i];
       }
    }
      
       
   return  SecondSmallest;  
}

    

int main()
{
  int arr[]={2,3,4,5,6,1};
 
  int n=sizeof(arr)/sizeof(arr[0]);
  int ans=SmallestAndLargest(arr,n);
  cout<<ans<<endl;
  return 0;
  
  
}
