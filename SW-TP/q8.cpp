// number of substrings which contains a,b,c

// class Solution {
//     public:
//         int numberOfSubstrings(string s) {
//             int n = s.length();
//             int count = 0;
//             int l=0;
//             int r=0;
//             map<char,int>mp;
//             while(r<n){
//                 mp[s[r]]++;
//                 while(mp.size()==3){
//                     count += n-r;
//                     mp[s[l]]--;
//                     if(mp[s[l]]==0) mp.erase(s[l]);
//                     l++;
//                 }
//                 r++;
//             }
//             return count;
    
//         }
//     };