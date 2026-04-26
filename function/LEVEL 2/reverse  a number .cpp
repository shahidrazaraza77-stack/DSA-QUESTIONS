#include <iostream>
using namespace std ;


int reversenumber(int num){
    int rev=0;
    while(num>0){
        int digit =num % 10;
        rev=rev*10+digit ;
        num=num/10;


    }return rev;
}
int main(){
    int num;
    cin>>num;

    cout<<" reverse the number "<< reversenumber(num)<<endl;
    return 0;

}