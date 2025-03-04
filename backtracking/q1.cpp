// // Online C++ compiler to run C++ program online
// #include <bits/stdc++.h>
// using namespace std;

// int solve(vector<bool>boards,int tq,int qpsf,string ans){
//     if(tq==qpsf){
//         cout<<ans<<endl;
//         return 1;
//     }
//     int count=0;
//     for(int i=0;i<boards.size();i++){
//         if(boards[i]==false){
//             boards[i]=true;
//             count+=solve(boards,tq,qpsf+1,ans+"b"+to_string(i)+"q"+to_string(qpsf));//kaam kiyaa
//             boards[i]=false; //yeh undo krdiya hehehehe
//         }
//     }
//     return count;
// }

// int main() {
//     vector<bool> boards(4, false); 
//     solve(boards,2,0,"");
    
    

//     return 0;
// }