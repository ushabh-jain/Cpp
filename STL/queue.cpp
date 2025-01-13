//FIFO hota ismein 
#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<string>q;

    q.push("uso");
    q.push("raju");
    q.push("ritu");

    cout<<"top pr->"<<q.front()<<endl;
    q.pop();
    cout<<"top pr->"<<q.front()<<endl;
    cout<<"size->"<<q.size()<<endl;
 



}