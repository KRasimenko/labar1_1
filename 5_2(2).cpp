#include <iostream>
#include <list>

using namespace std;

void print(list<int> prnt) {
	while (!prnt.empty()) {
		cout << prnt.front() << endl;
		prnt.pop_front();
	}
}

int main() {
	list<int> List{ 1,3,16,18,25,25,37,12,15,14,14 };
	list<int> List_temp;
	while (!List.empty()) {
		if (List.front() % 3 != 0) {
			List_temp.push_back(List.front());
		}
		List.pop_front();
	}
	list<int> List_f;
	for (auto i = List_temp.begin(); i != prev(List_temp.end()); ++i) {
		List_f.push_back(*i);
		if (*i == *(next(i))) {
			List_f.push_back(88);
		}
	}
	print(List_f);
	return 0;
}
	
