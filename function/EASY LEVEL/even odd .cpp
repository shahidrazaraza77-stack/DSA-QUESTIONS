#include <iostream>
using namespace std;

int evenodd(int num ){
    if(num%2==0) return 1;
    else return 0;
}
 int main(){
    int num;
    cin>>num;
    cout<<evenodd(num);
 }