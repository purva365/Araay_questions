#include <bits/stdc++.h>
using namespace std;
/*Time Complexity: O(N*logM) + O(M), where M = size of the map i.e. M = (N/2)+1. N = size of the array.
    */
int twicefind(int arr[],int n)
{
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        mp[arr[i]]++;
    }
    for(auto &it:mp)
    {
        if(it.second==1)
        {
            return it.first;
        }
    }
    return -1;
    
};
int main() {
    
    int arr[]={2,3,3,5,2,2,5,8};
    int n=sizeof(arr)/sizeof(arr[0]);
   int res= twicefind(arr,n);
   cout<<res<<endl;
 

    return 0;
}
