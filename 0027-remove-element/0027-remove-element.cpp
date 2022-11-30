class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int counter=0;
        int n=nums.size();
        for(int i=0; i<n; i++){
            if(nums[i]!=val){
                nums[counter++]=nums[i];
            }
        }
        
        return counter;
    }
};