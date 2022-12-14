class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxWords = 0;
        // vector<string>sen1;
        for(int i=0; i<sentences.size(); i++){
            int words=0;
            const string&sentence = sentences[i];
            
            for(int i=0; i<sentence.length(); i++){
                if(sentence[i]==' '){
                    ++words;
                }
            }
            ++words;
            maxWords=max(words, maxWords);
        }
        return maxWords;
    }
};