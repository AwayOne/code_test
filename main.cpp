// #include <stdio.h>

// int main()
// {
//     int a;
//     int n = 10;
//     int sum = 0;
//     while (n--)
//     {
//         scanf("%d", &a);
//         if (a < 0)
//         {
//             sum += a;
//             printf("%d\n", a);
//         }
//     }
//     printf("sum = %d", sum);
//     return 0;
// }
// 1 2 3 4 5 -6 -7 8 9 10
// 34 59 68 80 98 41 54 59 60 13 -1

// #include <stdio.h>

// int main()
// {
//     int grade;
//     int i = 0;
//     int j = 0;
//     int k = 0;
//     int a = 0;
//     int t = 0;
//     while (scanf("%d", &grade), grade != -1)
//     {
//         if (grade < 60)
//             t++;
//         else if (grade < 69 && grade >= 60)
//             a++;
//         else if (grade < 79 && grade >= 70)
//             k++;
//         else if (grade < 89 && grade >= 80)
//             j++;
//         else
//             i++;
//     }
//     printf("90~100: %d\n80~89: %d\n70~79: %d\n60~69: %d\n0~50: %d\n", i, j, k, a, t);
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int grade;
//     int i = 0;
//     int j = 0;
//     int k = 0;
//     int a = 0;
//     int t = 0;
//     while (1)
//     {
//         scanf("%d", &grade);
//         if (grade == -1)
//         {
//             break;
//         }

//         if (grade < 60)
//         {
//             t++;
//         }
//         else if (grade < 69 && grade >= 60)
//         {
//             a++;
//         }
//         else if (grade < 79 && grade >= 70)
//         {
//             k++;
//         }
//         else if (grade < 89 && grade >= 80)
//         {
//             j++;
//         }
//         else
//         {
//             i++;
//         }
//     }
//     printf("90~100: %d\n80~89: %d\n70~79: %d\n60~69: %d\n0~50: %d\n", i, j, k, a, t);
//     return 0;
// }

#include <stdio.h>
int main()
{
    int i = 2;
    while (i)
    {
        char b;
        scanf("%c", &b);
        if (b >= 'A' && b <= 'Z')
        {
            b = b + 32;
        }
        else if (b >= 'a' && b <= 'z')
        {
            b = b - 32;
        }
        printf("%c", b);
        if ('\n' == b)
        {
            break;
        }
    }
    return 0;
}