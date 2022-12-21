class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        unordered_map<int, int> mp1;
        unordered_map<int, int> mp2;
        unordered_map<int, int> mp3;
        
        vector<int> res;
        
        for(int n: nums1) mp1[n]++;
        for(int n: nums2) mp2[n]++;
        for(int n: nums3) mp3[n]++;
        
        for(int i=0; i<nums1.size(); i++){
            if(mp2.find(nums1[i]) != mp2.end()){
                mp1.erase(nums1[i]);
                mp2.erase(nums1[i]);
                res.push_back(nums1[i]);
            }
        }
        
        for(int i=0; i<nums3.size(); i++){
            if(mp1.find(nums3[i]) != mp1.end()){
                res.push_back(nums3[i]);
                mp1.erase(nums3[i]);
            }
            if(mp2.find(nums3[i]) != mp2.end()){
                res.push_back(nums3[i]);
                mp2.erase(nums3[i]);
            }
        }
        return res;
    }
};