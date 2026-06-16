#include <iostream>
using namespace std ;

class student{
    public:
    string name ;
    int rollno;
    string department;
    float cgpa;

};

int main(){
    student ss ;
    ss.name ="shahid ";
    ss.rollno=123;
    ss.cgpa=2.5;
    ss.department=" cse";

    cout<<"name : "<<ss.name<<endl;
}
 