//  SODUKU SOLVER
// class Solution {
//     public:
    
//     bool isvalid(vector<vector<char>>& board,int row,int col,char num){
//         //puri row and puri col check krleti ki 1 toh 9 tk koi number hega ki nahi
//         for(int i=0;i<9;i++){
//             if(board[row][i] == num || board[i][col]==num) return false;
//         }
//         //ab yeh 3x3 matrix mein check krna hai pehele 3x3 matrix konsa hai usko check krne ke liye humein row col check krna hoga ki woh 3 ka multiple hai ki nahi kyunki yeh 9x9 matrix hai na 
//         //3 ka multiple ke liye modulo nikal lo bss
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
//         //row and col mein check kr rhe hai 1 se 9 numbers daal kr ki woh fir baith rha hai ki nahi
//         //iski complexity yhi hai ki agar ek jagah 1 se 9 mein se koi number nahi baith ska toh next col mein jana hoga usmein bhi 1 e 9 tak dekhna hoga
//         for(int row =0;row<9;row++){
//             for(int col=0;col<9;col++){
//                 //agar toh number hai age badho agar nahi hai toh
//                 if(board[row][col]=='.'){
//                     for(char num = '1';num<= '9';num++){
//                        // toh idhar check kro 
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
//             //function banaya hai
//             solve(board);
//         }
//     };