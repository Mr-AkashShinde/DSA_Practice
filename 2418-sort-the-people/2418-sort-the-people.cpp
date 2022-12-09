class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int temp=0;
        string temp1;
        for(int i=0; i<heights.size(); i++){
          for(int j=0;j<heights.size();j++){
              if(heights[i]>heights[j]){
                 // swap(heights[i],heights[j]); 
                 // swap(names[i],names[j]);
                  temp=heights[i];
                  heights[i]=heights[j];
                  heights[j]=temp;
                  
                  temp1=names[i];
                  names[i]=names[j];
                  names[j]=temp1;
              }
          }
        }
        cout<<heights[0];
        return names;
    }
};