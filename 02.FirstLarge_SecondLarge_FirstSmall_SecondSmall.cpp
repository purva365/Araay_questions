
#include <bits/stdc++.h>
using namespace std;
//Second Smallest And Second Largest;
/*
O(n)+O(n)=O(2n)
Complexity Analysis

Time Complexity: O(N), We do two linear traversals in our array

Space Complexity: O(1)
*/
void SmallestAndLargest(int arr[],int n)
{  if(n==0 || n==1)
        cout<<-1<<" "<<-1<<endl;
int small=INT_MAX;
int SecondSmallest=INT_MAX;
int large=INT_MIN;
int SecondLarge=INT_MIN;
int i;
for(i=0;i<n;i++)
{large=max(arr[i],large);
small=min(arr[i],small);
}

for(int i=0;i<n;i++)
{
    if(arr[i]>SecondLarge&& arr[i]!=large)
    
        SecondLarge=arr[i];

    
    if(arr[i]<SecondSmallest && arr[i]!=small)

     SecondSmallest=arr[i];

      
}
cout<<"small value : = "<<small<<endl;
cout<<"second small value : = "<<SecondSmallest<<endl;
cout<<"first Large value : = "<<large<<endl;
cout<<"SecondLarge Value: ="<<SecondLarge<<endl;
    
}
int main()
{
  int arr[]={4,5,6,3,2};
  //2 3  4 5 6
  int n=sizeof(arr)/sizeof(arr[0]);
  SmallestAndLargest(arr,n);
  return 0;
  
  
}
