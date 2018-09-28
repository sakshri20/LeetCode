// LeetCode #832
// Flipping an Image

class Solution {
    func flipAndInvertImage(_ A: [[Int]]) -> [[Int]] {
        
        var result: [[Int]] = []
        
        if A.count == 0 {
            return result
        }
        
        
        for row in A{
            var rowArray: [Int] = row
            var i = 0
            var j = rowArray.count-1
            
            while i<j {
                
                var temp = rowArray[i]
                rowArray[i] = rowArray[j]
                rowArray[j] = temp
                
                i += 1
                j -= 1
                
            }
            
            for i in 0..<rowArray.count{
                if(rowArray[i] == 0){
                    rowArray[i] = 1
                }else{
                    rowArray[i] = 0
                }
            }
            
            result.append(rowArray)
        }
        
        return result
    }
}