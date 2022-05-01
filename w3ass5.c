#include <stdio.h>
int largest(int x[], int y)
{
    int j, p;
    p = x[0];
    for (j = 1; j < y; j++)
    {
        if (p < x[j])
        {
            p = x[j];
        }
        
    }
    return p;
}
int main()
{
    int a[80], b, c, i;
    printf("Enter the size of an array\n");
    scanf("%d", &b);

    for (i = 0; i < b; i++)
    {

        printf("Enter the element of array\n");

        scanf("%d", &a[i]);
    }
    c = largest(a, b);
    printf("Largest number is %d\n", c);
    return 0;
}