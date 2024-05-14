#include <iostream>
#include <queue>

using namespace std;
void process(queue<int>& q) {
	while (!q.empty()) {
		int front_el = q.front();
		cout << front_el << endl;
		q.pop();
		if (!q.empty() && q.front() % 2 == 0) {
			break;
		}
		if (q.empty()) {
			cout << "\nNew queue is empty.\n";
		}
		else {
			cout << "\nNew front address: " << &q.front() << "\nNew back address: " << &q.back() << endl;
		}

	}
}

int main() {
	queue<int> elements;
	elements.push(5);
	elements.push(7);
	elements.push(3);
	elements.push(17);
	elements.push(15);
	elements.push(23);
	elements.push(6);
	elements.push(12);
	elements.push(41);

	process(elements);
	return 0;
}
