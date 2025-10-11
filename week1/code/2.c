#include <stdio.h>
int main()
{
    int a;
    printf("请输入0 -1 1其中一个数。") ;
        scanf("%d", &a);
    while (a != -1)
    {
        if (a == 0)
        {
            printf("helloworld\n");
            printf("请输入0 -1 1其中的一个数。");
            scanf("%d", &a);
        }
        else
        {
            printf("HELLOWORLD\n");
            printf("请输入0 -1 1其中的一个数。");
            scanf("%d", &a);
        }
    }
    return 0;
}