class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int,int>freq;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            freq[nums[i]]++;
        }
        for(auto &num:freq)
        {
            if(num.second>=2)
            {
return true;
            }
        }
        return false;
    }
};
