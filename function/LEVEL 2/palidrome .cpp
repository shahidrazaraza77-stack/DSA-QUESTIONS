#include<iostream>
using namespace std ;


bool ispalidrome(int n){
    int original=n;
    int rev=0;
    while(n>0){
        int digit =n%10;
        rev=rev*10+digit ;
        n=n/10;

    }
    return (original==rev);

}
int main(){
    int n;
    cin>> n;

    if (ispalidrome(n))
        cout <<" is palidrome "<<endl;
    else 
        cout<< n<<" is not a palindrome " << endl;
    return 0;
           
}