// Capacity To Ship Packages Within D Days

// class Solution {
//     public:
//         int d(vector<int>& weights,int weight){
//             int currweight = 0,days=0;
//             for(int w:weights){
//                 if(currweight + w <= weight) {
//                     currweight += w;
//                 }
//                 else{
//                     days++;
//                     currweight = w;
//             }
//             }
//             days++;
//             return days;
//         }
//         int shipWithinDays(vector<int>& weights, int days) {
//             int sum =0;
//             int maxi = -1;
//             for(int w : weights){
//                 sum += w;
//                 maxi = max(maxi,w);
//             }
//             int low = maxi;
//             int high = sum;
//             while(low<high){
//                 int mid = low + (high-low)/2;
//                 int day = d(weights,mid);
//                 if(day<=days){
//                    high = mid;
//                 }
//                 else{
//                     low = mid+1;
//                 }
//             }
//             return high;
//         }
//     };