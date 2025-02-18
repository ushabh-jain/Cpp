//count nice sub arrays

// class Solution {
//     public:
//         int numberOfSubarrays(vector<int>& nums, int k) {
//              int oddcount=0;
//              int ans =0;
//              unordered_map<int,int>mp;
//              mp[0]=1;
//              for(int i=0;i<nums.size();i++){
//                 oddcount += (nums[i]%2);
//                 if(mp.count(oddcount - k)){
//                     ans += mp[oddcount-k];
    
//                 }
//                 mp[oddcount]++;
//              }
//              return ans;
    
//         }
//     };