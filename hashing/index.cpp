// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;



int main() {
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    unordered_map<int,int>mp;
    
    
    for(int x:arr){
       mp[x]++;
    }
    
    for(const auto&pair : mp){
        cout<<pair.first<<"->"<<pair.second<<endl;
    }
    

    if(mp.find(77)!=mp.end()){ //we can use count also to check
        cout<<"milgya"<<endl;
    }else{
       cout<<"hum to na ho"<<endl;
    }

    return 0;
}


// insert({key, value})	= Inserts a new key-value pair.
// erase(key) =	Removes an element by key.
// find(key) =	Returns an iterator to the element if found, else mp.end().
// count(key) =	Returns 1 if the key exists, else 0.
// size() =	Returns the number of elements in the map.
// empty() =	Returns true if the map is empty.
// clear() =	Removes all elements from the map.
// begin() / end()	= Iterators to traverse the map.
// rbegin() / rend() =	Reverse iterators for traversal.