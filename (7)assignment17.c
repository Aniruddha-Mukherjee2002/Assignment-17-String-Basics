#include<stdio.h>
void countAll(char a[])
{
    int cn = 0,ca = 0,cs = 0;
    int i = 0;

    while(a[i] != '\0')
    {
        if((a[i]>='a' && a[i]<='z') ||(a[i]>='A' && a[i]<='Z'))
        ca++;
        else if(a[i]>='0' && a[i]<='9')
            cn++;
        else
            cs++;
        i++;
    }
    printf("Total characters in the string is : %d\n",ca);
    printf("Total numbers in the string is : %d\n",cn);
    printf("Total special symbols in the string is : %d\n",cs);
}
int main()
{
    char a[] = {"aniruddhamukherjee2020@gmail.com"};
    countAll(a);
    return 0;
}
