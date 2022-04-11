/**
 * C program to delete all duplicate elements from array
 */

#include <iostream>

#define MAX_SIZE 100 
using namespace std;
int main()
{
    int arr[MAX_SIZE];
    int size;          
    int i, j, k;      

    cout<<"Enter size of the array : "<<endl;
    cin>>size;

    cout<<"Enter elements in array : "<<endl;
    for(i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
           
            if(arr[i] == arr[j])
            {
               
                for(k=j; k < size - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }

                
                size--;

                
                j--;
            }
        }
    }
   
    cout<<endl<<"Array elements after deleting duplicates : ";
    for(i=0; i<size; i++)
    {
        cout<<"  "<<arr[i];
    }

    return 0;
}
