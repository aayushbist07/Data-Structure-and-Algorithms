#include <stdio.h>
int main() {
    int a[100], b[100], sum[100];
    int n, i;
    int *p1, *p2, *p3;

    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    printf("Enter elements of first array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    printf("Enter elements of second array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }
    
    p1 = a;
    p2 = b;
    p3 = sum;
    
    for (i = 0; i < n; i++) {
        *p3 = *p1 + *p2;
        p1++;
        p2++;
        p3++;
    }
    
    printf("Sum of the arrays:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", sum[i]);
    }
    return 0;
}
