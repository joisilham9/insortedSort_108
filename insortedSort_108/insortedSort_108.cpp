#include <iostream>
using namespace std;

int arr[20];
int n;

void input() {
	while (true) {
		cout << " masuakan jumlah data pada array : ";
		cin >> n;

		if (n <= 20) {
			break;
		}
		else {
			cout << "\nArray yang anda masukkan maksimal 20 element. \n";
		}
	}
	cout << endl;
	cout << "==============================" << endl;
	cout << "MASUAKKAN ELEMENT ARRAY" << endl;
	cout << "==============================" << endl;

	for (int i = 0; i < n; i++) {
		cout << "Data ke-" << (i + 1) << ": ";
		cin >> arr[i];
	}
}

void insertionSort() {
	int temp;
	int j;
	for (int i = 1; i < n; i++) {
		temp = arr[i];
}
}