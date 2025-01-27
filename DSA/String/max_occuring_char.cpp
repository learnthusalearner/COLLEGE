#include <bits/stdc++.h>
using namespace std;

// function that return maximum occurring character
char getMaxOccurringChar(string str)
{ 
	unordered_map<char,int>ump;

	char ans;
	int count=0;
	for(int i=0 ;i<str.length(); i++){
		ump[str[i]]++;
		if(count < ump[str[i]]){
			ans = str[i];
			count = ump[str[i]];
		}
	}
	return ans;
}

int main()
{
	string str = "sample string";
	cout << "Max occurring character is: "<< getMaxOccurringChar(str);
}
