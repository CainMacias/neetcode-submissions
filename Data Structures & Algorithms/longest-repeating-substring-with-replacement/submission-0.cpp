class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> count;
        int res = 0;

        int l = 0;
        for (int r = 0; r < s.size(); r++) {
            count[s[r]]++;

            
            int maxf = 0;
            for (auto& p : count) {
                maxf = max(maxf, p.second);
            }

          
            while ((r - l + 1) - maxf > k) {
                count[s[l]]--;
                l++;

              
                maxf = 0;
                for (auto& p : count) {
                    maxf = max(maxf, p.second);
                }
            }

            res = max(res, r - l + 1);
        }
        return res;
    }
};
