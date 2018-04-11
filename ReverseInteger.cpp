class Solution {
public:
    int reverse(int x) {
        int temp, reverseInt = 0;
        while(x != 0){
             if(reverseInt > INT_MAX/10 || reverseInt < INT_MIN/10){
            return 0;
            }
            temp = x%10;
            reverseInt = reverseInt * 10 + temp;
            x = x/10;
        }
       
            return reverseInt;

            
    }
};
