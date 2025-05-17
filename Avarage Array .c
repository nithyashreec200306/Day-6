
#include <stdio.h>

int main()
{
    int size,sum=0;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    int avg=sum/size;// for getting decimal value use*/  [float avg=sum/size]
    printf("sum=%d\navg=%d\n",sum,avg);//printf("sum=%f\navg=%f\n",sum,avg);
    return 0;
}