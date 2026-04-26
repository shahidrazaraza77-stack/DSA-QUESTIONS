#include <iostream>
#include <vector>
using  namespace std ;

void twosum(vector <int> &v, int target){
    
    for (int i=0;i<v.size();i++){
        for (int j=i+1;j<v.size();j++){
            if (v[i]+v[j]==target ){
                cout <<i<<"  "<< j<< endl;
                return ;
            
            }
            
        }


    }
    cout << " not found "<< endl;


}

void display(vector<int>&v,int size){
    for (int i=0;i<size;i++){
        cout << v[i]<< " ";

    }
    cout << endl;

}



int main(){
    int x;
    cout <<" enter the target  ";
    cin>>x;
    
    vector <int> v;
    int n;
    cout << " enter the size of vector ";
    cin>>n;

    cout<<" enter the element ";

    for (int i=0;i<n;i++){
        int q;

        cin>>q;

        v.push_back(q);
    }

    display(v,n);

    twosum(v,x);

   

}








