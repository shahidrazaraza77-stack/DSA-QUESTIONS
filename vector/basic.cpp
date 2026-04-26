#include <iostream>
#include <vector>
using namespace std ;

int main(){
    vector<int>v(5);
    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(8);
    // v.push_back(5);
    // v.push_back(5);
    // v.pop_back();

    int n=v.size();
   
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout <<"............."<<endl;
    for(int i=0;i<n;i++){
        cout <<v[i]<<endl;
    }
    
    
    cout <<"............."<<endl;
    cout <<n<<"  "<< v.capacity();

}