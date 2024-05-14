#include <iostream>
#include <list>
#include <random>

using namespace std;
void print(list<int> res) {
	while (!res.empty()) {
		cout << res.front() << " ";
		res.pop_front();

	}
}

list<int> randomlist(size_t size) {
	list<int> lst;
	random_device rnd;
	for (int i = 0; i < size;++i) {
		lst.push_back(rnd());
	}
	return lst;
}

int main() {
	list<int> List(randomlist(8));
	list<int> List_temp;
	cout << "First list" << endl;
	print(List);
	while (!List.empty()) {
		List_temp.push_back(List.front());
		if (List.front() < 0) {
			List_temp.push_back(66);
		}
		List.pop_front();
	}
	cout << "Second list" << endl;
	print(List_temp);
	return 0;
}