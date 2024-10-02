#include <iostream>
#include "binary_insertion_sort.h"
#include "shaker_sort.h"

using namespace std;

int main() {
	const int n = 8;
	const int x = 10;
	int arr[n] = { 7, 17, 9, 3, 13, 1, 16, 10 };
	int a[x] = { 13, 1, 16, 10, 7, 17, 9, 3, 32, -309 };


	binary_insertion_sort(arr, n);
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	cout << endl;

	shaker_sort(a, x);
	for (int i = 0; i < x; i++) {
		cout << a[i] << " ";
	}

}