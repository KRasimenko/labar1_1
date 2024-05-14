#include <iostream>
#include <list>
#include <string>

using namespace std;
int main() {
	list<string> ABC{ "А", "aboba", "bibaboba","bebsboobs" };
	int col = 0;
	while (!ABC.empty())
	{
		col += ABC.front().size();
		ABC.pop_front();
	}
	cout << col;
	return 0;
}
