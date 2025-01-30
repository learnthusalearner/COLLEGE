#include <bits/stdc++.h>
using namespace std;

void replaceSpaces(string str)
{
	string temp="";//temp='@20'    (2'nd way)
	for(int i=0 ; i<str.length() ; i++)
	{
        if(str[i]==' '){

        temp.push_back('@');//temp.replace(i,1,temp) will rep i'th pos 1 elem with the temp   (2'nd way)
        temp.push_back('2');
        temp.push_back('0');
        }
        else{
            temp.push_back(str[i]);
        }
	}
	cout<<temp;
}

int main()
{
	string input = "Mr John Snow";
	replaceSpaces(input);
	return 0;
}
// Output: Mr@20John@20Snow