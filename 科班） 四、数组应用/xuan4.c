//#define  _CRT_SECURE_NO_WARNINGS  1
//#pragma warning(disable:6031)
////数组本身碰到空格会发生上面反应？
////用数组存字符串后有空格又什么反应？
////密码那个地方有什么反应？
//
//#include<stdio.h>
//
//int main()
//{
//
//
//}
//

//抄袭
//#include <stdio.h>
//int main() {
//    int i, j, q = 0, p = 0, z = 0, o = 0, n = 0;
//    char a[3][80] = { 0 };
//    for (i = 0; i < 3; i++) {
//        printf("第%d行:", i + 1);
//        gets(a[i]); //直接字符字符 getchar那种方式也行 不过没这个看着简便
//    }
//    for (i = 0; i < 3; i++) {
//        for (j = 0; a[i][j] != '\0'; j++) 
//        {
//            if (a[i][j] >= 'A' && a[i][j] <= 'Z') 
//            {
//                q++;
//            }
//            else if (a[i][j] >= 'a' && a[i][j] <= 'z') 
//            {
//                p++;
//            }
//            else if (a[i][j] >= '0' && a[i][j] <= '9') 
//            {
//                z++; 
//            }
//            else if (a[i][j] == ' ')
//            {
//                o++; 
//            }
//            else 
//            {
//                n++; 
//            }
//        }
//    }
//    printf("大写字母：%d\n小写字母：%d\n数字：%d\n空格：%d\n其它：%d\n", q, p, z, o, n);
//}