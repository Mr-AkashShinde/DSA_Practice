class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> vb ;
        
        for(int i=0; i<candies.size(); i++){
            if(candies[i]+extraCandies >= *max_element(candies.begin(), candies.end())){
                vb.push_back(true);
            }
            if(candies[i]+extraCandies < *max_element(candies.begin(), candies.end())){
                vb.push_back(false);
            }
            
        }
        
        return vb;
    }
};