#include <bits/stdc++.h>
using namespace std;
/*
Complexity Analysis

Time Complexity: O(N) + O(X) + O(N-X) ~ O(2*N) N = total no. of elements,
X = no. of non-zero elements, and N-X = total no. of zeros.
Reason: O(N) for copying non-zero elements from the original to the temporary array. O(X) for again copying it back from the temporary to the original array. O(N-X) for filling zeros in the original array. So, the total time complexity will be O(2*N).

Space Complexity: O(N), as we are using a temporary array to solve this problem and the maximum size of the array can be N in the worst case.
Reason: The temporary array stores the non-zero elements. In the worst case, all the given array elements will be non-zero.
*/
vector<int> moveToZero(vector<int> &arr,int n)
{
    vector<int>temp;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            temp.push_back(arr[i]);
        }
    }
    int nz=temp.size();
    for(int i=0;i<nz;i++)
    {
        arr[i]=temp[i];
    }
    for(int i=nz;i<n;i++)
    {
        arr[i]=0;
    }
    return arr;
}
int main()
{
vector<int> arr={0,9,3,0,4,0,2,0,8,0,5,7,0};
int n=13;
vector<int>ans=moveToZero(arr,n);
for(int &it:ans)
{
    cout<<it<<" ";
    
}cout<<endl;

    return 0;
}
/*
   vector<int> temp1, temp2;

    // Separate non-zero and zero elements
    for (int num : nums) {
        if (num != 0)
            temp1.push_back(num);
        else
            temp2.push_back(num);
    }
*/
