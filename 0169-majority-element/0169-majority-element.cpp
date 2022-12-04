class Solution {
public:
    int majorityElement(vector<int>& nums) {
//         unordered_map<int, int> counter;
        
//         for(int num: nums){
//             if(++counter[num] > nums.size()/2){
//                 return num;
//             }
//         }
//         return 0;
        int count=0;
        int max;
        int n=nums.size();
        for(int i=0; i<n; i++){
            if(count==0){
                max=nums[i];
                count=1;
                continue;
            }
            if(max!=nums[i]){
                count--;
            }
            else{
                count++;
            }
        }
        return max;
    }
};