#include<iostream>
#include<string>
using namespace std;

int main(){
    string s="Mainak" ;
    int size=0 ;

    while(s[size]!='\0' ){          // s[size] -> dont write only size because it needs to itterate 
        size++;                     // over the string but size is intiger
    }

    cout<<size<<endl ;
    return 0 ;
}