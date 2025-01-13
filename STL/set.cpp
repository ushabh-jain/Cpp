//only store unique element sorted way mein bahar ata hai
#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int>s;
    s.insert(1);
    s.insert(2);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    for(auto i:s){
        cout<<i<<endl;
    }

    int key = 20;
    if (s.find(key) != s.end()) {
        cout << key << " is present in the set." << endl;
    } else {
        cout << key << " is not present in the set." << endl;
    }

    s.erase(1);
    cout << "After erasing 1: ";
    for (int elem : s) {
        cout << elem << " ";
    }
    cout << endl;


}

//find insert erase tC->O(logN);
//begin end ki tc->O(1);
