// LeetCode #485
// Max Consecutive Ones

class Solution {
    func findMaxConsecutiveOnes(_ nums: [Int]) -> Int {
        
        var greatest = 0, count = 0
        
        if nums.count == 1 && nums[0] == 1{
            return 1
        }else if nums.count == 1 && nums[0] == 0{
            return 0
        }
        
        for n in nums{
            if n == 1 {
                count += 1
            }else{
                if count >= greatest{
                    greatest = count
                    print(greatest)
                }
                count = 0
            }
        }
        
        return max(greatest, count)
    }
}