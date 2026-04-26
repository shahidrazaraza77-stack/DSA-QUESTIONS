#include <iostream>
using namespace std ;

void finonacci(int n){
    int a =0,  b=1 , next;
    cout << " fibonachi series up to "<< n<<" terms ";

    for (int i=1;i<=n;i++){
        cout <<a<< " " ;
        a=b;
        b=next;

    }
    cout <<endl;
}
int main(){

    int num;
    cin>>num;
    
    finonacci(num);
    
    return 0 ;
    
}