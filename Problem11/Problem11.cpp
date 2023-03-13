#include <iostream>
#include<string>
#include<stack>

using namespace std;
template<typename T>
void catStack(stack<T>& S1, stack<T>S2) {
	stack<T>S3;//temporary
	while (!S2.empty()) {
		S3.push(S2.top());
		S2.pop();
	}
	while (!S3.empty()) {
		S1.push(S3.top());
		S3.pop();
	}
	return;
}

int main()
{
    stack<int>O;
    int val;
    cin >> val;
    while (val != -1) {
        O.push(val);
        cin >> val;
    }

    stack<int>D;

    cin >> val;
    while (val != -1) {
        D.push(val);
        cin >> val;
    }

    catStack(O, D);

    while (!O.empty()) {
        cout << O.top() << " ";
        O.pop();
    }
    cout << endl;

    while (!D.empty()) {
        cout << D.top() << " ";
        D.pop();
    }
}