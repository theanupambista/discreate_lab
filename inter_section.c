#include <stdio.h>
int main()
{
    int i, j, k = 0;
    int setA[5] = {1, 2, 3, 4, 5};
    int setB[5] = {3, 2, 6, 4, 1};
    int intersection[5];
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (setA[i] == setB[j])
            {
                intersection[k] = setA[i];
                k++;
                break;
            }
        }
    }
    if (k == 0)
    {
        printf("No common elements found");
    }
    else
    {
        printf("The union of above sets is:\n");

        for (i = 0; i < k; i++)
        {
            printf("%d\t", intersection[i]);
        }
    }
}