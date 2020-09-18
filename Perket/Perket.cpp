#include<stdio.h>
#include<math.h>
long absolute_value(long n)
{
    if (n < 0)
    {
        n = fabs(n);
    }
    return n;
}
int main()
{
    long num, s[10], b[10], l1, l2, min, sum1 = 1, sum2 = 0, i = 1;
    scanf_s("%ld", &num);
    for (l1 = 0;l1 < num;l1++)
    {
        scanf_s("%ld %ld", &s[l1], &b[l1]);
    }
    min = s[0] - b[0];
    min = absolute_value(min);
    for (l1 = 0;l1 < num;l1++)
    {
        while (i < 10)
        {
            sum1 = s[l1];
            sum2 = b[l1];
            if (absolute_value(sum1 - sum2) < min)
            {
                min = absolute_value(sum1 - sum2);
            }
            for (l2 = l1 + i;l2 < num;l2++)
            {
                sum1 = s[l2] * sum1;
                sum2 = b[l2] + sum2;
                if (absolute_value(sum1 - sum2) < min)
                {
                    min = absolute_value(sum1 - sum2);
                }
            }
            i++;
        }
        i = 1;


    }
    printf("%ld", min);
    return 0;
}