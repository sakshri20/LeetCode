// LeetCode #888
// Fair Candy Swap

class Solution {
    func fairCandySwap(_ A: [Int], _ B: [Int]) -> [Int] {

        var result: [Int] = []
        var dict =  [Int:Int]()
        
        var aSum = A.reduce(0, +)
        var bSum = B.reduce(0, +)

        for n in B{
            dict[n] = 1
        }
        
        var delta = (bSum - aSum)/2
        
        for n in A{
            if let val = dict[n+delta]{
                result.append(n)
                result.append(n+delta)
                return result
            }
        }
        
        return result
    }
}