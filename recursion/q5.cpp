//pow(x,n)

// class Solution {
//     public:
//         double power(double x, long n){
//             if(n==0){
//                 return 1;
//             }
//             if(n<0){
//                 return 1.0/power(x,-n);
//             }
//             if(n&1){
//                 return x*power(x*x,(n-1)/2);
//             }else{
//                 return power(x*x,n/2);
//             }
//         }
//         double myPow(double x, int n) {
//             return power(x,n);
//         }
//     };