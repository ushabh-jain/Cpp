//count good numbers 

// class Solution {
//     public:
//         int M = 1e9+7;
//         long long power(long long b,long long e,long long ans){
//             if(e==0) return ans;
//             if(e&1) return power(b,e-1,(ans*b)%M);
//             else return power((b*b)%M,e/2,ans);
//         }
//         int countGoodNumbers(long long n) {
//             long long temp = power(20,n/2,1);
//             return (n&1)?(temp*5)%M:temp;
//         }
//     };
    
//(n&1) yeh ek bitwise AND operator hai jo binary mein calculate krta hai if 0 ko 1 se kro 0 ayega and 1 ko 1 se kro toh 1 if 1 hai last mein toh odd if 0 hai toh even