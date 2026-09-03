class Solution {
public:
    void reverseString(vector<char>& s) {
        int l = 0;
        int r = s.size() -1;
        char n;

        while(l < r){
            char n = s[r];
            s[r] = s[l];
            s[l] = n;

            l++;
            r--;
        }
    }
};