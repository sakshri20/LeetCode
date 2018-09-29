//LeetCode #566
// Reshape the Matrix


// Not extra space

class Solution {
    func matrixReshape(_ nums: [[Int]], _ r: Int, _ c: Int) -> [[Int]] {
        
        var result = Array(repeating: Array(repeating: 0, count: c), count: r)
        
        if (nums.count * nums[0].count) != (r * c){
            return nums
        }
        
        var row = 0, col = 0
        
        for i in 0..<nums.count{
            for j in 0..<nums[0].count{
                result[row][col] = nums[i][j]
                col += 1
                
                if(col == c){
                    row += 1
                    col = 0
                }
            }
        }        
        
        return result
    }
}

// r*c space complexity

class Solution {
    func matrixReshape(_ nums: [[Int]], _ r: Int, _ c: Int) -> [[Int]] {
        
        var result = Array(repeating: Array(repeating: 0, count: c), count: r)
        
        if (nums.count * nums[0].count) != (r * c){
            return nums
        }
        
        var tempArray: [Int] = []
        var index = 0
        
        for i in 0..<nums.count{
            for j in 0..<nums[0].count{
                tempArray.append(nums[i][j])
                index += 1
            }
        }
        
        
        index = 0
        
        for i in 0..<r{
            for j in 0..<c{
                result[i][j] = tempArray[index]
                index += 1
            }
        }
        
        return result
    }
}