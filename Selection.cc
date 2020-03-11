#include<iostream>

using namespace std;

int main()
{
    int i,j,asize,loc,hold,min,a[30];
    cout<<"Enter the number of elements:";
    cin>>asize;
    cout<<"\nEnter the elements\n";

    for(i=0;i<asize;i++)
    {
        cin>>a[i];
    }

    for(i=0;i<asize-1;i++)
    {
        min=a[i];
        loc=i;
        for(j=i+1;j<asize;j++)
        {
            if(min>a[j])
            {
                min=a[j];
                loc=j;
            }
        }

        hold=a[i];
        a[i]=a[loc];
        a[loc]=hold;
    }

    cout<<"\nSorted list is as follows\n";
    for(i=0;i<asize;i++)
         {
        cout<<a[i]<<" ";
    }
    return 0;

}
