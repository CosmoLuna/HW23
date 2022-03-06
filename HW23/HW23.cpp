#include <iostream>

using namespace std;

// ������ 1
void threeMax(int &aref, int &bref, int &cref) {
	int max = aref;
	if (bref > max)
		max = bref;
	if (cref > max)
		max = cref;
	aref = max;
	bref = max;
	cref = max;
}
// ������ 2
int &z2(int array[], int length) {
	for (int i = 0; i < length; i++)
		if (array[i] < 0)
			return array[i];
	return array[1];
}
// ������ 3
void z3(int arr1[], int length1, int arr2[], int length2) {
	for (int i = 0; i < length1; i++)
		for (int j = 0; j < length2; j++)
			if (*(arr1 + i) == *(arr2 + j))
				*(arr2 + j) = 0;
}


int main() {
	setlocale(LC_ALL, "Russian");

	// ������ 1
	cout << "������ 1\n������� 3 �����: ";
	int a, b, c;
	cin >> a >> b >> c;
	threeMax(a, b, c);
	cout << a << " " << b << " " << c << endl;

	// ������ 2
	cout << "������ 2\n";
	int arr[5] = { 1, 6, 33, -7, 3 };
	cout << z2(arr, 5) << endl;

	// ������ 3
	cout << "������ 3\n";
	int z3_1[5] = { 2, 7, 3, 8, 5 };
	int z3_2[5] = { 5, 2, 4, 11, 3 };
	cout << "������ 1:\n[";
	for (int i = 0; i < 5; i++)
		cout << z3_1[i] << ", ";
	cout << "\b\b]\n";

	cout << "������ 2:\n[";
	for (int i = 0; i < 5; i++)
		cout << z3_2[i] << ", ";
	cout << "\b\b]\n";

	z3(z3_1, 5, z3_2, 5);

	cout << "������ 2 (��������):\n[";
	for (int i = 0; i < 5; i++)
		cout << z3_2[i] << ", ";
	cout << "\b\b]\n";

	return 0;
}