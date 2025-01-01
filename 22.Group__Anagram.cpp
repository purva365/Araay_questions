#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> ans;
        
        // Grouping anagrams by their sorted key
        for (string& s : strs) {
            string key = s;
            sort(key.begin(), key.end()); // Corrected key.end() usage
            ans[key].push_back(s);
        }
        
        // Collecting grouped anagrams into the result vector
        vector<vector<string>> result;
        for (auto& entry : ans) { // Fixed variable typo from `entr` to `entry`
            result.push_back(entry.second);
        }
        
        return result;
    }
};
