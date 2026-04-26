# include <iostream>
#include <vector>
using namespace std ;

void isprint(vector<int>&v){


int n=v.size();   
int i=0;    
while (i<n){

    int j=0;

    while (j<n-1){
        if (v[j]>v[j+1]){
            swap(v[j],v[j+1]);

        }
        j++;
        

    }
    i++;
}

}    


void print(vector<int > v){
    for (int i=0;i<v.size();i++){
        cout <<v[i]<< endl ;
    }
}


int main(){


    vector<int>v; 

    v.push_back(23);
    v.push_back(4);
    v.push_back(3);
    v.push_back(84);
    v.push_back(7);
    v.push_back(9);
 

    isprint(v);

    print (v);

    
}


 