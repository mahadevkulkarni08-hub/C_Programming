#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    int iNoAbs = 0;

    iNoAbs = (iNo < 0) ? -iNo : iNo;

    for(iCnt = 1; iCnt <= iNoAbs; iCnt++)
    {
        printf("*\t");
    }

    for(iCnt = 1; iCnt <= iNoAbs; iCnt++)
    {
        printf("#\t");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}