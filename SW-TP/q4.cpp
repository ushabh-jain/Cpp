//longest substring after replacing character for k times 
//tc->O(N)

// class Solution {
//     public:
//         int characterReplacement(string s, int k) {
//             int l=0;
//             int maxi=0;
//             int ans=0;
//             unordered_map<char,int>mp;
//             for(int r=0;r<s.size();r++){
//                 mp[s[r]]++;
//                 maxi = max(maxi,mp[s[r]]);
//                 if((r-l+1)-maxi>k){//this checks how many charactes need to be change 
//                     mp[s[l]]--;
//                     l++;
//                 }
//                 ans = max(ans,r-l+1);
//             }
//             return ans;
//         }
//     };