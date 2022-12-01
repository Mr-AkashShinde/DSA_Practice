class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int>sum;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==target){
                sum.push_back(i);
            }
            if(nums[i]>target){
                break;
            }
        }
        return sum;
    }
};