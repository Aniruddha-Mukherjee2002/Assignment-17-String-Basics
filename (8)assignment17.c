#include<stdio.h>
void Strcpy(char a[],char b[])
{
    int i =0;
    while(a[i] != '\0')
    {
        b[i] = a[i];
        i++;
    }
}
int main()
{
    char a[] = {"ANIRUDDHA"};
    char b[] = {"aniruddha"};
    Strcpy(a,b);
    printf("%s",b);
    return 0;
}
