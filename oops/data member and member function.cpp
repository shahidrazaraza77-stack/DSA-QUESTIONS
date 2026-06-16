#include<iostream>
using namespace std ;

class car{
    public:
    string name ;
    string model;
    int year;
    

    void start(){
        cout << name <<" "<<" "<<"starting............"<<endl;

    }

    void stop(){
        cout <<model<<" "<<"stropping.........."<<endl;

    }
};
int main(){
    car mycar;
    mycar.name="honda ";
    mycar.model="civic";
    mycar.year=2020;
    mycar.start();
    mycar.stop();
}
