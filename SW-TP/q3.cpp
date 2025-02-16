//subarray with atmost 2 disticnt elemnets


// class Solution {
//   public:
//     int totalElements(vector<int> &arr) {
//         int l =0;
//         unordered_map<int,int>mp;
//         int maxi = 0;
//         for(int r=0;r<arr.size();r++){
//             mp[arr[r]]++;
//             while(mp.size()>2){
//                 mp[arr[l]]--;
//                 if(mp[arr[l]]==0){
//                     mp.erase(arr[l]);
//                 }
//                 l++;
//             }
//             maxi = max(maxi,r-l+1);
            
//         }
//         return maxi;
//     }
// };

