//subarray sum equals to k
// class Solution {
//     public:
//         int subarraySum(vector<int>& nums, int k) {
//             int sum = 0;
//             int count = 0;
//             unordered_map<int,int>mp;
//             mp[0]=1;
//             for(int i=0;i<nums.size();i++){
//                 sum += nums[i];
//                 if(mp.find(sum-k) != mp.end()){
//                     count += mp[sum-k];
//                 }
//                 mp[sum]++;
//             }
//             return count;
//         }
//     };


// #include <bits/stdc++.h>
// using namespace std;

// int subarraysum(vector<int>nums,int k){
//     int sum=0;
//     int count=0;
//     unordered_map<int,int>mp;
//     //if the sum equalts to k itself
//     mp[0]=1;
//     for(int i=0;i<nums.size();i++){
//         //prefix sum
//         sum += nums[i];
         
//         // Check if (sum - k) exists in the map
//         if(mp.find(sum-k)!=mp.end()){
//             count += mp[sum-k];
//         }
//         //updates the count of preix sum 
//         mp[sum]++;
//     }
//     return count;
    
// }

// int main() {
    
//     int n,k;
//     cin>>n>>k;
//     vector<int>nums(n);
//     for(int i=0;i<n;i++){
//         cin>>nums[i];
//     }
    
//     cout<<subarraysum(nums,k)<<endl;

//     return 0;
// }