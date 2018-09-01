// LeetCode #344
// Reverse String


class Solution {
public:
    string reverseString(string s) {

        if(s.length() == 0){
            return "";
        }

        int i = 0; int j = s.length()-1;
        string left = ""; string right = "";
        
        while(i < j){
            
            if(!(s[i] == s[j])){
                char temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
            
            i++;
            j--;
        }
        
        return s;
    }
};