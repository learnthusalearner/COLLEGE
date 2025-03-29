#include <bits/stdc++.h>
using namespace std;

void Rev_str(string& str,int i,int j){// Pass by reference here
    if(i >= j) return ;
    swap(str[i++],str[j--]);
    Rev_str(str,i,j);
}

int main(){
    string str = "Kunal";
    int n = str.length();
    Rev_str(str,0,n-1);
    cout << str;
    return 0;
}

//Analogy:
// Imagine you have a piece of paper with the word "Kunal" written on it.
// You make a photocopy of that paper.
// You give the photocopy to someone, and they start changing the letters on their photocopy.
// Your original piece of paper remains exactly the same.