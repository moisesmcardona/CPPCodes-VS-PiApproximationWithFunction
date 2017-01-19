#include <iostream>
using namespace std;

int getInput();

int main()
{
	int i, approximation;
	int count = 0;
	double pi = 4.0;
	approximation = getInput();
	for (i = 3; i <= approximation; i += 2) {
		if (count % 2 == 0) {
			pi -= 4.0 / (double)i;
		}
		else {
			pi += 4.0 / (double)i;
		}

		count++;

	}
	cout << "The approximation of pi based on the number provided is " << pi << endl;
	system("pause");
	return 0;
}

int getInput()
{
	int approximation;
	do{
		cout << "Enter a number to try to aproximate pi. It must be larger than 3: ";
		cin >> approximation;
	} while (approximation <= 3);
	return approximation;
}