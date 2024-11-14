#include<bits/stdc++.h>
using namespace std;
/*
Complexity Analysis

Time complexity: O(n*log(n))+O(n)

Space Complexity: O(n) 
*/

int duplicateRemove(int arr[],int n)
{
    set<int>set;
   for(int i=0;i<n;i++)
   {
     set.insert(arr[i]);  
   } 
   int k=set.size();
   //Copying Set Elements Back to Array:
   int j=0;
   for(int iterateSort : set)
   {
       arr[j++]=iterateSort;
   }
   cout<<k<<endl;
   
   return k;

}
int main()
{
    int arr[]={1,1,2,2,2,3,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans=duplicateRemove(arr,n);
    for(int i=0;i<ans;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}

/*2 method o(n) tc
*/


#include<bits/stdc++.h>
using namespace std;
/*
Complexity Analysis

Time Complexity: O(N)

Space Complexity: O(1)
*/
int duplicateRemove(int arr[],int n)
{
   int i=0; 
for(int j=1;j<n;j++)
{
    if(arr[i]!=arr[j])
    {
        i++;
        
        arr[i]=arr[j];
    }
}
return i+1;
}
int main()
{
    int arr[]={1,1,2,2,2,3,3,4,4,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans=duplicateRemove(arr,n);
    for(int i=0;i<ans;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
