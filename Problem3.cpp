class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int result = 0;
        int i = 0;
        vector<int> last(256, -1);
        for(int j = 0;j<n;j++){
            i = max(i, last[s[j]]+1);
            
            result = max(result, j-i+1);
            last[s[j]] = j;
        }
        return result;
    }
};
