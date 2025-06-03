/*
Example: Find GCD of 36 and 60:
The common divisors of 36 and 60 are 1, 2, 3, 4, 6, 9, 12, 18, 36 and 1, 2, 3, 4, 5, 6, 10, 12, 15, 20, 30, 60.
The largest common divisor is 12.
*/

#include<bits/stdc++.h>
using namespace std;


// Brute force solution 
// TC --> O(min(n1, n2))

int main(){
    int n1 , n2;
    cout << "enter N1 : ";
    cin >> n1;
    cout << "enter N2 : ";
    cin >> n2; 

    int gcd = 1;

    for(int i=1; i<min(n1, n2); i++){
        if((n1 % i == 0) && (n2 % i == 0)){
            gcd = i;
        }
    }
    cout << "  GCD is : " << gcd ;
    return 0;
}

//Method 2 --> # optimize solution # div from reverse 

int main(){
    int n1 , n2;
    cout << "enter N1 : ";
    cin >> n1;
    cout << "enter N2 : ";
    cin >> n2; 


    for(int i=min(n1, n2); i>=1; i--){
        if((n1 % i == 0) && (n2 % i == 0)){
            cout << "  GCD is : " << i ;
            break;
        }
    }
    return 0;
}

/* Method 3 ---> Euclidean Algorithm 

 TC --> O(log(min(a, b))) --< Very fast

GCD(a,b)=GCD(b, a % b)
 
This recursive formula keeps reducing the problem until b=0, at which point a is the GCD.
*/

int main(){
    int n1 , n2;
    cout << "enter N1 : ";
    cin >> n1;
    cout << "enter N2 : ";
    cin >> n2; 

    while( n1 > 0 && n2 > 0){
        if(n1 > n2) {
            n1 = n1 % n2;
        } else {
            n2 = n2 % n1;
        }
    }

    if( n1 == 0) {
        cout << n2 << " is GCF  ";
    }else {
        cout << n1 << " is GCF  ";
    }

}