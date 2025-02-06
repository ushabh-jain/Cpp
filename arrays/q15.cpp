//3-sum
//TC->o(n^2)
// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//         vector<vector<int>> ans;
//         sort(nums.begin(), nums.end());

//         for (int i = 0; i < nums.size(); i++) {
//             // Skip duplicate elements for the first element in triplet
//             if (i > 0 && nums[i] == nums[i - 1]) {
//                 continue;
//             }

//             int j = i + 1, k = nums.size() - 1;

//             while (j < k) {
//                 int sum = nums[i] + nums[j] + nums[k];

//                 if (sum > 0) {
//                     k--; // Decrease sum by moving right pointer left
//                 } 
//                 else if (sum < 0) {
//                     j++; // Increase sum by moving left pointer right
//                 } 
//                 else {
//                     // Found a valid triplet
//                     ans.push_back({nums[i], nums[j], nums[k]});
//                     j++;
//                     k--;

//                     // Skip duplicate numbers for j and k to avoid duplicate triplets
//                     while (j < k && nums[j] == nums[j - 1]) {
//                         j++;
//                     }
//                     while (j < k && nums[k] == nums[k + 1]) {
//                         k--;
//                     }
//                 }
//             }
//         }

//         return ans;
//     }
// };
