#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str1,str2;
    
    
    cout<<"Please enter two strings:\n";
    getline(cin,str1);
    getline(cin,str2);
    
    
    
    
    str1=str1+str2.substr(0,3);
    
    
    cout<<"string1="<<str1;
    
    
    system("pause");
    
    
    return 0;
}
