#include<stack>
#include <iostream>
using namespace std;



template<typename T>
void Copy_Stack(stack<T> origin,stack<T>&dest) {//any change will not affect the origin in main while it will affect the dest in  main
    stack<T>trans;
    while (!origin.empty()) {
        trans.push(origin.top());
        origin.pop();
    }
    while (!trans.empty()) {
        dest.push(trans.top());
        trans.pop();
    }
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
    Copy_Stack(O, D);

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
