class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string s;

        int n = word1.length() + word2.length();

        int l= 0;
        int r= 0;

        while(l < word1.length() || r < word2.length()){
            if(l < word1.length()){
                s += word1[l]; 
                l++;
            }
            if(r < word2.length()){
                s += word2[r]; 
                r++;           
            }
        }

        return s;
    }
};