#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int *a1=calloc(5,sizeof(int));
int *a2=calloc(5,sizeof(int));
int *sum=calloc(5,sizeof(int));

 printf("Enter the elements of 1st array: \n");
 for (int i = 0; i < 5; i++) {
        scanf("%d", &a1[i]);
    }

    printf("Enter the elements of 2nd array: ");
 for (int i = 0; i < 5; i++) {
        scanf("%d", &a2[i]);
    }

    for(int i=0;i<5;i++)
    {
*(sum+i)=*(a1+i)+*(a2+i);
    }

    printf("The sum of array is:\n");
    for(int i=0;i<5;i++)
    {
        printf("%d \t",sum[i]);
    }
    return 0;
}