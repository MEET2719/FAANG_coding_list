#include <bits/stdc++.h> 
using namespace std; 


void sort012(int a[], int arr_size) 
{ 
	int lo = 0; 
	int hi = arr_size - 1; 
	int mid = 0; 

	while (mid <= hi) { 
		switch (a[mid]) { 
		case 0: 
			swap(a[lo++], a[mid++]); 
			break;  
		case 1: 
			mid++; 
			break; 
		case 2: 
			swap(a[mid], a[hi--]); 
			break; 
		} 
	} 
} 

void printArray(int arr[], int arr_size) 
{ 
	for (int i = 0; i < arr_size; i++) 
		cout << arr[i] << " "; 
} 

int main() 
{ 
	int n;
	cin>>n;
	int a[n+1];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort012(a, n); 
	cout << "array after sorting "; 
	printArray(arr, n); 
} 


