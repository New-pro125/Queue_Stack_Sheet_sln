#include<iostream>
#include<stack>
#include<queue>
#include<string>


using namespace std;



bool BackStack() {
	int val;
	stack<int>Origin;
	cin >> val;
	while (val) {
		if (val > 0) {
			Origin.push(val);
		}
		else {
			for (int i = 0; i < 5; i++) {
				if (Origin.empty())//here the solution is quite wrong as it shouldnot print anything if the stack size < 5 but it is solved like that in sheet :)
				{
					cout << " Error : " << endl;
					return false;
				}
				cout << Origin.top() << " " << endl;
				Origin.pop();
			}
		}
		cin >> val;
	}
}


int main() {

	BackStack();
	return 0;
}