// //painter partioning

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// bool isPossible(vector<int>& boards, int k, int mid) {
//     int painters = 1, sum = 0;

//     for (int i = 0; i < boards.size(); i++) {
//         if (sum + boards[i] <= mid) {
//             sum += boards[i];
//         } else {
//             painters++;
//             if (painters > k || boards[i] > mid) {
//                 return false;
//             }
//             sum = boards[i];  // Start a new painter
//         }
//     }
//     return true;
// }

// int minTimeToPaint(vector<int>& boards, int k) {
//     if (k > boards.size()) return *max_element(boards.begin(), boards.end());

//     int low = *max_element(boards.begin(), boards.end());
//     int high = accumulate(boards.begin(), boards.end(), 0);
//     int result = high;

//     while (low <= high) {
//         int mid = low + (high - low) / 2;
//         if (isPossible(boards, k, mid)) {
//             result = mid;  // Possible solution, try for a better minimum
//             high = mid - 1;
//         } else {
//             low = mid + 1;  // Increase time
//         }
//     }
//     return result;
// }

// int main() {
//     vector<int> arr = {2, 1, 5, 6, 2, 3};
//     int k = 2;
//     cout << "Minimum time to paint all boards: " << minTimeToPaint(arr, k) << endl;
//     return 0;
// }
