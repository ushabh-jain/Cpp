//1423. Maximum Points You Can Obtain from Cards

//ismein brute force approach yeh kr skte hai lsum and rsum krke fir max sum nikal lnege pehele k tk ka lsum fir lsum se minus krenge and rsum mein r se ++ krenge bss aur kuch nahi


// class Solution {
//     public:
//         int maxScore(vector<int>& cardPoints, int k) {
//             int res =0;
//             for(int i=0;i<k;i++){
//                 res += cardPoints[i];
//             }
//             int curr = res;
//             for(int i=k-1;i>=0;i--){
//                 curr-=cardPoints[i];
//                 curr+=cardPoints[cardPoints.size()-k+i];
//                 res = max(res,curr);
//             }
//             return res;
//         }
//     };