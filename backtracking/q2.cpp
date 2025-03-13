//palindrome partioning

// class Solution {
//     public:
//      bool isPalindrome(string& s, int l, int r) {
//             while (l < r) {
//                 if (s[l++] != s[r--]) {
//                     return false;
//                 }
//             }
//             return true;
//         }
//         void partioning(string& s,int start, vector<string>& path, vector<vector<string>>& result){
//             int n = s.length();
//             if(start==n){
//                 pars.push_back(path);
//             }
//             else{
//                 for(int i=start;i<n;i++){
//                     if(isPalindrome(s,start,i)){
//                         path.push_back(s.substr(start,i-start+1));
//                         partioning(s,i+1,path,result);
//                         path.pop_back();
//                     }
//                 }
//             }
//         }
//         vector<vector<string>> partition(string s) {
//              vector<vector<string>> result;
//              vector<string> path;
//              partioning(s,0,path,result);
//              return pars;
//         }
//     };