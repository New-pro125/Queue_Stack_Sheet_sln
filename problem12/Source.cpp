#include<iostream>
#include<string>
#include<stack>
#include<queue>
using namespace std;

void A(stack<int> & Stack)//part one 
{
	stack<int>s1;
	stack<int>s2;

	//here i used two stack BUT we can also use one stack only if there a copy constructor like that
	
		//stack<int>s1(Stack);
		//while(!Stack.empty()){
		//	Stack.pop();
		//}
		//while(!s1.empty()){
		//Stack.push(s1.top());
		//s1.pop();
		//}
	
	while (!Stack.empty()) {
		s1.push(Stack.top());
		Stack.pop();
	}
	while (!s1.empty()) {
		s2.push(s1.top());
		s1.pop();
	}
	while (!s2.empty()) {
		Stack.push(s2.top());
		s2.pop();
	}
	return;
}




void B(stack<int>&Stack)//part 2 using queue
{
	queue<int>q1;
	while (!Stack.empty()) {
		q1.push(Stack.top()); //enqueue to the queue
		Stack.pop();
	}
	while (!q1.empty()) {
		Stack.push(q1.front()); //peekfront of the queue
		q1.pop(); //dequeue form the queue
	}
	return;
}

int main() {

	
	stack<int>S_origin;
	//entering data >>to stop type -1
	
	int val;
	cin >> val;
	while (val != -1) {
		S_origin.push(val);
		cin >> val;
	}
	stack<int>temp_stack(S_origin); //i used here copy constructor
	//printing before
	while (!temp_stack.empty()) {
		cout << temp_stack.top() << " ";
		temp_stack.pop();
	}

	cout << endl;




	//algorithm

	A(S_origin);
	//B(S_origin);  //uncomment here



	//for printing  after

	while (!S_origin.empty()) {
		cout << S_origin.top() << " ";
		S_origin.pop();
	}



}