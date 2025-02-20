//generate parenthesis

//T.C : O(2^n)
//S.C : O(2*n) -> Removing constant -> O(n) -> recursion stack space - Max depth of recusion tree

// class Solution {
//     public:
//     vector<string>result;
       
//         void solve(string& curr,int n,int open ,int close){
//             if(curr.length()==2*n){
              
//                     result.push_back(curr);
               
//                 return;
//             }
    
//             if(open<n){
//             curr.push_back('(');
//             solve(curr,n,open+1,close);
//             curr.pop_back();
//             }
    
//             if(close<open){
//             curr.push_back(')');
//             solve(curr,n,open,close+1);
//             curr.pop_back();
//             }
    
//         }
//         vector<string> generateParenthesis(int n) {
//             string curr = "";
//             solve(curr,n,0,0);
//             return result;
//         }
//     };