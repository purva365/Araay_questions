#include <bits/stdc++.h>
using namespace std;
/*
Time Compleixty : O( (m+n)log(m+n) ) .
Space Complexity : O(m+n) {If Space of Union ArrayList is considered} 

O(1) {If Space of union ArrayList is not considered}
*/

vector<int> unionfind(int arr1[], int arr2[], int n, int m) {
    map<int, int> freq;
    vector<int> Union;

    // Add elements of arr1 to the map
    for (int i = 0; i < n; i++) {
        freq[arr1[i]]++;
    }

    // Add elements of arr2 to the map
    for (int i = 0; i < m; i++) {
        freq[arr2[i]]++;
    }

    // Add unique keys to the Union vector
    for (auto &it : freq) {
        Union.push_back(it.first);
    }

    return Union;
}
/*
map<int>s;
vector<int>union;
for(int i=0;i<n;i++)
{
 s.insert(arr1[i]) ;  
}
for(int i=0;i<m;i++)
{
    s.insert(arr1[i]) ;  
}
for(auto &it:s)
{
    Union.push_back(it);
    return Union;
}
*/

int main() {
    int n = 10;
    int m = 6;
    int arr1[] = {4, 5, 6, 3, 2, 5, 7, 8, 9, 10};
    int arr2[] = {3, 10, 2, 5, 18, 20};

    vector<int> ans = unionfind(arr1, arr2, n, m);

    // Print the union of the arrays
    for (auto &it : ans) {
        cout << it << " ";
    }
    return 0;
}
