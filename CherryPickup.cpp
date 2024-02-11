//Need to revisit this code 
class Solution {
public:
    int RoboMovement(vector<vector<int>>& grid, int i, int j1, int j2, int row, int col){

        if(j1<0 || j2<0 || j1>=col || j2>=col) return -1e8;
        if(i == row-1) {
            if(j1==j2) return grid[i][j1];
            else return grid[i][j1] + grid[i][j2];
        }

        int maximum = -1e8, ans = 0;

        for(int delj1= -1; delj1 <=1 ; delj1++){
            for(int delj2 = -1; delj2 <= 1; delj2++){
               if(j1==j2) ans = grid[i][j1];
               else ans = grid[i][j1] + grid[i][j2];
               ans += RoboMovement(grid, i+1, j1+delj1, j2+delj2, row, col);
               maximum = max(maximum, ans);
            }
        }

        return maximum;

    }
    int cherryPickup(vector<vector<int>>& grid) {
        int row = grid.size();
        if(!row)return 0;
        int col  = grid[0].size(); //cols

        return RoboMovement(grid,0,0,col-1,row,col);

    }
};


























