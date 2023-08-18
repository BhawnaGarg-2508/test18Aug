class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        

        int count = 0;
        int rows = 0;
        int rowe = size(matrix) -1;
        int cols = 0;
        int cole = size(matrix[0])-1;

        vector <int> ans;

        while(count < size(matrix)* size(matrix[0])){
            for(int i = cols; i<= cole; i++){
                ans.push_back(matrix[rows][i]);
                count++;
            }

            rows++;

            if(count < size(matrix)* size(matrix[0])){
                for(int i = rows; i<= rowe; i++ ){
                    ans.push_back(matrix[i][cole]);
                    count++;
                }
            }
            

            cole--;

            if(count < size(matrix)* size(matrix[0])){
                for(int i = cole; i>= cols; i-- ){
                    ans.push_back(matrix[rowe][i]);
                    count++;
            }

            }
            

            rowe--;

            if(count < size(matrix)* size(matrix[0])){
                for(int i = rowe; i>= rows; i--){
                    ans.push_back(matrix[i][cols]);
                    count++;
            }

            }
            
            cols++;
        }

        return ans;
    }
};
