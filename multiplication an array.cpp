// Multiplication of an array

#include <iostream>
using namespace std;
void fun(int arr[],int size)
{
	int start=0;
	int end=size-1;
	while(start<end)
	{
		int temp=arr[start];
		arr[start]=arr[end];
		start++;
		end--;
	}
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<","<<endl;
	}
}

void reverse1(int arr[],int size)
{
	for(int i=size-1;i>=0;i--)
	{
		cout<<arr[i]<<endl;
	}
}

void multiplication(int arr[],int size)
{
	int mul=1;
	for (int i=0;i<size;i++)
	{
		mul*=arr[i];
	}
	cout<<mul<<endl
}

int main()
{
	int arr[8]={10,20,30,40,50,60,70,80};
	reverse1(arr,8);
	multiplication(arr,8);
	return 0;
}
