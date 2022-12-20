class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
         int size=arr.size();
    
    for(int i=1;i<size;i++)
        arr[i]+=arr[i-1];
    
    int sum=arr[size-1];
    
    for(int i=2;i<size;i+=2)
    {
        for(int j=i;j<size;j++)
        {
            if(j-i-1 < 0)
                sum+= arr[j];
            else
                sum+= (arr[j]-arr[j-i-1]) ;
        }
    }
    return sum;
}
};
