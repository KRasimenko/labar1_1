#include <iostream>
#include <stack>
#include <random>
#include <algorithm>

using namespace std;

stack <int> RandomIncludeVector(size_t size) {
    stack<int> vctr;
    random_device rndm;
    for (size_t i = 0; i < size; ++i) {
        vctr.push(rndm());
    }
    return vctr;
}

int main() {
    stack <int> Victor(RandomIncludeVector(10));
    int col = 0;
    int sm = 0;
    stack<int> tempVictor = Victor; 
    while (!tempVictor.empty()) {
        cout << tempVictor.top() << " ";
        tempVictor.pop();
    }
    cout << endl;

    for (int i = 0; i < Victor.size(); i++) {
        if (Victor.top() % 2 == 0) {
            col += 1;
            sm += Victor.top();
        }
        Victor.pop();
    }
    
    int sr = (sm / col);
    cout << sr;
}