#include <iostream>
#include <list>
using namespace std;
int main() {
	list<float> lst{ 22,0.99 };
	cout << lst.front() << " " << lst.back() << endl;

}
