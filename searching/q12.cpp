//find the kth missing number 

//approach 1 - linear search whil TC->O(N)

// class Solution {
//     public:
//         int findKthPositive(vector<int>& arr, int k) {
//             int num = 1;
//             int n = arr.size();
//             int i =0;
//             while(i<n && k>0){
//                 if(arr[i]==num){
//                     i++;
//                 }
//                 else{
//                     k--;
//                 }
//                 num++;
//             }
//             while(k--){
//                 num++;
//             }
//             return num-1;
//         }
//     };

//appraoch 2 binary search with TC->O(logN)

// int l = 0;
// int h = arr.size()-1;
// int mid = -1;
// while(l<=r){
//     mid = l+(r-l)/2;

//     int missing = arr[mid] - (mid+1); //formula to find missing number mid tk

//     if(missing<=k){
//         l = mid+1;
//     }
//     else{
//         r = mid-1;
//     }
// }
// return l+k; //this is important part this will give the kth missing number value
// }