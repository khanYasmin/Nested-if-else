/*program voting Nested-if-else statment*/
#include <stdio.h>
int main()
{
    int age;
    printf("Enter a age\n");
    scanf("%d", &age);
    printf("Your age is %d as you entered\n", age);
    if (age>=1)
    {
        printf("You cannot Vote!\n");
    }
    else if (age >= 18)
    {
        printf("you are young person! you can vote!\n");
    }
    else if (age >= 50)
    {
        printf("you are old person! you can vote!\n");
    }
    else
    {
        printf("your age not allow here!\n");
    }
    return 0;
}