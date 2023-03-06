#include<stdio.h>
int countVowel(char a[])
{
    int i = 0,count = 0;
    while(a[i] != '\0')
    {
        if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o'||a[i]=='u')
            count++;
            i++;
    }
    return count;
}
int main()
{
    char str[] = {"aniruddha"};
    printf("Total count of vowels is : %d",countVowel(str));
    return 0;
}
