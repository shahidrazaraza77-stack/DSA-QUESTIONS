#include <iostream>
#include <vector>

using namespace std ;

int main(){
    int x;
    cout <<" enter the target "; 
    cin>> x;


    
    vector<int>v;
    int n;
    cout<<" entr the size ";
    cin>>n;


    cout <<" enter the element ";

    for(int i=0;i<n;i++){
        int q ;
        cin>>q;
        v.push_back(q);
    }

    for (int i=0;i<=v.size()-2;i++){
        for (int j=i+1;j<=v.size()-1;j++){
            if (v[i]+v[j]==x){
                cout <<i <<" "<<j;
            }
        }
    }
}