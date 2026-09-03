class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int l = 0;
        int r = nums1.size() - 1;

        while(r >= m){
            
                nums1[r] = nums2[l];
                l++;
                r--;
            
        }

        sort(nums1.begin(), nums1.end());
    }
};