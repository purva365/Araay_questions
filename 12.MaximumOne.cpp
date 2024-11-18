#include <bits/stdc++.h>
using namespace std;
/*
Time Complexity: O(N) 
Space Complexity: O(1) 

*/
int consone(vector<int>& arr, int n) {
    int cnt = 0;
    int maxi = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] == 1) {
            cnt++;
        } else {
            cnt = 0;
        }
        maxi = max(cnt, maxi);
    }
    return maxi;
}

int main() {
    int n = 9;
    vector<int> arr = {1, 1, 0, 1, 0, 1, 1, 1, 1};
   
    int ans = consone(arr, n);
    cout << ans << endl;
    return 0;
}
