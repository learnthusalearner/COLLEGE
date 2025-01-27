#include<iostream>
using namespace std;

string remove_all_substring(string s,string part){
    while (s.length()!=0 && s.find(part)<s.length())
    {//string ki length 0 to nahi ya (phir jo part ha wo str ki lenth se bada to nahi)->index ki baat ho rhe yaha
        s.erase(s.find(part),part.length());
    }
    return s;
}

int main(){
    string x="daabcbaabcbc";
    string y="abc";
    cout<<remove_all_substring(x,y)<<endl;
}