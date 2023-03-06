#include<stdio.h>
void freq(char a[],int size)
{
    int i = 0, j =0,count;
   for(int i = 0; i<size; i++)
   {
       count = 1;
       for(int j = 0; j< size; j++)
       {
           if(i == j)
                continue;
            if(a[i] == a[j])
                count++;

       }
       printf("%c = %d\n",a[i],count);
   }
}
int main()
{
    char a[] = {"Aniruddha"};
    int size = sizeof(a) / sizeof(char);
    freq(a,size-1);
    return 0;
}
