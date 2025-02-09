//search in rotated array


// class Solution {
//     public:
//        int findpivot(vector<int>& nums,int n){
//             int l=0,r=n-1;
//             while(l<r){
//                 int mid = l + (r-l)/2;
//                 if(nums[mid]>nums[r]){
//                     l = mid+1;
//                 }
//                 else{
//                     r = mid;
//                 }
//             }
//             return l;
    
//        }
//        int binarysearch(int l,int r,vector<int>& nums,int target){
//         int idx = -1;
//         while(l<=r){
//           int mid = l+(r-l)/2;
//           if(nums[mid]==target){
//             idx = mid;
//             break;
//           }
//           else if(nums[mid]<target){
//             l=mid+1;
//           }
//           else{
//             r = mid-1;
//           }
          
//         }
//         return idx;
//        }
//         int search(vector<int>& nums, int target) {
               //brute force approach
//             // int n = nums.size();
//             // for(int i=0;i<n;i++){
//             //     if(nums[i]==target){
//             //         return i;
//             //     }
//             // }
//             // return -1;
    
//             int n = nums.size();
//             int l = 0;
//             int r = n-1;
            
//             int pivot = findpivot(nums,n);
    
//             int idx = binarysearch(0,pivot-1,nums,target);
//             if(idx != -1) return idx;
    
//             idx = binarysearch(pivot,n-1,nums,target);
//             return idx;
          
        
//         }
//     };