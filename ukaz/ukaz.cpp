#include "ukaz.h"

void ran(int* a, int size) {
	for (int i = 0; i < size; i++) {
		a[i] = rand() % 30 - 15;
	}
}



void reverse(int* a, int size) {
	int start = 0, end = 9;
	while (start < end) {
		swap(a[start], a[end]);
		start++;
		end--;
	}
}
void nvz(int* a, int size) {
	for (int i = 0; i < 10; i++)
		for (int k = i + 1; k < 10; k++)
			if (a[k] > a[i]) swap(a[i], a[k]);
	for (int i = 0; i < 10; i++) {
		cout << a[i] << ' ';
	}
	cout << endl;
}

void voz(int* a, int size) {
	for (int i = 0; i < 10; i++)
		for (int k = i + 1; k < 10; k++)
			if (a[k] < a[i]) swap(a[i], a[k]);
	for (int i = 0; i < 10; i++) {
		cout << a[i] << ' ';
	}
	cout << endl;
}

void cik(int* a, int size) {
	for (int i = 0; i < 10; i++) {
		cout<<a[i]<<' ';
	}
	cout << endl;
}

void map(int* arr, unsigned size, int(*fun)(int)) {
	for (unsigned i = 0; i < size; i++) {
		arr[i] = fun(arr[i]);
	}
}

int map(int* arr, unsigned size, int(*fun)(int, int)) {
	int m = fun(arr[0], arr[1]);
	for (unsigned i = 2; i < size; i++) {
		m = fun(m, arr[i]);
	}
	return m;
}
/* */
void(*fun(int* x, int size))(int*, int) {
	int s = 0;
	for (int j = 0; j < size; j++) {
		s = s + x[j];
	}

	if (x[0] == s) return reverse;
	if (x[0] > s) return nvz;
	if (x[0] < s) return voz;

}