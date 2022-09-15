#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */
int main()
{
    
    int a, b, c;
    printf("Enter 3 numbers\n");
    scanf("%d %d %d", &a, &b, &c);
    
    if (a > b && a > c) {
        printf("%d is Greater",a);
    }
    else if (b > a && b > c) {
        printf("%d is Greater",b);
    }
    else{
        printf("%d is Greater"d);
    } 
    return 0;
}
