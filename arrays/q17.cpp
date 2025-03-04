//trapping rain water

// 2 array lena leftmax and rightmax fir unka min nikal current waali building ki height minus krdo

// class Solution {
//     public:
//         vector<int>getleftmax(vector<int>& height,int& n){
//             vector<int>leftmax(n);
//             leftmax[0]=height[0];
//             for(int i=1;i<n;i++){
//                 leftmax[i]=max(leftmax[i-1],height[i]);
//             }
//             return leftmax;
//         }
//           vector<int>getrightmax(vector<int>& height,int& n){
//             vector<int>rightmax(n);
//             rightmax[n-1]=height[n-1];
//             for(int i=n-2;i>=0;i--){
//                 rightmax[i]=max(rightmax[i+1],height[i]);
//             }
//             return rightmax;
//         }
//         int trap(vector<int>& height) {
//             int n = height.size();
//             if(n == 1 || n == 0)
//                 return 0;
//             vector<int>leftmax = getleftmax(height,n);
//             vector<int>rightmax = getrightmax(height,n);
    
//             int sum = 0;
//             for(int i=0;i<n;i++){
//                 int h = min(leftmax[i],rightmax[i])-height[i]; //main login
//                 sum+=h;
//             }
//             return sum;
    
//         }
//     };