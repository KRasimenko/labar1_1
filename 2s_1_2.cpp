#include <iostream>
#include <queue>
#include <string>

using namespace std;

struct PhoneInfo {
	string phone_name;
	double phone_price;
	PhoneInfo(string name, double price) : phone_name(name), phone_price(price) {}
};

int main() {
	queue<PhoneInfo> phone_q;

	phone_q.push(PhoneInfo("Nokia 3310", 999.99));
	phone_q.push(PhoneInfo("Ipoh 13", 50999.90));
	phone_q.push(PhoneInfo("Tapochek", 1000000));

	while (!phone_q.empty()) {
		PhoneInfo phone = phone_q.front();
		cout << phone.phone_name << " " << phone.phone_price << endl;
		phone_q.pop();
	}
	return 0;
}