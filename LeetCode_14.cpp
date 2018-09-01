// LeetCode #14
// Longest Common Prefix


class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        string result = "";
        
        if(strs.size() == 0){
            return "";
        }
        if(strs.size() == 1){
            return strs[0];
        }
        
        int smallesIndex = 0; int smallestLen = strs[0].length();
        
        for(int i = 1; i < strs.size(); i++){
            if(strs[i].length() < smallestLen){
                smallestLen = strs[i].length();
                smallesIndex = i;
            }
        }
        
        string smallestStr = strs[smallesIndex];

        for(int i = 0; i < smallestLen; i++){
            bool isPresent = false;
            for(int j = 0; j < strs.size(); j++){
                if(j != smallesIndex){
                    string current = strs[j];
                    if(smallestStr[i] == current[i]){
                        isPresent = true;
                    }else{
                        isPresent = false;
                        break;
                    }
                }
            }
            if(isPresent == true){
                result += smallestStr[i];
            }else{
                break;
            }
        }
        
        return result;
    }
};