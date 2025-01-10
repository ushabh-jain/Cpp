// c++ is CASE SENSITIVE
//boilerplate code
//this is an preprocessor library whic tells compiles whic input/output stream has to be taken
#include<iostream>
//This line allows you to use the standard namespace (std) without having to prefix std:: to standard library identifiers like cout and cin.
using namespace std;
//this is the main function
int main(){
    int age = 25; //4 byte
    char grade = 'a'; //1 byte
    float pi = 3.14f; //4 byte
    bool isValid = true; //1 byte
    double price = 100.99; //8 byte;

    cout<<age<<endl;
    cout<<grade<<endl;
    cout<<pi<<endl;
    cout<<isValid<<endl;
    cout<<price<<endl;


    return 0;


}