class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n = nums.size();
        bool iord = true;  
        bool dord = true;  

        for (int i = 1; i < n; i++) {  
            if (nums[i] < nums[i - 1]) {
                dord = false;  
            }
            if (nums[i] > nums[i - 1]) {
                iord = false;
            }
        }
        return dord || iord; 
    }
};
