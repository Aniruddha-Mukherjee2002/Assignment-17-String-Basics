
#include<stdio.h>
#include<ctype.h>
void lower(char a[])
{
    int i = 0;
    while(a[i] != '\0')
    {
        a[i] = toupper(a[i]);
        i++;
    }
}
int main()
{
    char a[] = {"ronaldo"};
    lower(a);
    printf("%s",a);
    return 0;
}
