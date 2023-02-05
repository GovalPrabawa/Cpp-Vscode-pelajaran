// C++ program for implementation of selection sort
#include <bits/stdc++.h>
using namespace std;

void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void selectionSort(int arr[], int n)
{
	int i, j, imin;

	for (i = 0; i < n-1; i++)
	{
		imin = i;
		for (j = i+1; j < n; j++)
		if (arr[j] < arr[imin])
			imin = j;

		swap(&arr[imin], &arr[i]);
	}
}

void display(int arr[], int size)
{
	int i;
	for (i=0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main()
{
int n ;
	cout<<"ENTER THE ARRAY SIZE"<<endl;
	cin>>n;
	
	int a[n];
	cout<<"ENTER THE "<<n<<" ELEMENTS FOR THE ARRAY"<<endl;

	for(int i =0;i<n;i++)
	cin>>a[i];
					cout<<endl<<endl;	

			cout<<"BEFORE"<<endl;	

	display(a,n);
			cout<<endl<<endl;	

	selectionSort(a,n);
		cout<<"AFTER"<<endl;	

	display(a,n);
	return 0;
}

// This is code is contributed by rathbhupendra

