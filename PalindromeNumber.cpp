class Solution {
public:
    bool isPalindrome(int x) {
        int temp, reverse = 0, initial = x;
        while(x!=0){
             if(reverse > INT_MAX/10 || reverse < INT_MIN/10){
            return false;
            }
            temp = x%10;
            reverse = reverse*10 + temp;
            x = x/10;
        }
        cout << reverse << endl;
        if(initial == reverse && initial>=0){
            return true;
        }else{
            return false;
        }
    }
};
