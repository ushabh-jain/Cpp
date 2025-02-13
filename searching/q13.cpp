// //book allocation

// #include <iostream>
// #include <vector>
// using namespace std;

// bool isallocate(vector<int>& arr, int n, int m, int mid) {
//     int count = 1;
//     int pagesum = 0;

//     for(int i = 0; i < n; i++) {
//         if (pagesum + arr[i] <= mid) {
//             pagesum += arr[i];  // Fix: Add arr[i] instead of incrementing by 1
//         } else {
//             count++;
//             if (count > m || arr[i] > mid) {
//                 return false;
//             }
//             pagesum = arr[i];  // Fix: Reset pagesum to arr[i]
//         }
//     }
//     return true;
// }

// int findPages(vector<int>& arr, int n, int m) {
//     if (m > n) return -1; // Edge case: More students than books

//     int s = 0, sum = 0;
//     for(int i = 0; i < n; i++) {
//         sum += arr[i];
//         s = max(s, arr[i]); // Fix: Start from the max element
//     }

//     int e = sum, ans = -1;
//     while (s <= e) {  // Fix: Change condition to s <= e
//         int mid = s + (e - s) / 2;
//         if (isallocate(arr, n, m, mid)) {
//             ans = mid;
//             e = mid - 1;
//         } else {
//             s = mid + 1;
//         }
//     }
//     return ans;
// }

// // Example Usage
// int main() {
//     vector<int> books = {12, 34, 67, 90};
//     int n = books.size();
//     int m = 2;
//     cout << "Minimum pages: " << findPages(books, n, m) << endl;
//     return 0;
// }
