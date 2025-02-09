//find the peak element

// class Solution {
//     public:
//         int findPeakElement(vector<int>& nums) {
//                int n = nums.size();
//                if(n==1){
//                 return 0;
//                }
//                if(nums[0]>nums[1]){
//                 return 0;
//                }
//                if(nums[n-1]>nums[n-2]){
//                 return n-1;
//                }
//                int low = 1;
//                int high = n-2;
//                while(low<=high){
//                 int mid = low + (high-low)/2;
//                 if(nums[mid]>nums[mid+1] && nums[mid]>nums[mid-1]){
//                     return mid;
//                 }
//                 else if(nums[mid]<nums[mid+1]){//agar woh increasing slope mein hai toh low ko mid se aage feko vrna else kro
//                     low = mid +1;
//                 }
//                 else{
//                     high = mid-1;
//                 }
//                }
//                return -1;
//         }
//     };