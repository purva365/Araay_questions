#include<iostream>
using namespace std;
//Left Rotate an array by one place
/*
Complexity Analysis

Time Complexity: O(n), as we iterate through the array only once.

Space Complexity: O(n) as we are using another array of size, same as the given array.
*/
void solve(int arr[],int n)
{
    int temp[n];
    
    for(int i=0;i<n;i++)
    {
       temp[i-1]=arr[i]; 
    }
    temp[n-1]=arr[0];
    for(int i=0;i<n;i++)
    {
        cout<<temp[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[]={4,5,6,3,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    solve(arr,n);
    return 0;
}
