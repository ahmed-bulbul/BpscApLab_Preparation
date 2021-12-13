//reverse string by recursive method
#include <stdio.h>
void reverseString(char str[]);
int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    reverseString(str);
    printf("\nReversed string: %s", str[0]);
    return 0;
}
void reverseString(char str[])
{

    if (str[0] == '\0')
        return;
    else
    {
        reverseString(str + 1);
        printf("%c", str[0]);
    }
  
}
