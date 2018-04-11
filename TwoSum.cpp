class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        map<int, int> mapSumTwo;
        for(int i = 0; i < nums.size(); i++){
            int temp = nums[i];
            int complement = target - temp;
            map<int, int>::iterator  it;
            it = mapSumTwo.find(complement);
            if(it != mapSumTwo.end()){
                vector<int> result;
                result.push_back(it->second);
                result.push_back(i);
                return result;
            }
            mapSumTwo.insert(std::pair<int, int>(temp,i));
        }
        
    }
};
