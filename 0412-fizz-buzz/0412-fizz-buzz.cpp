class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ans;
        
        for(int i=1; i<=n; i++){
            bool divisibleBy3 = i%3==0;
            bool divisibleBy5 = i%5==0;
            
            if(divisibleBy3 && divisibleBy5){
                ans.push_back("FizzBuzz");
            }
            else if(divisibleBy3){
                ans.push_back("Fizz");
            }
            else if(divisibleBy5){
                ans.push_back("Buzz");
            }
            else{
                ans.push_back(to_string(i));
            }
        }
//          for(int i=1; i<=n; i++){
//             // bool divisibleBy3 = i%3==0;
//             // bool divisibleBy5 = i%5==0;
            
//             if(i%3==0 && i%5==0){
//                 ans.push_back("Fizzbuzz");
//             }
//             else if(i%3==0){
//                 ans.push_back("Fizz");
//             }
//             else if(i%5==0){
//                 ans.push_back("Buzz");
//             }
//             else{
//                 ans.push_back(to_string(i));
//             }
//         }
        return ans;
    }
};