#include <iostream>
using namespace std;
#define NUMBER 3

int main() {
	srand(time(0));
	int vector[NUMBER];

	bool negetive_numbers = false;

	for (int i = 0;i < NUMBER;i++) {
		vector[i] = rand() % 100 + 1;
		cout << vector[i] << " ";
	}

	for (int i = 0;i < NUMBER;i++) {	
		if (vector[i] < 0) {
			negetive_numbers = true;break;
		}	
	}

	cout << (negetive_numbers ? "All numbers is the negetive" : "Not all numbers is the negetive") << endl;

}
