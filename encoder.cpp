#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	cout << "Enter the name of the first file: ";
	string deUnde;
	cin >> deUnde;
	ifstream citeste(deUnde + ".argin");
	cout << "Enter the name of the second file: ";
	string unde;
	cin >> unde;
	cout << "gae";
	ofstream scrie(unde + ".argout");
	system("pause");
	return 0;
}
