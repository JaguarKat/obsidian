#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	cout << "Enter the name of the first file:";
	String deUnde;
	cin >> deUnde;
	ifstream citeste(deUnde + ".argin");
	system("pause");
	return 0;
}
