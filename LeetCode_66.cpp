// LeetCode #66
// Plus One


class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        int n = digits.size();
        vector<int> result;
        int carryOn = 1;
        
        for(int i = n-1; i >= 0; i--){
            digits[i] += carryOn;
            if(digits[i] > 9){
                result.push_back(0);
                carryOn = 1;
            }else{
               result.push_back(digits[i]);
                carryOn = 0; 
            } 
        }
        if(carryOn == 1){
            result.push_back(carryOn);
        }
        
        reverse(result.begin(), result.end());
      
        return result;
    }   
};