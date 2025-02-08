// Find First and Last Position of Element in Sorted Array
////T.C : O(nlogn)

// class Solution {
//     public:
//           int findrightmost(vector<int>& nums, int target,int n){
//             int l = 0;
//             int r = n-1;
//             int right_most = -1;
//             while(l<=r){
//                 int mid = l + (r-l)/2;
//                 if(nums[mid]==target){
//                     right_most = mid;//possible my answer
//                     l = mid + 1;//move right to find right most
//                 }
//                 else if(nums[mid]<target){
//                     l = mid + 1;
//                 }
//                 else{
//                     r = mid - 1;
//                 }
//             }
//             return right_most;
//           }
//         int findleftmost(vector<int>& nums, int target,int n){
//             int l = 0;
//             int r = n-1;
//             int left_most = -1;
//             while(l<=r){
//                 int mid = l + (r-l)/2;
//                 if(nums[mid]==target){
//                     left_most = mid;//posible my answer
//                     r = mid - 1;//move more left to search leftmost
//                 }
//                 else if(nums[mid]<target){
//                     l = mid+1;
//                 }
//                 else{
//                     r = mid-1;
//                 }
//             }
//             return left_most;
//         }
//         vector<int> searchRange(vector<int>& nums, int target) {
//            int n = nums.size();
//            int left_most = findleftmost(nums,target,n);
//            int right_most = findrightmost(nums,target,n);
    
//            return {left_most,right_most};
//         }
//     };