class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() - 1;

        while(l <= r){
            int mitad = l + (r - l) /2;

            if(nums[mitad] == target){
                return mitad;
            }

            if(nums[mitad] < target){
                l = mitad + 1;
            }else{
                r = mitad - 1;
            }
        }


        return -1;
    }
};
