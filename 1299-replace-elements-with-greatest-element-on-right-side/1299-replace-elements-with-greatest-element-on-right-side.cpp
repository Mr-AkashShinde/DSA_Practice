class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
    //     int mx = -1;
    //     for(int i=arr.size()-1; i>=0; i--){
    //         int temp= max(mx, arr[i]);
    //         arr[i]= mx;
    //         mx = temp;
    //     }
    //     return arr;
    // }
        int n= arr.size();
        int maxSoFar = arr[n-1];
        arr[n-1] = -1;
        
        for(int i= n-2; i>=0; i--){
            int temp = maxSoFar;
            if(maxSoFar < arr[i]){
                maxSoFar = arr[i];
            }
            arr[i] = temp;
        }
        return arr;
    }
};