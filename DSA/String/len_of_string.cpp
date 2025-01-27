#include <iostream>
using namespace std;

int getLength(char name[]) {
    int count = 0;
    for(int i=0; name[i] != '\0'; i++) {
        count++;
    }
    return count;
}

int main() {
    char name[20];

    cout<<"enter your name: ";
    cin>>name;

    int x=getLength(name);
    
    cout<<"Length of the string is: "<<x<<endl;
    return 0;
}