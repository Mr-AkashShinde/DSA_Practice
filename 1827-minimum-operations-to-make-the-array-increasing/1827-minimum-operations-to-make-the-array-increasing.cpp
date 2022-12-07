class Solution {
public:
    int minOperations(vector<int>& nums) {
        int i;
        int temp=0;
        int ans=0;
        for(i=1; i<nums.size(); i++){
            temp=0;
            if(nums[i]<=nums[i-1]){
                temp = nums[i-1]-nums[i]+1;
                nums[i]+=temp;
                ans+=temp;
            }
        }
        return ans;
    }
};