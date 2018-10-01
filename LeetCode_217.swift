// LeetCode #217
// Contains Duplicate


// Extra space used

class Solution {
    func containsDuplicate(_ nums: [Int]) -> Bool {
        
        var dict = [Int:Int]()
        
        if nums.count == 0 || nums.count == 1{
            return false
        }
        
        for n in nums{
            if let val = dict[n]{
                dict[n] = val + 1
            }else{
                dict[n] = 1
            }
        }
        
        for (key, value) in dict{
            if value > 1{
                return true
            }
        }
        
        return false
    }
}

// No extra space used. Not a very good solution.

class Solution {
    func containsDuplicate(_ nums: [Int]) -> Bool {
        
        if nums.count == 0 || nums.count == 1{
            return false
        }
        
        var tempArray = nums
        tempArray.sort()
        
        var current = tempArray[0]
        var times = 1
        var i = 1
        
        while i < tempArray.count{
            if tempArray[i] == current{
                times += 1
                if times > 1{
                    return true
                }
            }else{
                current = tempArray[i]
                times = 1
            }
            
            i += 1
        }
        
        
        if times > 1{
            return true
        }else{
            return false
        }
        
    }
}