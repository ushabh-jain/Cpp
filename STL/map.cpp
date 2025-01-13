//key value pair mein store hota hai
//sorted hota hai
#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int,string>mp;
    mp[1]="uso";
    mp[2]="raju";
    mp[3]="ritu";

    for(auto it:mp){
        cout<<it.first<<" : "<<it.second<<endl;
    }cout<<endl;

    cout<<mp.count(2)<<endl;
    auto it = mp.find(3);
    for(auto i=it;i!=mp.end();i++){
        cout<<(*i).first<<endl;
    }
}

//TC->O(logN)