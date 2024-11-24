#include <bits/stdc++.h>
using namespace std;
//O(n)
int maxisubarray(int arr[],int n)
{
    int sum=0;
    int maxi=INT_MIN;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        if(sum>maxi)
        {
            maxi=sum;
        }
        if(sum<0)
        {
            sum=0;
        }
    }
    return maxi;
}
int main() {
    
 int arr[]={ -2, 1, -3, 4, -1, 2, 1, -5, 4};
 int n=sizeof(arr)/sizeof(arr[0]);
 int ans=maxisubarray(arr,n);
 cout<<ans<<endl;

    return 0;
}
