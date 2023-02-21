#include <iostream>
#include <string>
#include <locale>
using namespace std;

int main() {
	setlocale(LC_CTYPE, "ukr");
	string words[100];
	int n = 0, max = 0, imax = -1;
	do {
		cin >> words[n];
		n++;
	} while (words[n - 1] != "\0");
	/*string chlen;
	while (getline(cin, chlen)) {
		if (chlen == "") break;
		words[n] = chlen;
		n++;
	}*/

	for (int i = 0; i < n; i++)
		cout << words[i] << endl;

	for (int i = 0; i < n; i++)
		if (words[i].length() > max) {
			max = words[i].length(); imax = i;
		}
	cout << "Max word - " << words[imax] << ", length - " << max << endl;
}