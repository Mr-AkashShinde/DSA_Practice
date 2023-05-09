class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        
        unordered_map<string, vector<string>>mymap;
        string temp;
        for(auto i: strs){
            temp = i;
            sort(temp.begin(), temp.end());
            mymap[temp].push_back(i);
        }
        for(auto i=mymap.begin(); i!=mymap.end(); i++){
            ans.push_back(i->second);
        }
        return ans;
    }
};