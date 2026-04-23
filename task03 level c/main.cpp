#include <iostream>
#include <ctime>
using namespace std;
#define NUMBER 10

int main() {
	srand(time(0));
	int vector[NUMBER];

	int sum = 0;
	int lessnumber = 0;

	for (int i = 0;i < NUMBER;i++) {
		vector[i] = rand() % 100 + 1;
		cout << vector[i] << " ";
	}

	for (int i = 0;i < NUMBER;i++) {
		sum += vector[i];
	}

	double midnum = 1.0 * sum / NUMBER;
	cout << "The mid number is " << midnum << endl;

	for (int i = 0;i < NUMBER;i++) {
		if (vector[i] < midnum) {
			lessnumber++;
		}
	}

	cout << "The numbers less then mid number: " << lessnumber << endl;
	return 0;
}