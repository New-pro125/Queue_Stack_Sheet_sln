#include<iostream>
#include<queue>
#include<stack>
using namespace std;
template<class T>
void concentate(queue<T>& q1, queue<T>& q2)
{
	queue<T>temp2 = q2;
	while (!q2.empty())
	{
		q1.push(q2.front());
		q2.pop();
	}
	q2 = temp2;
}
int main()
{
	queue<int>q11;

	queue<int>q12;

	for (int i = 0; i < 5; i++)
		q11.push(i);
	for (int i = 5; i < 10; i++)
		q12.push(i);
	queue<int>temp1 = q11;
	queue<int>temp2 = q12;
	cout << "The Queue 1 content: ";
	while (!temp1.empty())
	{
		cout << temp1.front() << " ";

		temp1.pop();
	}
	cout << endl << "The Queue 2 Content: ";
	while (!temp2.empty())
	{
		cout << temp2.front() << " ";

		temp2.pop();
	}
	concentate(q11, q12);
	temp1 = q11;
	temp2 = q12;
	cout << "\nThe Queue 1 content After Contentation: ";
	while (!temp1.empty())
	{
		cout << temp1.front() << " ";

		temp1.pop();
	}
	cout << endl << "The Queue 2 Content: ";
	while (!temp2.empty())
	{
		cout << temp2.front() << " ";

		temp2.pop();
	}
}