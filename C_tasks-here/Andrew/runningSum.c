#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, sum = 0, i, a;

    printf("Stop after n_sums. n = : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Add another number: ");
        scanf("%d", &a);
        if (a > 0)
        {
            sum = sum + a;
        }
        else
        {
            printf("%d\n", sum);
            break;
        }
    }

    printf("%d\n", sum);
    return 0;
}
