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
	ofstream scrie(unde + ".argout");
	string linie;
	getline(read, linie);
	while (linie != NULL)
	{
		cout << linie << "\n";
		getline(read, linie);
	}
	system("pause");
	return 0;
}
