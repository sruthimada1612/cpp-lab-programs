#include<iostream>
using namespace std;
template <class T>
void bubbleSort(T arr[], int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
		if (arr[j]>arr[j+1])
		{
			T temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
			}	
		}
	}
}
template <class T>
void display(T arr[],int n)
{
	for (int i=0;i<n;i++)
	cout<<arr[i]<<" ";
	cout<<endl;
}
int main()
{
	int intArr[]={64,25,12,22,11};
	int n1=sizeof(intArr)/sizeof(intArr[0]);
	float floatArr[]={3.4,1.2,5.6,2.8};
	int n2=sizeof(floatArr)/sizeof(floatArr[0]);
	cout<<"Original Integer Array:";
	display(intArr,n1);
	bubbleSort(intArr,n1);
	cout<<"Sorted Integer Array:";
	display(intArr,n1);
	cout<<"\n Original Float Array:";
	display(floatArr,n2);
	bubbleSort(floatArr,n2);
	cout<<"Sorted Float Array:";
	display(floatArr,n2);
	return 0;
}
