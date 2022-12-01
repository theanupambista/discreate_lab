#include <stdio.h>
// set operation A-B
int main()
{
    int i, j, count = 0, m = 0;
    int setA[5] = {1, 2, 3, 4, 5};
    int setB[5] = {8, 9, 6, 4, 1};
    int difference[5];
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (setA[i] != setB[j])
            {
                count++;
            }
            else
            {
                break;
            }
        }
        if (count == 5)
        {
            difference[m] = setA[i];
            m++;
        }
        count = 0;
    }
    for (int i = 0; i < m; i++)
    {
        printf("%d\t", difference[i]);
    }
}