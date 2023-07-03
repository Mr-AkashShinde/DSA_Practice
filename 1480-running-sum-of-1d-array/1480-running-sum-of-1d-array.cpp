class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans;
        int count =0;
        
        for(int i=0; i<nums.size(); i++){
            count+= nums[i];
            ans.push_back(count);
        }
        
        return ans;
    }
};