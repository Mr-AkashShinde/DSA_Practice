class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        // int n= sizeof(nums) / sizeof(nums[0]);
        // sort(nums, nums+n);
        sort(begin(nums), end(nums));
        int target=0;
        int x= nums.size();
        int a=0;
        int b=0;
        for(int i=0; i<x; i++){
            a = (nums[0]*nums[1]);
            b = (nums[x-1]*nums[x-2]);
        }
        target =  b- a;
        return target;
    }
};