class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int employees =0;
        for(int i=0; i<hours.size(); i++){
            if(hours[i] >= target){
                employees += 1;
            }
        }
        return employees;
    }
};