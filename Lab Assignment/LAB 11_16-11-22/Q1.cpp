/*i. WAP to find sort an integer array and a float array, using 
function template.*/

#include<iostream>
using namespace std;
#define N 5

template <typename T>

void sort(T arr[], int SIZE){
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = i+1; j < SIZE; j++)
		{
			if (arr[i] > arr[j])
			{
				T temp;
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}


int main(){

	int int_array[N];
	float float_array[N];
	cout<<"Enter integer array elements:";
	for (int i = 0; i < N; i++)
	{
		cin>>int_array[i];
	}
	cout<<"Enter floating array elements:";
	for (int i = 0; i < N; i++)
	{
		cin>>float_array[i];
	}
	sort(int_array,N);
	sort(float_array, N);
	cout<<"After sorting they are :";
	for (int i = 0; i < N; i++)
	{
		cout<<int_array[i]<<", ";
	}
	cout<<endl;
	for (int i = 0; i < N; i++)
	{
		cout<<float_array[i]<<", ";
	}
	return 0;
}