#include<stdio.h>
void Sort(char a[],int size)
{
    char temp;
    int i = 0;

    for(int i = 0; i < size-1; i++)
    {
        for(int j = 0; j < size-i-1;j++)
        {
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}
int main()
{
    char a[] = {"bcdfgeah"};
    int size = sizeof(a) / sizeof(char);
    printf("Before sorting : \n %s",a);
    Sort(a,size-1);
    printf("\nAfter sorting : \n %s",a);
    return 0;
}
