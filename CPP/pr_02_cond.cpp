#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"enetr the character you want to check"<<endl;
    cin >> ch;
    if(ch>=97&&ch<=122)
        cout<<"the character is uper case"<<endl;

    
    else if(ch>9 && ch<97)
        cout<<"the character is lower case"<<endl;

    
    else
        cout<<"this is numeric";
    
    return 0;
}