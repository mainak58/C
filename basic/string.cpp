#include <iostream>
#include <string>

using namespace std;

int main() {

    // Basic printing

    string s;
    cin >> s;
    cout << s;

    // String size

    string p = "Mainak Karmakar";
    cout << p.size()<<endl;


    // string.push_back pop_back


    // marge to string using            // string.append(string)

    string s1="mainak" , s2="karmakar" ;
    string s3 = s1.append(s2);
    cout<<s3<<endl ;

    

    return 0;
}
