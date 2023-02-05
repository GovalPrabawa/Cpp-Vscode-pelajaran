#include <iostream>

using namespace std;
int data[10], data2[10], list[20];
int n;

void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void selectionSort(int arr[], int n)
{
	int i, j, imin;

	for (i = 0; i < n - 1; i++)
	{
		imin = i;
		for (j = i + 1; j < n; j++)
			if (arr[j] < arr[imin])
				imin = j;

		swap(&arr[imin], &arr[i]);
	}
}

void display(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int sequentialSearch(int *array, int size, int key)
{
	for (int i = 0; i < size; ++i)
	{
		if (array[i] == key)
		{
			return i;
		}
	}

	return -1;
}

void bubble_sort(int n)
{
	int f, i;
	for (int pass = 0; pass < n; pass++)
	{
		f = 0;
		for (i = 0; i < (n - 1); i++)
		{
			if (list[i] > list[i + 1])
			{
				swap(list[i], list[i + 1]);
				f = 1;
			}
		}
		if (f == 0)
			break;
	}
}

int main(int argc, char const *argv[])
{
	int pilih;
	char lanjut;

	do
	{
		system("cls");
		cout << "Pilih Program Sorting atau Search" << endl;
		cout << "1. Bubble Sort" << endl;
		cout << "2. Insertion Sort" << endl;
		cout << "3. Selection Sort" << endl;
		cout << "4. Binary Search" << endl;
		cout << "5. Sequential Search" << endl;
		cout << "Pilih dari program di atas 1/2/3/4/5: ";
		std::cin >> pilih;

		switch (pilih)
		{
		case 1:
		{
			int n, i;

			cout << "Enter the number of element of your array:";
			cin >> n;
			cout << "\n\n";

			cout << "Enter the " << n << " elements:" << endl;
			for (int i = 0; i < n; i++)
			{
				cout << "Enter the element for [" << i << "] position:";
				cin >> list[i];
			}
			cout << "\n\n";

			bubble_sort(n);
		}

		case 2:
		{
			int y;
			cout << "masukan banyak array:";
			std::cin >> y;
			int x[y];
			for (int i = 0; i < y; i++)
			{
				cout << "masukan angka ke " << i << " :";
				std::cin >> x[i];
				cout << endl;
			}
			for (int i = 1; i < y; i++)
			{
				int key = x[i];
				int j = i - 1;
				while (j >= 0 && x[j] > key)
				{
					x[j + 1] = x[j];
					j--;
				}
				x[j + 1] = key;
				cout << "proses sorting" << endl;
				for (int m = 0; m < y; m++)
				{
					cout << x[m] << " ";
				}
				cout << endl;
			}
			cout << "hasil akhir" << endl;
			for (int m = 0; m < y; m++)
			{
				cout << x[m] << " ";
			}
			break;
		}
		case 3:
		{
			int n;
			cout << "ENTER THE ARRAY SIZE" << endl;
			std::cin >> n;

			int a[n];
			cout << "ENTER THE " << n << " ELEMENTS FOR THE ARRAY" << endl;

			for (int i = 0; i < n; i++)
				std::cin >> a[i];
			cout << endl
				 << endl;

			cout << "BEFORE" << endl;

			display(a, n);
			cout << endl
				 << endl;

			selectionSort(a, n);
			cout << "AFTER" << endl;

			display(a, n);
			break;
		}
		case 4:
		{
			int i, arr[5], num, first, last, middle;
			cout << "Enter 5 Elements (in ascending order): ";
			for (i = 0; i < 5; i++)
				std::cin >> arr[i];
			cout << "\nEnter Element to be Search: ";
			std::cin >> num;
			first = 0;
			last = 9;
			middle = (first + last) / 2;
			while (first <= last)
			{
				if (arr[middle] < num)
					first = middle + 1;
				else if (arr[middle] == num)
				{
					cout << "\nThe number, " << num << " found at Position " << middle + 1;
					break;
				}
				else
					last = middle - 1;
				middle = (first + last) / 2;
			}
			if (first > last)
			{
				cout << "\nThe number, " << num << " is not found in given Array";
				cout << endl;
			}
		}
		case 5:
		{
			int size;
			cout << "\nMasukan Banyaknya Array : ";
			std::cin >> size;

			int array[size];
			int key;

			for (int i = 0; i < size; i++)
			{
				cout << "\n Masukan value array ke " << i << " :";
				std::cin >> array[i];
			}

			cout << "\nMasukan angka yang ingin dicari : ";
			std::cin >> key;

			int index = sequentialSearch(array, size, key);
			if (index != -1)
			{
				cout << "\nAngka ditemukan di index ke: " << index;
			}
			else
			{
				cout << "\nAngka tidak ditemukan";
			}
			break;
		}
		default:
			cout << "Anda salah memasukan pilihan yang tersedia" << std::endl;
			break;
		}

		cout << endl;
		cout << endl;
		cout << "Lanjutkan program? (y/n): ";
		cin >> lanjut;
	} while (lanjut == 'y' || lanjut == 'Y');

	cout << "Proggram telah diakhiri" << endl;
	return 0;
}
