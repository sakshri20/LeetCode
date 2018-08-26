// LeetCode #747 
// Largest Number At Least Twice of Others



class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        
        int n = nums.size();
        map<int, int> initialMapping;
        
        for(int i = 0; i < n; i++){
            initialMapping.insert(pair <int, int> (nums[i], i));
        }
        
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                if(nums[i] > nums[j]){
                    int temp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp;
                }
            }
        }
        
        if(nums[n-1] >= (2*nums[n-2])){
            map<int, int>::iterator i = initialMapping.find(nums[n-1]);
            if(i != initialMapping.end()){
                return i->second;
            }
            
        }else{
            return -1;
        }
        
    }
};