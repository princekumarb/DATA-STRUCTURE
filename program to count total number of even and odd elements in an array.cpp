#include <iostream>
using namespace std;
int main()
{
    int arr[120];
    int i, size, even, odd;
    cout<<"Enter size of the array:- ";
    cin>>size;
    cout<<"Enter elements in array: "<< size;
    for(i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    even = 0;
    odd  = 0;

    for(i=0; i<size; i++)
    {
        
        if(arr[i]%2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

   cout<<"Total even elements:-"<< even<<endl;
   cout<<"Total odd elements:-"<<odd;

    return 0;
}
