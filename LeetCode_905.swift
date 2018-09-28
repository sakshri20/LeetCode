// LeetCode #905
// Sort array By Parity

class Solution {
    func sortArrayByParity(_ A: [Int]) -> [Int] {
        
        var resultArray: [Int] = []
        var OddNumArray: [Int] = []
        
        if A.count == 0{
            return resultArray
        }
        
        if A.count == 1{
            return A
        }
        
        for num in A{
            if(num%2 == 0){
                resultArray.append(num)
            }else{
                OddNumArray.append(num)
            }
        }
        
        if OddNumArray.count > 0{
            for num in OddNumArray{
                resultArray.append(num)
            }
        }
        
        return resultArray
    }
}