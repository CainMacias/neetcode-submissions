class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> n;
        
        for(int c : nums){
            n[c]++;
        }

        for(auto x : nums){
            if(n[x] > nums.size()/2){
                return x;
            }
        }

        return 0;
    }
};