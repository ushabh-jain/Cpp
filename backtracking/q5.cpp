 //SODUKU SOLVER
// class Solution {
//     public:
    
//     bool isvalid(vector<vector<char>>& board,int row,int col,char num){
//         for(int i=0;i<9;i++){
//             if(board[row][i] == num || board[i][col]==num) return false;
//         }
//         int sr = (row/3) * 3;
//         int sc = (col/3) * 3;
//         for(int i=sr;i<sr+3;i++){
//             for(int j=sc;j<sc+3;j++){
//                 if(board[i][j]==num) return false;
//             }
//         }
//         return true;
//     }
    
    
    
//     bool solve(vector<vector<char>>& board){
//         for(int row =0;row<9;row++){
//             for(int col=0;col<9;col++){
//                 if(board[row][col]=='.'){
//                     for(char num = '1';num<= '9';num++){
//                         if(isvalid(board,row,col,num)){
//                             board[row][col]=num;
//                             if(solve(board)) return true;
//                             board[row][col]='.';
//                         }
//                     }
//                     return false;
//                 }
//             }
//         }
//         return true;
//     }
        
//         void solveSudoku(vector<vector<char>>& board) {
//             solve(board);
//         }
//     };