#include<iostream>
using namespace std;
/*
Time Complexity - O(N) where N is the number of elements in an array

Space Complexity - O(1) since no extra space is required
*/
void reverse(int arr[],int start,int end)
{
    while(start<=end)
    {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
void rotateByKposition(int arr[],int n,int k)
{
    reverse(arr,0,n-k-1);
    reverse(arr,n-k,n-1);
    reverse(arr,0,n-1);
}
int main()
{
    int arr[]={1,2,3,4,5,6,7};
    int n=7;
    int k=2;
    rotateByKposition(arr,n,k);
    cout<<"after rotating an array"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
}
