#include <iostream>
#include <stack>

using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	stack<int> Stack;
	Stack.push(5);
	Stack.push(9);
	Stack.push(1);
	Stack.push(59);
	Stack.push(2);

	Stack.pop(); // удаляем число 2

	//добавляем числа 1 4 2
	Stack.push(1);
	Stack.push(4);
	Stack.push(2);

	cout << "Стак до преобразований" << endl;
	stack<int> Stack_temp = Stack;
	while (!Stack_temp.empty()) {
		cout << Stack_temp.top() << endl;
		Stack_temp.pop();
	}
	Stack.push(4);
	Stack_temp = Stack;
	cout << endl;
	cout << "Стак после преобразований" << endl;
	while (!Stack_temp.empty()) {
		cout << Stack_temp.top() << endl;
		Stack_temp.pop();
	}
	int col = 0;
	while (!Stack.empty()) {
		if (Stack.top() > 3) {
			col += 1;
		}
		Stack.pop();
	}
	cout << "Количество числел, больших 3 " << col << endl;
	return 0;
	

}