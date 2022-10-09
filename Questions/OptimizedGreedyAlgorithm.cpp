class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size(), c = matrix[0].size( ) - 1, r = 0;
        while(r <  row && c >= 0){
            if(matrix[r][c] == target){
                return true;
            }
            else if(target > matrix[r][c]){
                r++;
            }
            else{
                 c--;
            }
        }
    return false;
    }
};
