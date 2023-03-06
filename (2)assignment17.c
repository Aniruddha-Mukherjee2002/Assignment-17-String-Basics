#include<stdio.h>
int occur(char a[],char ch)
{
    int i = 0,count = 0;
    while(a[i] != '\0')
    {
        if(a[i] == ch)
            count++;
        i++;
    }
    return count;
}
int main()
{
    char a[] = "aniruddha";
    char ch = 'n';
    int res = occur(a,ch);
    printf("%c occurred in the '%s' string by %d time(s).\n",ch,a,res);
    return 0;
}
