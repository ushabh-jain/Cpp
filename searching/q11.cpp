//find sqrt of given number using bs


// class Solution {
//   public:
//     int floorSqrt(int n) {
//         // int ans = sqrt(n);
//         // return ans;
//       int low = 0;
//       int high = n;
//       while(low<=high){
//           long long mid = low + (high-low)/2;
//           long long val = mid*mid;
//           if(val<=(long long)(n)){
//               low = mid+1;
//           }
//           else{
//               high = mid-1;
//           }
//       }
//       return high;
//     }
// };


