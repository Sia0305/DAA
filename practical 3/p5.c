#include<stdio.h>
int main()
{
    int i , j , temp;
    int arr[5][2] = {{2,4},{1,2},{7,8},{5,6},{6,8}};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(i = 0 ; i < n-1 ; i++)
    {
        for(j = 0 ; j < n-i-1 ; j++)
        {
            if (arr[j][0] > arr[j+1][0])
            {
                temp = arr[j][0];
                arr[j][0] = arr[j+1][0];
                arr[j+1][0] = temp;

                temp = arr[j][1];
                arr[j][1] = arr[j+1][1];
                arr[j+1][1] = temp;
            }
        }
    }
    int flag;
    for(int i = 0 ; i<n ; i++)
    {
        if(arr[j][0] > arr[i+1][0])
        {
            if(flag == 0)
            {
                return 0;
            }

        }
        return 1;
    }
}