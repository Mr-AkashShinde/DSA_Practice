class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n= nums.size();
        int i;
        int count=0;
        vector<int>add;
        for(i=0; i<n; i++){
            count=0;
            for(int j=0; j<n; j++){
                if(nums[i]>nums[j]){
                    count++;
                }
                
            }
            add.push_back(count);
        }
        return add;
    }
};