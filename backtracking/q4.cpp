//N-QUEENS
//TC->O(N!)

// class Solution {
//     public:
//         bool issafe(vector<string>& boards,int row , int col){
//                //check col
//                for(int i=row;i>=0;i--){
//                 if(boards[i][col]=='Q') return false;
//                }
//                //left diagonal
//                 for(int i=row,j=col;i>=0&&j>=0;--i,--j){
//                 if(boards[i][j]=='Q') return false;
//                }
//                //right diagonal
//                 for(int i=row,j=col;i>=0&&j<boards.size();--i,++j){
//                 if(boards[i][j]=='Q') return false;
//                }
//                return true;
//         }
//         void solve(vector<string>& boards,vector<vector<string>> &ans,int row){
//             //exit condition
//             if(row == boards.size()){
//                 ans.push_back(boards);
//                 return;
//             }
//            // har possible situation dekho jitni board ki length utni possibility baithane ki
//             for(int i=0;i<boards.size();i++){
//                 //check kro woh baith skti udhar
//                 if(issafe(boards,row,i)){
//                     //make descion
//                     boards[row][i] = 'Q';
//                     //agli row mein dekho baitha kar
//                     solve(boards,ans,row+1);
//                     //back-track
//                      boards[row][i] = '.';
//                 }
//             }
//         }
//         vector<vector<string>> solveNQueens(int n) {
//             vector<vector<string>>ans;
//             vector<string>boards(n,string(n,'.'));
//             solve(boards,ans,0);
//             return ans;
//         }
//     };