#include <bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>
using namespace std;

/*
Time Complexity: O(n)

Space Complexity: O(1)
*/
int linerSearch(int arr[],int n,int k)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==k)
        {
            return i;
        }
    }
    return -1;
};
int main()
{
int arr[]={1,2,3,4,5};
int k=4;
int n=sizeof(arr)/sizeof(arr[0]);
int ans=linerSearch(arr,n,k);
cout<<ans<<endl;

    return 0;
}

int linerSearch(int arr[],int n,int k)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==k)
        {
            return i;
        }
    }
    return -1;
};
int main()
{
int arr[]={1,2,3,4,5};
int k=4;
int n=sizeof(arr)/sizeof(arr[0]);
int ans=linerSearch(arr,n,k);
cout<<ans<<endl;

    return 0;
}
