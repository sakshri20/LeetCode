// LeetCode #867
// Transpose Matrix

class Solution {
    func transpose(_ A: [[Int]]) -> [[Int]] {
        
        var rows = A.count
        var cols = A[0].count
        
        var result = Array(repeating: Array(repeating: 0, count: rows), count: cols)
 
        for i in 0..<rows{
            for j in 0..<cols{
                result[j][i] = A[i][j]
            }
        }
        
        return result
    }
}