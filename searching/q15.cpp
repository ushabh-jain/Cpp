// aggressive cows
//tc->O(nlogn)+O(n)
//sc->O(1)

// class Solution {
//   public:
  
//     bool canweplace(vector<int> &stalls,int dist, int k){
//         int cntcows = 1;
//         int last = stalls[0];
//         for(int i=0;i<=stalls.size();i++){
//             if(stalls[i]-last>=dist){
//                 cntcows++;
//                 last = stalls[i];
//             }
//             if(cntcows>=k) return true;
//         }
//         return false;
        
//     }

//     int aggressiveCows(vector<int> &stalls, int k) {

//         sort(stalls.begin(),stalls.end());
//         int n = stalls.size();
//         int low = 1;
//         int high = stalls[n-1]-stalls[0];
        
//         while(low<high){
//             int mid = low + (high-low)/2;
//             if(canweplace(stalls,mid,k)==true){
//                 low=mid+1;
//             }
//             else{
//                 high = mid-1;
//             }
//         }
//         return high;
//     }
// };

