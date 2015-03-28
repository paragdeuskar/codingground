#include <stdio.h>

int main()
{
    float Mark1,Mark2,Mark3;
    float Average ;
    Mark1 = 0;
    Mark2 = 0;
    Mark3 = 0;
    Average = 0;
    printf("Please enter the marks of Maths: ");
    scanf("%f", &Mark1);
    printf("Please enter the marks of Science: ");
    scanf("%f", &Mark2);
    printf("Please enter the marks of English: ");
    scanf("%f", &Mark3);
    Average= (Mark1 + Mark2+ Mark3)/3.0;
    printf("The average marks is %3.2f \n", Average);
    return 0;
}

