//String:

//A string in C++ is a class from the Standard Template Library (STL) that dynamically manages sequences of characters, providing 
//built-in functions for string manipulation like concatenation, comparison, and resizing.

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string str;
//     cin>>(str);
//     int n = str.size();
//     for(int i=0;i<=n;i++){
//         if(str[i]>='A' && str[i]<='Z'){
//             str[i] = str[i]+32;
//         }
//          else if(str[i]>='a' && str[i]<='z'){
//             str[i] = str[i]-32;
//         }
//         cout<<str[i];
//     }


// }

// #include<iostream>
// using namespace std;
// int main(){
//     string str;
//     cin>>str;
//     int s=0;
//     int e=str.length()-1;
//     while(s<e){
       
//         if(str[s]!=str[e]){
//             cout<<"nahi hai";
//         }
//         s++;
//         e--;
       
//     }
//     cout<<"hai bc"<<endl;
// }

#include<iostream>
using namespace std;

int maxoccurance(string s){
    int arr[26]={0};

    //create an array of count
    for(int i=0;i<s.length();i++){
        char ch = s[i];
        int number = 0;
        number = ch - 'a';
        arr[number]++;
    }
    int maxi = -1,ans=0;
    for(int i=0;i<26;i++){
        if(maxi<arr[i]){
            ans = i;
            maxi = arr[i];
        }
    }
    return 'a'+ ans;

}
int main(){
    string s;
    cin>>s;
    cout<<maxoccurance(s)<<endl;

}