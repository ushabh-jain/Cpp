//static allocation compile time pr hoti hai STACK MEIN for example ARRAY 
//dynamic aali runtime pr hoti hai HEAP MEIN for example VECTOR
//vector kuch nahi bss ek dynamic array hai isse mt daaroo isse kuch nahi hoga yeh apka saathi hai
//vector ki capacity double hota jata hai
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    vector<int> a(5,1); //where 5 is size and 1 se shuru krdo
    vector<int>last(a);
      for(int i:last){
        cout<<i<<" ";
    }cout<<endl;
   
    // push back se element insert hunda ji
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    //capacity se space check hunda ji
    cout<<"capacity->"<<v.capacity()<<endl;
    //size bta ta vector ka
    cout<<"size->"<<v.size()<<endl;
    //yeh btayega ki konse index pr konsa number hai
    cout<<"element at second index->"<<v.at(2)<<endl;
    //front pr ka ha
    cout<<"front->"<<v.front()<<endl;
    //back pr ka ha
    cout<<"back->"<<v.back()<<endl;
    //pop last element uda deta hai
    //before pop
    cout<<"before pop"<<endl;
    //for each loop
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    v.pop_back();
   
    //after pop
    cout<<"after pop"<<endl;
      
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;


    //clear se vector khaali hojata hai;
    v.clear();
    cout<<v.size()<<endl;




}