class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int counter = 0;
        sort(nums.begin(), nums.end());
        // std::vector<int> ans;
        for(int i=0; i<nums.size(); i++){
            if(val != nums[i]){
                nums[counter++] = nums[i];
            }
        }
        return counter;
    }
};