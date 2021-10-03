#include <iostream>
using namespace std;
int main() {
	cout << "Lūdzu ievadiet pirmo skaitli: ";
	long long int n1 = 0;
	cin >> n1;
	cout << "Lūdzu ievadiet otro skaitli: ";
	long long int n2 = 0;
	cin >> n2;
	long long int answer = 0;
	answer = n1 * n2;
	cout << "Jūsu atbilde ir: " << answer;
	}