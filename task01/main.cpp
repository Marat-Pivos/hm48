#include <iostream>
using namespace std;
#define NUMBER 10

int main() {
	srand(time(0));
	int vector[NUMBER];

	int numberpositive = 0;

	for (int i = 0;i < NUMBER;i++) {
		vector[i] = rand() % 100 + 1;
		cout << vector[i] << " ";
	}

	for (int i = 0;i < NUMBER;i++) {
		if (vector[i] > 0) {
			numberpositive++;
		}	
	}

	cout << "Positive numbers: " << numberpositive << endl;
	return 0;
}