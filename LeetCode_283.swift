// LeetCode #283
// Move Zeroes

class Solution {
    func moveZeroes(_ nums: inout [Int]) {
        var lastNonZeroFoundAt = 0
        
        for curr in 0..<nums.count{
            if nums[curr] != 0{
                nums.swapAt(lastNonZeroFoundAt, curr)
                lastNonZeroFoundAt += 1
            }
        }
        
    }
}