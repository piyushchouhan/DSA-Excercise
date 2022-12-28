#include<stdio.h>
#include<string.h>

int main(void)
{
    char name[10] = "Ayush";
    int n = strlen(name);
     for(int i = 0; i < (n/2); i++)
    {
        int temp = name[i];
        name[i] = name[n-1-i];
        name[n-1-i] = temp;
    }
     for( int i = 0; i<n; i++)
    {
        printf("%c",name[i]);
     }  
     return 0;

}