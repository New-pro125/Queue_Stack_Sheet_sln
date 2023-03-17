#include<iostream>
#include<queue>
#include<stack>
using namespace std;
template<class T>
void reverse(queue<T>& q)
{
	stack<T>temp;
	while (!q.empty())
	{
		temp.push(q.front());
		q.pop();

	}
	while (!temp.empty())
	{
		q.push(temp.top());
		temp.pop();
	}
}
int main()
{
	queue<int>q1;
	for (int i = 0; i < 10; i++)
		q1.push(i);
	reverse(q1);
	queue<int> temp1 = q1;
	while (!temp1.empty())
	{
		cout << q1.front() << " ";

		q1.pop();
	}

}