//tower of hanoi

// class Solution {
//   public:
//     // You need to complete this function

//     int towerOfHanoi(int n, int from, int to, int aux) {
//         // Your code here
//         if(n==0) return 0;
//         int m = 0;
//         m+= towerOfHanoi(n-1,from,to,aux);
//         m++;
//         m+= towerOfHanoi(n-1,aux,to,from);
//         return m;
//     }
// };



