#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    int n;
    setlocale(LC_ALL,"Rus");
    printf("¬ведите кол-во элементов массива: \n");
    scanf("%d", &n);
    int a[n];
    int i=0, k = 0, m=0, f=n;
    printf("¬ведите массив: \n");
    for (i = 0; i<f; i++)
    {
        scanf("%d", &a[i]);
    }
    for (k=0; k<f; k++)
    {

        for (m=0; m<k; m++)
        {
            if (a[k]==a[m])
            {
                for (i=k; i<n; i++)
                {
                    a[i] = a[i+1];
                }

        a[n-1]=0;
        k=k-1;
        f-=1;
        break;
            }
        }
    }




    for (i = 0; i<n; i++)
    {
        printf("%4d", a[i]);
    }

    return 0;
}
