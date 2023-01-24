#include <iostream>
using namespace std;

int sequentialSearch(int *array, int size, int key)
{
	for (int a = 0; a < size; ++a)
	{
		if (array[a] == key)
		{
			return a;
		}
	}

	return -1;
}

int main()
{
	int size;
	cout << "\nMasukan Jumlah Array : ";
	cin >> size;

	int array[size];
	int key;

	for (int a = 0; a < size; a++)
	{
		cout<<"\n Masukan value array ke "<<a<<" :";
		cin >> array[a];
	}

	cout << "\nMasukan angka yang ingin dicari : ";
	cin >> key;

	int index = sequentialSearch(array, size, key);
	if (index != -1)
	{
		cout << "\nAngka ditemukan di index ke: " << index;
	}
	else
	{
		cout << "\nAngka tidak ditemukan";
	}

	return 0;
}
