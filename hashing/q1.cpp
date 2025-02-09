// Count Number of Bad Pairs

//jab bhi indices same ho like indices aur unki values ka relation ho tab sab ek side krlo 

// class Solution {
//     public:
//         long long countBadPairs(vector<int>& nums) {
//             //brute force approach 1
//             // long long count = 0;
//             // int n = nums.size();
//             // for(int i=0;i<n;i++){
//             //     for(int j=i+1;j<n;j++){
//             //         if(nums[i]-i != nums[j]-j) // this conditon counts number of bad pairs same indices waalon ke ek side
//             //         count++;
//             //     }
//             // }
//             // return count;
    
//             //APPROACH 2 Optimized approach using hashmap because have to store pair and count frequency
//             int n = nums.size();
//             long long result = 0;
//             for(int i=0;i<n;i++){
//                 nums[i] = nums[i]-i;
//             }
//             unordered_map<int,int>mp;
//             mp[nums[0]] = 1;
    
//             for(int j = 1;j<n;j++){
//                 int countofnumsj = mp[nums[j]];
//                 int totalnumsbeforej = j;
//                 int badpairs = totalnumsbeforej - countofnumsj;
//                 result += badpairs;
//                 mp[nums[j]]++;
//             }
    
//         return result;
    
        
//         }
//     };

//APPROACH 3
// class Solution {
//     public:
//         long long countBadPairs(vector<int>& nums) {
//             long long n = nums.size();
//             long long totalPairs = (n * (n - 1)) / 2;
//             unordered_map<int, long long> freq;
//             long long goodPairs = 0;
            
//             for (int i = 0; i < n; i++) {
//                 int val = nums[i] - i;
//                 goodPairs += freq[val]; // Count existing good pairs
//                 freq[val]++; // Update frequency map
//             }
            
//             return totalPairs - goodPairs;
//         }
//     };
    