//binary subarray sum equal goal same as subarray su equal to k



//APPRAOCH 1 USING PREFIX SUM HUMNE PEHLE CUMMULATIVE SUM NIKALA FIR EK POINTER LIYA USKO ++ KRTE GYE MAP MEIN STORE KRTE GYE AND USKA SUM - GOAL JO HAI AGAR MAP MEIN DEKHA UTNA COUNT ADD KRDO
// class Solution {
//     public:
//         int numSubarraysWithSum(vector<int>& nums, int goal) {
           
//             int sum=0;
//             int count=0;
//             unordered_map<int,int>mp;
//             mp[0]=1;
//             for(int i=0;i<nums.size();i++){
//                 sum += nums[i];
//                 if(mp.find(sum-goal) != mp.end()){
//                     count += mp[sum-goal];
//                 }
//                 mp[sum]++;
    
    
//             }
//             return count;
//         }
//     };