 //TC ->O(N) 
 //SC ->O(N) MAP USE KIYA ISLIYE

// class Solution {
//     public:
//         int slidingwindow(vector<int>& nums, int k) {//khandani template of sliding window....
//             if (k == 0) return 0;  // No valid subarray possible
//             int i = 0, count = 0;
//             unordered_map<int, int> mp;
    
//             for (int j = 0; j < nums.size(); j++) {
//                 mp[nums[j]]++; // Expand the window
    
//                 while (mp.size() > k) { // Shrink window if more than k distinct elements
//                     mp[nums[i]]--;
//                     if (mp[nums[i]] == 0) {
//                         mp.erase(nums[i]);
//                     }
//                     i++;
//                 }
    
//                 count += (j - i + 1); // Count subarrays ending at j
//             }
//             return count;
//         }
    
//         int subarraysWithKDistinct(vector<int>& nums, int k) {
//             return slidingwindow(nums, k) - slidingwindow(nums, k - 1);
//         }
//     };
    