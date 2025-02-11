// //koko eating bananans

// class Solution {
//     public:
//         bool eatall(vector<int>& piles,int mid,int h){
//             int actualhours = 0;
//             for(int &x:piles){
//                 actualhours += x/mid;
//                 if(x%mid != 0){
//                     actualhours++;
//                 }
//             }
//             return actualhours<=h;
//         }
//         int minEatingSpeed(vector<int>& piles, int h) {
//               int n = piles.size();
    
//               int l = 1;
//               int r= *max_element(begin(piles),end(piles));
//               while(l<r){
//                 int mid = l+(r-l)/2;
    
//                 if(eatall(piles,mid,h)){
//                     r = mid;//we did r = mid instead r = mid-1 so we can get potential minimum answers
//                 } else {
//                     l = mid+1;
//                 }
//               }
//               return l;
//         }
//     };