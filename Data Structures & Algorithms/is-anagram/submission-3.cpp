class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }
        map<char, int> cont;

        for(char c : s){
            cont[c]++;
        }

        for(char c : t){
            cont[c]--;

            if(cont[c] < 0){
                return false;
            }
        }
        return true;
    }
};
