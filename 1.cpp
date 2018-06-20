#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str1,str2,str3;
    
    
    cout<<"Please enter two strings:\n";
    getline(cin,str1);
    getline(cin,str2);
    getline(cin,str3)
    
    
    
    str1=str3+str1+str2.substr(0,3);
    
    
    cout<<"string1="<<str1;
    
    
    system("pause");
    
    
    return 0;
}
