#include <stdio.h>

int main() {
    int n, i, arr[100];
    printf("Enter no of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for(i = 0; i < n; i++) scanf("%d", &arr[i]);

    printf("Even: ");
    for(i = 0; i < n; i++) if(arr[i] % 2 == 0) printf("%d ", arr[i]);

    printf("\nOdd: ");
    for(i = 0; i < n; i++) if(arr[i] % 2) printf("%d ", arr[i]);

    return 0;
}
