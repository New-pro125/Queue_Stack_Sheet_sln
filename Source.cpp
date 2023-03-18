#include<iostream>
//#include<string>
//#include <cstring>
using namespace std;
class node
{
public:
	char data;
	node* next;
};
class queue
{
	node* front;
	node* rear;
public:
	queue()
	{
		front = rear = NULL;
	}
	void enqueu(string s)
	{
		for (int i = 0;i < s.length();i++)
		{
			node* temp = new node;
			temp->data = s[i];
			temp->next = NULL;
			if (front == NULL)
			{

				front = rear = temp;
				
			}
			else
			{
				rear->next = temp;
				rear = temp;
				
			}
		}
	}
	void CompressString(string s)
	{
		
		this->enqueu(s);
		node* temp = front;
		node* temp2 = front;
		
		while (temp != NULL)
		{
			if (temp->data == ' ')
			{
				node* delptr = temp;
				temp2->next = temp->next;
				temp = temp->next;
				delete delptr;
			}
			else
			{
				temp2 = temp;
				temp = temp->next;

			}
		}
		temp = front;
		while (temp != NULL)
		{
			cout << temp->data;
			temp = temp->next;
		}
		cout << endl;
	}
	void print()
	{
		node* temp = front;
		while (temp != NULL)
		{
			cout << temp->data;
			temp = temp->next;
		}
	}

};
int main()
{
	string s = "Yara Ahmed Farouk";
	queue q;
	q.CompressString(s);
	q.print();
}
