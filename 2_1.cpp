#include <iostream>
#include <string>
#include <list>
#include <stack>

using namespace std;


int main() {
        setlocale(LC_ALL, "ru");
        stack<string> Slova;
        Slova.push("baba");
        Slova.push("bebe");
        Slova.push("bubu");
        
        Slova.pop(); // удаляет бубу

        // Добавим строки "sdf", "2", "ssd4", "hello" в стек
        Slova.push("sdf");
        Slova.push("2");
        Slova.push("ssd4");
        Slova.push("hello");

        stack<string> Slova_temp = Slova;
        cout << "Слова до преобразований" << endl;
        while (!Slova_temp.empty()) {
            cout << Slova_temp.top() << endl;
            Slova_temp.pop();
        }
        cout << endl;

        Slova.pop();
        Slova.pop();

        Slova_temp = Slova;
        cout << "Слова после преобразований" << endl;
        while (!Slova_temp.empty()) {
            cout << Slova_temp.top() << endl;
            Slova_temp.pop();
        }
        cout << endl;

        return 0;
 }





