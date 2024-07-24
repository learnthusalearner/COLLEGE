#include <iostream>
using namespace std;

int main(){
    char value;
    cout<<"enter value: ";
    cin>>value;

    if(value>='a' && value<='z'){
        cout<<"this is lowercase character"<< endl;
    }
    else if(value>='A' && value<='Z'){
        cout<<"this is uppercase character"<< endl;
    }
    else if(value>='0' && value<='9'){
        cout<<"this is numeric"<< endl;
    }
    else {
        cout << "This is not a lowercase character, uppercase character, or numeric" << endl;
    }
}