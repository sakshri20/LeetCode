// LeetCode # 118
// Pascal's Triangle


class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        vector<int> current;
        vector<int> last;

        if(numRows == 0){
            return result;
        }
        

        for(int i = 0; i < numRows; i++){
            
            int j = 0;
            
            while(j <= i){
                if(i == 0 || i == 1){
                    current.push_back(1);
                    
                }else{

                    if(j == 0 || j == i){
                        current.push_back(1);
                    	
                    }else{
                        int next = last[j-1] + last[j];
                        current.push_back(next);
                    }
                }

                j++;
            }

            result.push_back(current);

            last.clear();

            for (int l = 0; l < current.size(); ++l)
            	{
            		last.push_back(current[l]);
            	}

            current.clear();
            
        }
        
        return result;
    }
};