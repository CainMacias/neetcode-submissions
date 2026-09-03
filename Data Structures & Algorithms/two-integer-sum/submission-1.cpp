class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> n;

        for(int i = 0; i < nums.size(); i++){
            int falta = target - nums[i];

            if(n.count(falta)){
                return {n[falta], i};
            }

            n[nums[i]] = i;
        }

    }
};