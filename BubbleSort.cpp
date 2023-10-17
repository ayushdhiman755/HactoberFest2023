// Program for sorting elements of bubble sort;
#include <bits/stdc++.h> 
using namespace std; 


void bubbleSort(vector<int>& arr) 
{ 
	int i, j; 
int n=arr.size();
	for (i = 0; i < n - 1; i++) 

		
		for (j = 0; j < n - i - 1; j++) 
			if (arr[j] > arr[j + 1]) 
				swap(arr[j], arr[j + 1]); 
} 

void printArray(vector<int> &arr) 
{ 
	int i,n=arr.size(); 

	for (i = 0; i < size; i++) 
		cout << arr[i] << " "; 
	cout << endl; 
} 


int main() 
{ 
	int n;
cout<<"Enter Number of elements";
cin>>n;
vector<int> arr;
for(int i=0;i<n;i++)
{
int num;
cin>>num;
arr.push_back(num);
}
	bubbleSort(arr); 
	cout << "Sorted array: \n"; 
	printArray(arr); 
	return 0; 
}
