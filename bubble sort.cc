#include<iostream>
using namespace std;
int main()
{
    int arr[100],asize,i,j,hold;
	cout<<"Enter the size of array: ";
	cin>>asize;
	cout<<"Enter array elements: ";

	for(i=0;i<asize;++i)
		cin>>arr[i];

	for(i=1;i<asize;++i)
	{
		for(j=0;j<(asize-i);++j)
			if(arr[j]>arr[j+1])
			{
				hold=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=hold;
			}
	}

	cout<<"Array after bubble sort:";
	for(i=0;i<asize;++i)
		cout<<" "<<arr[i];


    return 0;
}

