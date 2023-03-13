
//palindrome

//can be also solved using stack and queue together 

#include<iostream>
#include<string>
#include<stack>
#include<cctype>
//i will use stack from the language for not wasting time

using namespace std;

//this algorithm is not for general palindrome but it is for letters and spaces only
bool Ispalindrome(string C, int length) {
	stack<int>S1;
	for (int i = 0; i < length; i++) {
		if (C[i] == ' ')
			continue;
		S1.push(tolower(C[i]));// tolower() return the char in lower case
	}
	for (int i = 0; i < length/2; i++) {
		if (C[i] == ' ')
			continue;
		if (S1.top() != tolower(C[i]))
			return false;
		S1.pop();
	}
	return true;
}

int main() {
	cout << Ispalindrome("MadaM", 5)<<endl;
	cout << Ispalindrome("Mad aM", 6)<<endl;
	cout << Ispalindrome("Mad am", 6)<<endl;
}