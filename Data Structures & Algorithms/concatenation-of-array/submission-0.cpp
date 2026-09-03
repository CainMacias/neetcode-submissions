class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        int x = 0;

        for(int i=0; i < nums.size() * 2; i++){
            if(i < nums.size()){
                ans.push_back(nums[i]);
            }else{
                ans.push_back(nums[x]);
                x++;
            }
            
        }

        return ans;
    }
};