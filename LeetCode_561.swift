// LeetCode #561
// Array Partition I

class Solution {
    func arrayPairSum(_ nums: [Int]) -> Int {
        
        var input: [Int] = nums
        
        if(input.count == 0){
            return 0
        }
        
        if(input.count == 1){
            return nums[0]
        }
        
        input.sort()
        var sum = 0
        var i = 0
        
        while i < input.count - 1{
            sum += input[i]
            i += 2
        }

        return sum
    }
}