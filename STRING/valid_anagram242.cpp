#include <iostream>
#include<algorithm>

using namespace std;

class solution{
    public:
    bool isanagram(string s,string t){

        if (s.length()!=t.length()){
            return false ;
        }

        sort(s.begin(),s.end());
        sort (t.begin(),t.end());

        if (s==t) return true;
       
        else false ;

       
    }
};

int main(){

    string s,t;
    getline(cin,s );
    getline(cin,t);


    solution obj;
    
    if (obj.isanagram(s,t)){

        cout << "isanagram";
    }
    else  cout << "not isanagram ";

}