#include<iostream>
using namespace std;

string remove_all_substring(string s,string part){
    while (s.length()!=0 && s.find(part)<s.length())
    {//string ki length 0 to nahi ya (phir jo part ha wo str ki lenth se bada to nahi)->index ki baat ho rhe yaha
        s.erase(s.find(part),part.length());
    }
    return s;
}
// so here while loop checks that is the length of the string in not equal to 0 and the part which we have have to remove from the the string is smaller that the string length if yes than just earse the part from the string.
int main(){
    string s="daabcbaabcbc";
    string part="abc";
    cout<<remove_all_substring(s,part)<<endl;
}