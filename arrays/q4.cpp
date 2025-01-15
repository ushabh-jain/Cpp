//Given an array of positive integers arr[], return the second largest element from the array. If the second largest element doesn't exist then return -1.
// class Solution {
//   public:
//     // Function to return the second largest element
//     int getSecondLargest(vector<int> &arr) {
//         if (arr.size() < 2) return -1; // No second largest if array has less than 2 elements
        
//         int max = INT_MIN, smax = INT_MIN;

//         for (int i = 0; i < arr.size(); i++) {
//             if (arr[i] > max) {
//                 // Update second largest before updating the largest
//                 smax = max;
//                 max = arr[i];
//             } else if (arr[i] > smax && arr[i] != max) {
//                 // Update second largest only if it's not equal to the largest
//                 smax = arr[i];
//             }
//         }

//         // If no second largest exists, return -1
//         return (smax == INT_MIN) ? -1 : smax;
//     }
// };
