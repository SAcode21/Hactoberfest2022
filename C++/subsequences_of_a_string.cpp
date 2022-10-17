#include <iostream>
#include <string>
using namespace std;

void printSubsequences(string str, int start, int end, string currStr = ""){
	//base case
	if (start == end) {
		return;
	}

	cout<<currStr<< "  ";
	for (int i = start + 1; i< end; i++) {
		currStr += str[i];
		printSubsequences(str, i, end, currStr);
		currStr = currStr.erase(currStr.size() - 1);
	}
}

int main(){
	string s;

	cout<< "Enter string : ";
	cin>> s;
	int len = s.size();
	
	cout<< "Subsequences : ";
	printSubsequences(s, -1, len);
	
	return 0;
}
