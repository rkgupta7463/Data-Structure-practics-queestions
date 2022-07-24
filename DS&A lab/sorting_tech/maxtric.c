#include <stdio.h>

void main()
{
    int i, j, m1[3][3], m2[3][3], m3[3][3];
    // printf("Enter the size of first maxtric and second maxtric :\n");
    // scanf("%d%d",&n1,&n2);

    printf("Elements of first matrix: \n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &m1[i][j]);

    printf("Elements of second matrix: \n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &m2[i][j]);

    // printf("Matrix 1st:- \n");
    // for (i = 0; i < 3; i++)
    // for (j = 0; j < 3; j++)
    //     printf("%d\t",m1[i][j]);

    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            m3[i][j] = m1[i][j] + m2[i][j];

    printf("Matrix multiplied:- \n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            printf("%d", m3[i][j]);
}