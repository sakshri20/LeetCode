// LeetCode #448
// Find All numbers Disappeared in an Array

class Solution {
    func findDisappearedNumbers(_ nums: [Int]) -> [Int] {
        
        var input = nums
        var result: [Int] = []
        
        for i in 0..<input.count{
            var check = -1
            
            if input[i] > 0{
                check = input[i] - 1
            }else{
                check = (input[i] * (-1)) - 1
            }
            
            if input[check] > 0{
                input[check] = (input[check] * (-1))
            }
            
        }
        
        for i in 0..<input.count{
            if input[i] > 0 {
                result.append(i+1)
            }
        }
        
        return result
    }
}