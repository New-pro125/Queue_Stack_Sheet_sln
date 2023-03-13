#include<iostream>
#include<string>
using namespace std;

#define Arr_size 100
template<typename T>
class Two_Stack {
private:
	T items[100];
	int Top1;
	int Top2;
public:
	Two_Stack() {
		Top1 = -1;
		Top2 = Arr_size;
	}
	bool push(T item, bool where) {//where >> tells the function where to put the item given >whether in the stack at begin or at the end one
		if (this->Top1 == this->Top2 - 1)
			return false;
		if (where) {
			items[++this->Top1] = item;
			return true;
		}
		items[--this->Top2] = item;
		return true;

	}
	T peek(bool where) const{
		if (where) {
			if (this->Top1 == -1) {
				return NULL;
			}
			return this->items[this->Top1];
		}
		if (this->Top2 == Arr_size) {
			return NULL;
		}
		return this->items[this->Top2];
	}
};

int main() {
	Two_Stack<int>SS;
	SS.push(1, 1);
	SS.push(4, 1);
	cout << SS.peek(1) << endl;
	cout << SS.peek(0) << endl;//the result is zero bec it returns NULL

}