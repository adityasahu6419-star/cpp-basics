// #include <iostream>
// using namespace std;

// int printHello(){
//     cout << "Hello!\n";
//     return 3;
// }

// int main(){

//     cout << printHello() << endl;
//     return 0;
// }

// Min of two numbers 

// #include <iostream>
// using namespace std;

// int min(int a, int b){
//     if(a<b){
//         return a;
//     } else{
//         return b;
//     }

// }

// int main(){

//     // int x = min(5,8);
//     // cout << x << endl;
//     // or i can also write it as 
//     cout << min(5,8) << endl;
//     return 0;
// }

// sum of numbers from 1 to n 

// #include <iostream>
// using namespace std;

// int Nsum(int a){
//     int sum=0;
//     cout << "Enter a number : ";
//     cin >> a;
//     for(int i=0; i<a; i++){
//         sum+=i+1;
//     }
//     return sum;
// }

// int main(){

//     cout << Nsum(4) << endl;
//     return 0;
// }

// n factorial function 

// #include <iostream>
// using namespace std;

// int Nfact(int a){
//     int fact=1;
//     cout << "Enter a number : ";
//     cin >> a;
//     for(int i=0; i<a; i++){
//         fact*=i+1;
//     }
//     return fact;
// }

// int main(){

//     cout << Nfact(4) << endl;
//     return 0;
// }

// function for sum of the digits 

// #include <iostream>
// using namespace std;

// int sumOfDigits(int num){
//     int rem,sum=0;
//     while(num !=0){
//         rem = num%10;
//         sum+=rem;
//         num=num/10;
//     }
//     return sum;
// }

// int main(){

//     cout << sumOfDigits(874564) << endl;
//     return 0;
// }

// calculate binomial coefficient nCr from n & r 

// #include <iostream>
// using namespace std;

// int factorial(int a){
//     int fact=1;
//     while(a>=1){
//         fact = fact * a;
//         a--;
//     }
//     return fact;
// }

// int binoCoeff(int n, int r){
//     int x,y,z,coeff;
//     x = factorial(n);
//     y = factorial(r);
//     z = factorial(n-r);
//     coeff = x/(y*z);
//     return coeff;

// }

// int main(){

//     cout << binoCoeff(6,2) << endl;
//     return 0;
// }

// Prime number checker function 

// #include <iostream>
// using namespace std;

// void isPrime(int a){
//     bool prime=true;
//     for(int i=2; i<a; i++ ){
//         if(a%i==0){
//             prime = false;
//         } 
//     }
//     if(prime){
//         cout << "Yes, it is a prime." << endl;
//     } else {
//         cout << "No, it is not a prime." << endl;
//     }
// }


// int main(){

//     isPrime(37);
//     return 0;
// }

// print all prime numbers from 2 to n 

// #include <iostream>
// using namespace std;

// void primePrinter(int n){
    
//     for(int i=2; i<n;i++){
//         bool prime = true;
//         for(int j=2; j<i; j++ ){
//             if(i%j==0){
//                 prime = false;
//                 break;
//             } 
//         }
//         if(prime){
//             cout << i << " ";
//         } 
//     }
    
// }


// int main(){

//     primePrinter(100);
//     return 0;
// }

// function to reverse a number 

// #include <iostream>
// using namespace std;

// int main(){
//     int n=12345, rem,newDigit=0;
//     while(n>0){
//         rem = n%10;
//         n /= 10;
//         newDigit =(newDigit*10) + rem;
//     }

//     cout << "The reverse of the number is : " << newDigit << endl;
//     return 0;
// }

// function to check if the number is a power of two 

#include <iostream>
using namespace std;

int main(){
    int n=1024, rem,newDigit=0;
    bool isPower = true;
    if(n<2){
        cout << "The number is not a power of 2." << endl;
    } else{

        while(n>=2){
            rem = n%2;
            if(rem!=0){
                cout << "The number is not a power of 2." << endl;
                isPower = false;
                break;
            }
            n /= 2;
            newDigit =(newDigit*10) + rem;
        }
    }

    if(isPower){
        cout << "The number is a power of 2." << endl;
    }

    
    return 0;
}


