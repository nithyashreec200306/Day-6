#include <stdio.h>

int main()
{
    int arr[]={2,5,8,9,6};
    int length=sizeof(arr)/sizeof(arr[0]);
    printf("%d\n",length);
   for(int i=0;i<length;i++){
        printf("%d  ",arr[i]);
    }
    return 0;
    }
