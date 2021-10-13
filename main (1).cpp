#include <iostream>
using namespace std;
int main()
{
    int skaitlis;
    cout << "Lūdzu ievadiet skaitli: ";
    cin >> skaitlis;
    while (skaitlis != 0) {
        int dal;
        dal = skaitlis % 2;
        skaitlis /= 2;
        cout << dal; }
    cout << std::endl;
    return 0;
} 