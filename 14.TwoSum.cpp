#include <bits/stdc++.h>
using namespace std;

vector<int> TwoSum(int arr[],int n,int target)
{
    /*
    Time Complexity: O(N2), where N = size of the array.
Reason: There are two loops(i.e. nested) each running for approximately N times.

Space Complexity: O(1) as we are not using any extra space.


tc=O(n)  vala concept bhi dekh lena ........
    */
 vector<int>ans;
 for(int i=0;i<n;i++)
 {
     for(int j=i+1;j<n;j++)
     {
         if (arr[i] + arr[j] == target) {
         ans.push_back(i);
         ans.push_back(j);
         return ans;}
     }
 }
 return {-1,-1};
    
};
int main() {
    
    int arr[]={2,6,5,8,11};
     int n=sizeof(arr)/sizeof(arr[0]);
    int target=14;
    vector<int>ans=TwoSum(arr,n,target);
    cout<<ans[0]<<"and"<<ans[1]<<endl;
   
  
 

    return 0;
}
