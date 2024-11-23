#include <bits/stdc++.h>
using namespace std;
/*
Time Complexity: O(N) + O(N), where N = size of the array. First O(N) for counting the number of 0’s, 1’s, 2’s, and second O(N) for placing them correctly in the original array.

Space Complexity: O(1) as we are not using any extra space.
*/
void sortArray(vector<int>&arr,int n)
{
int cnt0=0;
int cnt1=0;
int cnt2=0;
for(int i=0;i<n;i++)
{
    if(arr[i]==0)
    {
        cnt0++;
    }
    else if(arr[i]==1)
    {
        cnt1++;
    }
    else{
        cnt2++;
    }
}
for(int i=0;i<cnt0;i++)
{
    arr[i]=0;
}
for(int i=cnt0;i<cnt0+cnt1;i++)
{
    arr[i]=1;
}
for(int i=cnt0+cnt1;i<n;i++)
{
    arr[i]=2;
}
};
int main() {
    
  vector<int>arr={2,0,2,1,1,0};
   int n=sizeof(arr)/sizeof(arr[0]);
  sortArray(arr,n);
   for(int i=0;i<n;i++)
   {
       cout<<arr[i]<<" ";
   }
   cout<<endl;
  
 

    return 0;
}

//second method
#include <bits/stdc++.h>
using namespace std;

void sortArray(vector<int>&arr,int n)
{
int cnt0=0;
int cnt1=0;
int cnt2=0;
for(int i=0;i<n;i++)
{
    if(arr[i]==0)
    {
        cnt0++;
    }
    else if(arr[i]==1)
    {
        cnt1++;
    }
    else{
        cnt2++;
    }
}
for(int i=0;i<cnt0;i++)
{
    arr[i]=0;
}
for(int i=cnt0;i<cnt0+cnt1;i++)
{
    arr[i]=1;
}
for(int i=cnt0+cnt1;i<n;i++)
{
    arr[i]=2;
}
};
int main() {
    
  vector<int>arr={2,0,2,1,1,0};
   int n=sizeof(arr)/sizeof(arr[0]);
  sortArray(arr,n);
   for(int i=0;i<n;i++)
   {
       cout<<arr[i]<<" ";
   }
   cout<<endl;
  
 

    return 0;
}
