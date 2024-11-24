#include <bits/stdc++.h>
using namespace std;

vector<int> Leaders(vector<int>& arr, int n) {
    int maxi = INT_MIN;
    vector<int> ans;

    // Traverse the array from the end
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] >= maxi) {
            ans.push_back(arr[i]);
            maxi = arr[i];
        }
    }

    // Reverse the ans vector to maintain order of appearance
    reverse(ans.begin(), ans.end());
    return ans;
}

int main() {
    vector<int> arr = {10, 22, 12, 3, 0, 6};
    int n = arr.size();

    vector<int> ans = Leaders(arr, n);

    // Print leaders
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

    return 0;
}
