//LIFO hota hai stack mein
#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<string>s;

    s.push("uso");
    s.push("raju");
    s.push("ritu");

    cout<<"top pr->"<<s.top()<<endl;

    s.pop();
    cout<<"ab top pr->"<<s.top()<<endl;
    cout<<"size->"<<s.size()<<endl;
}