class Solution {
public:
    bool isPalindrome(string s){
        string temp=s;
        reverse(s.begin(), s.end());
        if(temp==s)return true;
        return false;
    }
    string firstPalindrome(vector<string>& words) {
        for(int i=0; i<words.size(); i++){
            if(isPalindrome(words[i]))return words[i];
        }
        return "";
        
    }
};