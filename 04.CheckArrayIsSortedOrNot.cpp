
#include<bits/stdc++.h>
using namespace std;
//Check Array is Sorted or not sorted
/*
time complexity=o(n^2)
Complexity Analysis

Time Complexity: O(N^2)

Space Complexity: O(1)

*/
bool sortedArray(int arr[],int n)
{
  for(int i=0;i<n;i++)
  {
    for(int j=i+1;j<n;j++)
    {
      if(arr[j]<arr[i])
      {
        return false;
      }
   
    }
  }
   return true;
}
int main()
{
    int arr[]={1,2,4,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
 bool ans=sortedArray(arr,n);
    if(ans)
    {
      cout<<"array is sorted"<<endl;
      
      
    }
    else
    {
      cout<<"array is not sorted"<<endl;
    }
    return 0;
}




#include<bits/stdc++.h>
using namespace std;
//OPTIMAL APPROACH
//Check Array is Sorted or not sorted
/*
time complexity=o(n)
Complexity Analysis

Time Complexity: O(N)

Space Complexity: O(1)

*/
bool sortedArray(int arr[],int n)
{

    for(int j=1;j<n;j++)
    {
      if(arr[j]<arr[j-1])
      {
        return false;
      }
   
    }
  
   return true;
}
int main()
{
    int arr[]={1,2,4,6,7,4};
    int n=sizeof(arr)/sizeof(arr[0]);
 bool ans=sortedArray(arr,n);
    if(ans)
    {
      cout<<"array is sorted"<<endl;
      
      
    }
    else
    {
      cout<<"array is not sorted"<<endl;
    }
    return 0;
}
