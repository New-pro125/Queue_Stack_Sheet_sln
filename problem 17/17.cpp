#include<iostream>
using namespace std;
class node
{
public:
	int data;
	node* next;
};
class queue
{
	node* front;
	node* rear;
	int count;
public:
	queue()
	{
		front = rear = NULL;
		count = 0;
	}
	void enqueu(int c)
	{	
		
			node* temp = new node;
			temp->data = c;
			temp->next = NULL;
			if (front == NULL)
			{

				front = rear = temp;
				count++;
			}
			else
			{
				rear->next = temp;
				rear = temp;
				count++;
			}
		
	}
	void queueSumAndAvg(queue* q)
	{
		node* temp = q->getfront();
		int sum = 0;
		int count1 = q->getcount();
		while (temp != NULL)
		{
			sum += temp->data;
			temp = temp->next;
		}
		cout << "sum = " << sum << endl;
		cout << "average = " << (float)sum / count1 << endl;
	}
	node* getfront()
	{
		return front;
	}
	int getcount()
	{
		return count;
	}
	void print()
	{
		node* temp = front;
		while (temp != NULL)
		{
			cout << temp->data<<" ";
			temp = temp->next;
		}
		cout << endl;
	}

};
int main()
{
	
	queue q;
	q.enqueu(10);
	q.enqueu(5);
	q.enqueu(4);
	q.enqueu(6);
	q.enqueu(16);
	q.enqueu(68);
	q.enqueu(36);
	q.print();
	queue* q1 = &q;
	q.queueSumAndAvg(q1);
}
