// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int m,n;
//     cin>>m>>n;

//     int arr[m][n];
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cin>>arr[i][j];
//         }
//     }
//       for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }

// }

//TRANSPOSE OF MATRIX
// #include<iostream>
// using namespace std;
// int main(){
//     int m;
//     cin>>m;
//     int arr[m][m];
//     for(int i=0;i<m;i++){
//         for(int j=0;j<m;j++){
//             cin>>arr[i][j];
//         }
//     }

//     for(int i=0;i<m;i++){
//         for(int j=0;j<m;j++){
//             arr[i][j]=arr[j][i];
//         }
//     }

//     cout<<endl;
//     cout<<"AFTER TRANSPOSE"<<endl;
//       for(int i=0;i<m;i++){
//         for(int j=0;j<m;j++){
//             cout<<arr[i][j];
//         }
//         cout<<endl;
//     }

// }


// MATRIX MULTIPLICATION
// #include<iostream>
// using namespace std;
// int main(){
//     int r1,c1,r2,c2;
//        // Input dimensions for the first matrix
//     cout << "Enter rows and columns for the first matrix: ";
//     cin >> r1 >> c1;

//     // Input dimensions for the second matrix
//     cout << "Enter rows and columns for the second matrix: ";
//     cin >> r2 >> c2;

//     int mat1[r1][c1];
//     int mat2[r2][c2];
//     int res[r1][c2];

//     if(c1!=r2){
//         cout<<"nahi hoga multipy"<<endl;
//     }

//         // Input first matrix
//     cout << "Enter elements of the first matrix:" << endl;
//     for (int i = 0; i < r1; i++) {
//         for (int j = 0; j < c1; j++) {
//             cin >> mat1[i][j];
//         }
//     }

//     // Input second matrix
//     cout << "Enter elements of the second matrix:" << endl;
//     for (int i = 0; i < r2; i++) {
//         for (int j = 0; j < c2; j++) {
//             cin >> mat2[i][j];
//         }
//     }

//     for(int i=0;i<r1;i++){
//         for(int j=0;j<r2;j++){
//             res[i][j]=0;
//         }
//     }

//     for(int i=0;i<r1;i++){
//         for(int j=0;j<c2;j++){
//             for(int k=0;k<c1;k++){
//                 res[i][j] += mat1[i][k]*mat2[k][j];
//             }
//         }
//     }


//     // Display the result
//     cout << "Resultant matrix:" << endl;
//     for (int i = 0; i < r1; i++) {
//         for (int j = 0; j < c2; j++) {
//             cout << res[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;

// }



// //sum of lower bound and upper bound
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//  int n,m;
//  cin>>n>>m;
//  int arr[n][m];
//  for(int i=0;i<n;i++){
//     for(int j=0;j<m;j++){
//         cin>>arr[i][j];
//     }  
//  }

//  for(int i=0;i<n;i++){
//     for(int j=0;j<m;j++){
//         cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
//  }
//  int lb=0,ub=0;
//  for(int i=0;i<n;i++){
//     for(int j=0;j<m;j++){
//         if(i<=j){
//             ub=ub+arr[i][j];
//         }
//         if(i>=j){
//             lb=lb+arr[i][j];
//         }
//     }
//  }
// cout<<ub<<" "<<lb<<endl;
// return 0;
// }


//rotate matrix by 90 ... we can't use variable size in array so we use MAX 
// #include<iostream>
// #include<cstdio>
// #include<cmath>
// #define MAX 50 // Maximum size for the matrix
// using namespace std;
// void rotate(int arr[MAX][MAX],int n){
//     for(int col=0;col<n;col++){
//         for(int row = n-1;row>=0;row--){
//             cout<<arr[row][col];
//             if(row>0){
//                 cout<<" ";
//             }
//         }
//            cout<<endl;
//     }
 
// }
// int main()
// {
//     int T;
//     cin>>T;
//     while(T--){
//     int n;
//     cin>>n;
//     int arr[MAX][MAX];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cin>>arr[i][j];
//         }
//     }
//     rotate(arr,n);
//     cout<<endl;
//  }
   
    
     
//    return 0;
// }

//spiral of matrix 
// #include<iostream>
// using namespace std;
// int main(){
//     int n,m;
//     cin>>n>>m;
//     int arr[n][m];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin>>arr[i][j];
//         }
//     }

//     int rowbegin = 0;
//     int rowend = n-1;
//     int colbegin = 0;
//     int colend = m-1;

//     while(rowbegin<=rowend && colbegin<=colend){
//         for(int i=colbegin;i<=colend;i++){
//             cout<<arr[rowbegin][i]<<" ";
//         }
//         rowbegin++;
//         for(int i=rowbegin;i<=rowend;i++){
//             cout<<arr[i][colend]<<" ";
//         }
//         colend--;
//         if(rowbegin<=rowend){
//             for(int i=colend;i>=colbegin;i--){
//                 cout<<arr[rowend][i]<<" ";
//             }
//             rowend--;
//         }
//         if(colbegin<=colend){
//          for(int i=rowbegin;i>=rowend;i--){
//             cout<<arr[i][colbegin]<<" ";
//          }
//          colbegin++;
//         }
        
//     }
//     return 0;
// }