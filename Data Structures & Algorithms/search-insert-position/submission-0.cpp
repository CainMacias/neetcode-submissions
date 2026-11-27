class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() - 1;

        while(l <= r){
            int mitad = l + (r - l) / 2;

            if(target == nums[mitad]){
                return mitad;
            }

            if(target < nums[mitad]){
                r = mitad - 1;
            }else{
                l = mitad + 1;
            }
        }

        return l;

    }
};