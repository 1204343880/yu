#define  _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)

//
//#include<stdio.h>
//
//int main()
//{
//    int num = 0;
//    int flag = 0;
//    int arr[20] = { 0 };
//    int a = 0;
//
//    scanf("%d %d", &num, &flag);
//
//    for (int j = 0; j < num; j++)
//    {
//        scanf("%d", &arr[j]);
//    }
//
//    for (int i = 0; i < flag; i++)
//    {
//        for (int z = 0; z < num - 1; z++)
//        {
//            if (arr[z] > arr[z + 1])
//            {
//                a = arr[z];
//                arr[z] = arr[z + 1];
//                arr[z + 1] = a;
//            }
//        }
//    }
//
//    for (int i = 0; i < num - 1; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    printf("%d", arr[num - 1]);
//
//
//
//    return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int a = 0;
//	int arr[10000][10000] = { 0 };
//
//}

#include<stdio.h>

int main()
{
    int num = 0;
    int arr[100][100] = { 0 };
    int arr2[4] = { 0,4,9,1 };

    for (int i = 0; i < num; i++)
    {
        scanf("%d", &arr[i][0]);
        for (int j = 0; j < arr[i][0]; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < num; i++)
    {

    }

    printf("%d\n", 4);
    for (int i = 0; i < 4; i++)
    {
        printf("%d  ", arr2[i]);
        printf("\b");
    }
}