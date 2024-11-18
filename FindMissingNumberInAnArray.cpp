#include <bits/stdc++.h>
using namespace std;
/*
Time Complexity: O(N)Space Complexity: O(1) as we are not using any extra space.
*/

int mininum(int arr[],int n)
{
    int total=n*(n+1)/2;
    int sum=0;
       int totalsum=0;
    for(int i=0;i<n;i++)
    {sum+=arr[i];
       
    }
 
    totalsum=total-sum;
    return totalsum;
};
int main() 
{
    int n=5;
    int arr[]={1,2,3,5};
   int ans= mininum(arr,n);
   cout<<ans;
return 0;
}
