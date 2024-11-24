#include <bits/stdc++.h>
using namespace std;

// Function to rearrange the array alternately with positive and negative numbers
vector<int> posingindex(vector<int>& arr, int n) {
    vector<int> ans(n, 0);
    int posindex = 0;
    int negindex = 1;

    for (int i = 0; i < n; i++) {
        if (arr[i] < 0 && negindex < n) {
            ans[negindex] = arr[i];
            negindex += 2;
        } else if (arr[i] >= 0 && posindex < n) {
            ans[posindex] = arr[i];
            posindex += 2;
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {1, 2, -4, -5};
    int n = arr.size();

    vector<int> ans = posingindex(arr, n);

    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }

    return 0;
}
