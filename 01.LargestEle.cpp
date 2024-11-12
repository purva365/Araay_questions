#include <bits/stdc++.h>
using namespace std;
/*
Complexity Analysis


Time Complexity: O(N)

Space Complexity: O(1)
*/
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

//method=02
   #include <bits/stdc++.h>
using namespace std;
int largeEle(vector<int>&arr)
{
    sort(arr.begin(),arr.end());//ologn(n)
    return arr[arr.size()-1];//o(1)
   //=o(n*log(n))
   /*
   Complexity Analysis

Time Complexity: O(N*log(N))

Space Complexity: O(n)
      */
    
}
int main()
{
  vector<int> arr1={3,45,67,21,34,56,78,90,12,45,66};
  vector<int>arr2={4,5,6,7,13};
  cout<<"largest Element :  "<<largeEle(arr1)<<endl;
  cout<<"largest Element : "<<largeEle(arr2)<<endl;
  
}

