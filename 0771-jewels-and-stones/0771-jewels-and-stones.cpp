class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int ans=0;
        map<char, int> count;
        for(int i=0; i<stones.size(); i++){
            count[stones[i]]++;
        }
        for(int i=0; i<jewels.size(); i++){
            ans+= count[jewels[i]];
        }    
        return ans;
    }
};