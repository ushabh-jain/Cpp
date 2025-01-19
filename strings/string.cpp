//String:

//A string in C++ is a class from the Standard Template Library (STL) that dynamically manages sequences of characters, providing 
//built-in functions for string manipulation like concatenation, comparison, and resizing.

#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>(str);
    int n = str.size();
    for(int i=0;i<=n;i++){
        if(str[i]>='A' && str[i]<='Z'){
            str[i] = str[i]+32;
        }
         else if(str[i]>='a' && str[i]<='z'){
            str[i] = str[i]-32;
        }
        cout<<str[i];
    }


}