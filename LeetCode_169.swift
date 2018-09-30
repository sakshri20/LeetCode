// LeetCode #169
// Majority Element


// Extra space used

class Solution {
    func majorityElement(_ nums: [Int]) -> Int {
        
        var dictionary = [Int:Int]()
        
        for n in nums{
            if let val = dictionary[n]{
                dictionary[n] = val + 1
            }else{
                dictionary[n] = 1
            } 
        }
        
        for (key, value) in dictionary{
            if value > (nums.count/2){
                return key
            }
        }
        
        return 0
    }
}

// No extra space used

class Solution {
    func majorityElement(_ nums: [Int]) -> Int {
        guard nums.count > 0 else { return 0 }
        var candidate = nums[0]
        var times = 1
        var i = 1
        while i < nums.count {
            if times == 0 {
                candidate = nums[i]
                times = 1
                i += 1
                continue
            }
            if nums[i] == candidate {
                times += 1
            } else {
                times -= 1
            }
            i += 1
        }
        return candidate
    }
}