class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n1=word1.length(), n2=word2.length();
        string word3 = "";
        int n;
        if(n1>n2) n=n1;
        if(n2>n1) n=n2;
        for(int i=0; i<n; i++){
                if(n1 > i)word3+=word1[i];
                if(n2 > i)word3+=word2[i];
        }
        return word3;
    }
};