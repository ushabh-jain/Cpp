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

// push_back()
// Purpose: Adds an element to the end of the vector.
// Syntax: vec.push_back(value);
// Time Complexity: Amortized O(1).


// pop_back()
// Purpose: Removes the last element from the vector.
// Syntax: vec.pop_back();
// Time Complexity: O(1).


// size()
// Purpose: Returns the number of elements in the vector.
// Syntax: vec.size();
// Time Complexity: O(1).


// clear()
// Purpose: Removes all elements from the vector, making it empty.
// Syntax: vec.clear();
// Time Complexity: O(n).


// empty()
// Purpose: Checks if the vector is empty. Returns true if empty, else false.
// Syntax: vec.empty();
// Time Complexity: O(1).


// at()
// Purpose: Accesses the element at a specific index (with bounds checking).
// Syntax: vec.at(index);
// Time Complexity: O(1).


// front()
// Purpose: Returns a reference to the first element.
// Syntax: vec.front();
// Time Complexity: O(1).


// back()
// Purpose: Returns a reference to the last element.
// Syntax: vec.back();
// Time Complexity: O(1).


// resize()
// Purpose: Changes the size of the vector. New elements are initialized to value (if provided).
// Syntax: vec.resize(new_size, value);
// Time Complexity: O(n).


// insert()
// Purpose: Inserts an element before the specified position.
// Syntax: vec.insert(pos, value);
// Time Complexity: O(n).


// erase()
// Purpose: Removes the element at the specified position.
// Syntax: vec.erase(pos);
// Time Complexity: O(n).


// begin() / end()
// Purpose: Returns iterators to the start and end of the vector.
// Syntax: vec.begin();, vec.end();
// Time Complexity: O(1).