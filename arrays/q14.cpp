


//approach 1
// class Solution {
// public:
//     int subarraySum(vector<int>& nums, int k) {
//         unordered_map<int, int> mpp;
//         int sum = 0, count = 0;
//         mpp[0] = 1; // Important: Handle the case where the sum itself is k

//         for (int i = 0; i < nums.size(); i++) {
//             sum += nums[i];
//             if (mpp.find(sum - k) != mpp.end()) {
//                 count += mpp[sum - k];
//             }
//             mpp[sum]++;
//         }

//         return count;
//     }
// };

//Approach 2
// class Solution {
// public:
//     int subarraySum(vector<int>& nums, int k) {
//         int count = 0;
//         int n = nums.size();
//         vector<int> cumulativeSum(n + 1, 0); // Create an array to store cumulative sums, starting with 0

//         // Calculate cumulative sums
//         for (int i = 0; i < n; i++) {
//             cumulativeSum[i + 1] = cumulativeSum[i] + nums[i];
//         }

//         // Check for all pairs of cumulative sums to find subarrays that sum to k
//         for (int i = 0; i < n; i++) {
//             for (int j = i + 1; j <= n; j++) {
//                 if (cumulativeSum[j] - cumulativeSum[i] == k) {
//                     count++;
//                 }
//             }
//         }

//         return count;
//     }
// };
