#include <iostream>
#include <vector>
using namespace std;


void change(vector<int>& a){
    a[0]=100;

}

int main(){

    vector<int>v;

    v.push_back(4);
    v.push_back(3);
    v.push_back(9);
    v.push_back(7);
    v.push_back(5);

    for (int i=0;i<v.size();i++){
        cout<<v[i]<<endl;

    }
    change (v);

    cout <<" after ";
    for (int i=0;i<v.size();i++){
        cout<<v[i]<<endl;

    }


}