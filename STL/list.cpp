//In C++, the  is a part of the Standard Template Library (STL). It is a doubly linked list that allows efficient insertion and deletion of elements from both ends or in the middle of the list.
#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int>l;

    l.push_back(1);
    l.push_front(2);

    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    l.erase(l.begin());
    for(int i:l){
        cout<<i<<" ";
    }
}