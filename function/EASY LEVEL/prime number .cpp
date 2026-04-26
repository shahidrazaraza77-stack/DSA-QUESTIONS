#include <iostream>
using namespace std ;

bool isprime(int n){
    if (n<=1) return false ;
    for(int i =2;i<n;i++){
        if (n%i==0) return false ;
        else return true ;
    }
    return true ;   
}

int main(){
    int num;
    cin>>num;

    if (isprime(num))
        cout << num<< " is prime "<< endl;

    else{

        cout<<num<< " is not prime " << endl;
    }
        
        return 0;


}