class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int i;
        
        sort(nums.begin(), nums.end());
        for(i=1; i<nums.size(); i+=2){
            if(nums[i]!=nums[i-1]){
                return nums[i-1];
            }
        }
        return nums[nums.size()-1];
    }
};