//min number of day to make m boque 

// class Solution {
//     public:
//         int canmake(vector<int>& bloomDay, int mid, int k){
//                 int boqcount = 0;
//                 int consecutivecount = 0;
//                 for(int i=0;i<bloomDay.size();i++){
//                     if(bloomDay[i]<=mid){
//                         consecutivecount++;
//                     }
//                     else{
//                         consecutivecount = 0;
//                     }
//                     if(consecutivecount==k){
//                         boqcount++;
//                         consecutivecount = 0;
//                     }
//                 }
//                 return boqcount;
//         }
//         int minDays(vector<int>& bloomDay, int m, int k) {
//           int n = bloomDay.size();
//           int start_day = *min_element(begin(bloomDay), end(bloomDay));
//           int end_day = *max_element(begin(bloomDay),end(bloomDay));
//           int minDays = -1;
//           while(start_day<=end_day){
//             int mid = start_day + (end_day-start_day)/2;
//             if(canmake(bloomDay,mid,k)>=m){
//                 minDays = mid;
//                 end_day = mid-1;
//             }
//             else{
//                 start_day = mid+1;
//             }
//           }
//           return minDays;
//         }
//     };