#include <bits/stdc++.h>
using namespace std;
int largestEle(int arr[],int n)
{
   int largest = INT_MIN;
   for(int i=0;i<n;i++)
   {
       if(largest<arr[i])
       {
           largest=arr[i];
       }
   }
   return largest;
}


int main()
{
    int n=5;
  int arr[5]={4,5,36,7,8};
  //vector<int>arr:vector<int>&arr;
  int res=largestEle(arr,n);
  cout<<res;
  
}
