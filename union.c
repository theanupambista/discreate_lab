#include <stdio.h>
int main()
{
    int i, j, k, l = 0, m = 0, n;
    int setA[5] = {1, 2, 3, 4, 5};
    int setB[5] = {8, 9, 6, 4, 1};
    int unionSet[10];
    for (i = 0; i < 5; i++)
    {
        unionSet[i] = setA[i];
    }
    for (j = 0; j < 5; j++)
    {
        for (k = 0; k < 5; k++)
        {
            if (setB[j] == setA[k])
            {
                break;
            }
            else
            {
                l++;
            }
        }
        if (l == 5)
        {

            unionSet[i + m] = setB[j];
            m++;
        }
        l = 0;
    }

    printf("The unionSet of above sets is:\n");

    for (n = 0; n < (i + m); n++)
    {
        printf("%d\t", unionSet[n]);
    }
}