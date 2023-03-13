
#include <iostream>
using namespace std;
#include<string>
#include<stack>
//I will use an array to implement the idea of the problem its the same for linked list except for dealing with nodes and pointers
void Print_Reversed(int Arr[], int size) {
    stack<int>Printer;
    for (int i = 0; i < size; i++) {
        /*
            for linked list:
            ptr=Head
            while(ptr){
                Printer.push(ptr.data);   //we can also make the stack store in the stack, the pointer to the node rather than the content on the node
                ptr=ptr.next()
            }
        */
        Printer.push(Arr[i]);//adds element
    }
    while (!Printer.empty()) {
        cout << Printer.top() << " ";//get the Peek element
        Printer.pop();//removes the top
    }
}

int main()
{
    int ARR[10] = { 0,1,2,3,4,5,6,7,8,9 };
    Print_Reversed(ARR, 10);
}
