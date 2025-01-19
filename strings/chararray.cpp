//Character Array:

//A character array is a collection of characters stored in contiguous memory, terminated by a null character ('\0'), 
//and is used to represent strings in C-style programming.




#include<iostream>
using namespace std;

bool palindrome(char a[],int n){
    int s = 0;
    int e = n-1;
    while(s<=e){
        if(a[s] != a[e]){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;

}

// void reverse(char name[],int n){
//     int s = 0;
//     int e = n-1;
//     while(s<e){
//         swap(name[s++],name[e--]);
//     }
// }

int getlength(char name[]){
    int count =0;
    for(int i=0;name[i] !='\0';i++){
        count++;
    }
    return count;
}
int main(){
    char name[20]; //jidhar end hoga uske last  mein ek null character store krdega yeh udhar iska khatma
    cin>>name;
    int len = getlength(name);
    // reverse(name,len);
    // cout<<name<<endl;
    cout<<"check kr hai ki nahi :"<<palindrome(name,len)<<endl;

}