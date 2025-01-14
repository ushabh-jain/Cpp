// c++ is CASE SENSITIVE
//boilerplate code
//this is an preprocessor library whic tells compiles whic input/output stream has to be taken
#include<iostream>
//This line allows you to use the standard namespace (std) without having to prefix std:: to standard library identifiers like cout and cin.
using namespace std;
//this is the main function
// int printhello(int n){
//     for(int i=0;i<n;i++){
//         cout<<"hello"<<endl;
//     }
    
// }

// int minofnum(int a,int b){
//     if(a<b){
//         return a;
//     }
//     return b;
// }

// int fact(int n){
//     if(n==1){
//         return 1;
//     }
//     return n*fact(n-1);
// }


// int sumofdig(int n){
//     int sum=0;
//     while(n>0){
//         int lastdig = n%10;
//         n=n/10;
//         sum+=lastdig;

//     }
//     return sum;

// }

// int reverse(int n){
//     int revnum=0;
//     while(n>0){
//         int ld = n%10;
//         revnum = (revnum*10)+ld;
//         n=n/10;
//     }
//     return revnum;
// }

// bool palin(int n){
//     int revnum=0;
//     int dup = n;
//     while(n>0){
//         int ld = n%10;
//         revnum = (revnum*10)+ld;
//         n=n/10;


//     }
//     if(dup = revnum){
//         return true;
//     }else{
//          return false;
//     }
    
// }


// int gcd(int a,int b){
//     while(b!=0){
//         int temp = b;
//         b = a%b;
//         a = temp;
//     }
//     return a;

// }


// bool armstrong(int n){
//     int num,originalnum,result=0;
//     originalnum = num;
//     while(originalnum!=0){
//         int rem = originalnum%10;
//         result += rem*rem*rem;
//         originalnum=originalnum/10;
//     }
//     return result = num;
  
// }

// void divisors(int n){
//     for(int i=1;i<=n;i++){
//     if(n%i==0){
//         cout<<i<<" ";
//     }
  
// }
//   cout<<endl;
// }








int main(){
    // int a,b;
    // cin>>a>>b;

    int n;
    cin>>n;

    //DATA TYPES AND VARIABLES


    // int age = 25; //4 byte
    // char grade = 'a'; //1 byte
    // float pi = 3.14f; //4 byte
    // bool isValid = true; //1 byte
    // double price = 100.99; //8 byte;
    // int newprice = (int)price; // this is type casting

    // cout<<age<<endl;
    // cout<<grade<<endl;
    // cout<<pi<<endl;
    // cout<<isValid<<endl;
    // cout<<price<<endl;
    // cout<<newprice<<endl;

    //USER INPUT

    // int marks;
    // cout<<"enter your marks : ";
    // cin>> marks;
    // cout<<"your marks :"<<marks<<endl;
    

    //INCREMENT DECREMENT

    // int a = 10;
    // int d = 11;
    // int b = a++; // kaam hoga pehele fir update
    // int c = ++d; // update hoga pehele fir kaam
    // cout<<b<<endl;
    // cout<<c;

    //CONDITIONS


    // int age;
    // cout<<"age daal : ";
    // cin>>age;
    // if(age>=18){
    //     cout<<"vote pa";
    // }
    // else{
    //     cout<<"fer kaddi";
    // }

    //LOOPS

    // int n;
    // cout<<"number daal : ";
    // cin>>n;
    // int sum=0;
    // // while(n<10){
    // //     cout<<"LA LA LA";
    // // }
    // for(int i=0;i<=n;i++){
    //     sum+=i;
       
    // }
    // cout<<sum;

    //Q1 Generate first n Prime numbers 

  

// Function to check if a number is prime
// bool isPrime(int num) {
//     if (num <= 1) return false;
//     for (int i = 2; i * i <= num; i++) {
//         if (num % i == 0) return false;
//     }
//     return true;
// }

// int main() {
//     int m, n;
//     cin >> n >> m; // Input limit (n) and number of primes to generate (m)

//     int primeCount = 0; // Counter for the number of primes found

//     for (int i = 2; i <= n; i++) {
//         if (isPrime(i)) {
//             cout << i << endl; // Print the prime number
//             primeCount++;
//             if (primeCount == m) break; // Stop when m primes are found
//         }
//     }


// cout<<minofnum(a,b);
// cout<<fact(n);
// cout<<sumofdig(n);

// cout<<reverse(n);

// if(palin(n)){
//     cout<<"hai oaara";
// }
// else{
//     cout<<"nahi hai oaara";
// }

// cout<<gcd(a,b);
//  if(armstrong(n)){
//     cout<<"hai yeh";
//  }
//  else{
//     cout<<"nahi hai";
//  }
//   if (n > 0) {
//         divisors(n);
//     } else {
//         cout << "Please enter a positive number." << endl;
//     }




  



    return 0;


}