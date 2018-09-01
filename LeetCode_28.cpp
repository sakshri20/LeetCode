// LeetCode #28
// Implement strStr()

class Solution {
public:
    int strStr(string haystack, string needle) {
        int resultIndex;
        
        if(needle.length() == 0 && haystack.length() == 0){
            return 0;
        }
        
        if(needle.length() > haystack.length()){
            return -1;
        }
        
        int n = needle.length();
        if(n == 0){
            return 0;
        }
        
        for(int i = 0; i <= haystack.length()-n; i++){
            string subString = haystack.substr(i,n);
            if(subString == needle){
                resultIndex = i;
                break;
            }else{
                resultIndex = -1;
            }
        }
        
        return resultIndex;
    }
};