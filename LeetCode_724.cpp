// LeetCode #724
// Find Pivot Index


class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int n = nums.size();
        int s, leftSum = 0;
        int result = -1;
        
        for(int i = 0; i < n; i++){
            s += nums[i];
        }
        
        for(int j = 1; j < n; j++){
            leftSum += nums[j-1];
            if(leftSum == (s - (leftSum) - (nums[j]))){
                result = j;
            }
        }
        return result;
    }
};