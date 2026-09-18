// Decimal to binary converter 

// #include <iostream>
// using namespace std;

// int main(){
//     int decNum=122, rem, ans=0, pow=1;
//     int x = decNum;
//     while(decNum>0){
//         rem = decNum%2;
//         decNum=decNum/2;
//         ans+=(rem*pow);
//         pow*= 10;
//     }

//     cout << "The Binary of " << x << " is : " << ans << endl;

//     return 0;
// }

// Binary to decimal converter

#include <iostream>
using namespace std;

int main(){
    int binNum=1101, rem, ans=0, pow=1;
    int x = binNum;
    while(binNum>0){
        rem=binNum%10;
        binNum/=10;
        ans+=(rem*pow);
        pow*=2;
    }

    cout << "The Decimal of " << x << " is : " << ans << endl;

    return 0;
}

// this is just a test line and nothing else
