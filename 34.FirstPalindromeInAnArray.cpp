class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        int n=words.size();
        if (words.empty()) return "";
        for(int i=0;i<n;i++)
        {
            if(rev(words[i]))
            {
                return words[i];
            }
        }
        return "";
    }
    private:
   bool rev(const string& words)
    {
        int left=0;
        int right=words.size()-1;
        while(left<right)
        {
            if(words[left]!=words[right])
            {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};
