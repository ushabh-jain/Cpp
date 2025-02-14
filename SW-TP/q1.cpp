//to find the len of a window always remeber it is j-i+1;
//longet substring without repeating characters

// class Solution {
//     public:
//         int lengthOfLongestSubstring(string s) {
//             unordered_map<char,int>mp;
//             int maxi = 0;
//             int l = 0;
//             for(int r=0;r<s.length();r++){
//                  if(mp.find(s[r])!=mp.end() && mp[s[r]]>=l){
//                     l = mp[s[r]]+1;
//                  }
//                  mp[s[r]] = r; //updates the map
//                  maxi = max(maxi,r-l+1);
//             }
//             return maxi;
//         }
//     };