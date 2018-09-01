// LeetCode #67
// Add Binary


class Solution {
public:
    string addBinary(string a, string b) {
        
        string result = ""; 
        string num1, num2;
        
        if(a.length() >= b.length()){
            num1 = a;
            num2 = b;
        }else{
            num1 = b;
            num2 = a;
        }

        int i = num1.length()-1; int j = num2.length()-1; char carryOver = '0';
        
        for(; j >= 0; --i, --j){

            if(num1[i] == '1' && num2[j] == '1' && carryOver == '1'){result += '1'; carryOver = '1'; }
            if(num1[i] == '0' && num2[j] == '0' && carryOver == '0'){result += '0'; carryOver = '0'; }
            if(num1[i] == '1' && num2[j] == '0' && carryOver == '0'){result += '1'; carryOver = '0'; }
            if(num1[i] == '0' && num2[j] == '1' && carryOver == '0'){result += '1'; carryOver = '0'; }
            if(num1[i] == '0' && num2[j] == '0' && carryOver == '1'){result += '1'; carryOver = '0'; }
            if(num1[i] == '1' && num2[j] == '0' && carryOver == '1'){result += '0'; carryOver = '1'; }
            if(num1[i] == '0' && num2[j] == '1' && carryOver == '1'){result += '0'; carryOver = '1'; }
            if(num1[i] == '1' && num2[j] == '1' && carryOver == '0'){result += '0'; carryOver = '1'; }
        }
        
        
       if(i >= 0){
           for(; i >= 0; --i){
               if(num1[i] == '0' && carryOver == '0'){result += '0'; carryOver = '0';}
               if(num1[i] == '1' && carryOver == '0'){result += '1'; carryOver = '0';}
               if(num1[i] == '0' && carryOver == '1'){result += '1'; carryOver = '0';}
               if(num1[i] == '1' && carryOver == '1'){result += '0'; carryOver = '1';}
           }
       }
        
        if(carryOver == '1'){
            result += '1';
        }

        string s = "";
        for(int k = result.length()-1; k >= 0; --k){
            s += result[k];
        }
        return s;
    }
};