class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()){
            return 0;
        }
        sort(nums.begin(), nums.end());
        int cont = 1;
        int may = 1;

        for(int i = 0; i < (int)nums.size() - 1; i++){
            if(nums[i + 1] - nums[i] == 1){
                cont++;
            }else if(nums[i + 1] == nums[i]){
                continue;
            }else{
                if(cont > may){
                    may = cont; 

                }
                cont = 1;
            }
        }

         if(cont > may){
            may = cont; 
        }
       

        return may;
    }
};
