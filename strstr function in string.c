strstr

#include<stdio.h>
#include<string.h>
void main()
{
    char str1[20];
    char str2[20];
    char *result;
    printf("\n Enter a String: ");
    gets(str1);
    printf("\n Enter to find that string: ");
    gets(str2);
    result = strstr(str1,str2);

    if(result)
    {
        printf("substring is found");
    }
    else{
        printf("Substring is not found");
    }
    
}
