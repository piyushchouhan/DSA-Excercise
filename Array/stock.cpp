#include<iostream>
using namespace std;

int Stock_sale(int arr[],int size)
{
    int min = arr[0], max_profit = 0;
    for(int i=0;i < size; i++ )
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
        else if (arr[i] - min > max_profit)
            	max_profit = arr[i] - min;
    }
    return max_profit;
}

int main(void)
{
    int arr[]={2,4,7,2,8,1,2,9,2,6};
    int size = *(&arr+1)-arr;
    cout << "The Value of my Money is: "<< Stock_sale(arr, size) ;

}


