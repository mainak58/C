#include<iostream>
#include<string>
using namespace std;

int main(){
    string s="Mainak" ;
    int start=0 , end=s.size()-1 ;

    while(start<end){
        swap(s[start] , s[end]) ;
        start++ ;
        end-- ;
    }

    cout<<s<<endl ;
    return 0 ;
}