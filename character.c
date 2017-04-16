#include<stdio.h>
void main()
{
    char c;
    scanf("%c",&c);  //输入一个大写字母。
    if ((c>='A')&&(c<='Z'))
    //判断该字符是否为大写字母，是则转换为小写字母并输出。
    {
        c+=32;
        printf("%c\n",c);
    }
    else printf("该字符不是大写字母\n");
    //否则，输出“该字符不是大写字母”。
}
