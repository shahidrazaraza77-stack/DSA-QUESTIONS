#include<iostream>
using namespace std ;

class bankaccount {
    private:
    double bankbalance ;

    public:
    void setbalance(double balance ){
        bankbalance =balance ;

    }
    double getbalance (){
        return bankbalance ;
    }


};
int main(){
    bankaccount myaccount;
    myaccount.setbalance(1000.00); // This is the correct way to set the balance
    cout << "Balance: " << myaccount.getbalance() << endl; // This is the correct way to get the balance
}
