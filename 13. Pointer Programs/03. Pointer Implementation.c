#include<stdio.h>
#include<conio.h>

int main()
{
    int iNo = 21, *iPtr1 = &iNo, *iPtr2 = &iNo;

    printf("\n Value of iNo Using its Pointer iPtr1 = %d",*iPtr1);
    printf("\n Address of iNo Using iPtr1 = %d",iPtr1);
    printf("\n Address of iPtr1 = %d",&iPtr1);

    printf("\n Value of Variable Using its Pointer iPtr2 = %d",*iPtr2);
    printf("\n Address of iNo Using iPtr2 = %d",iPtr2);
    printf("\n Address of iPtr2 = %d", &iPtr2);
    getch();

    iNo = 55;
    printf("\n==================================================================\n");

    printf("\n New Value of iNo its Pointer iPtr1 = %d",*iPtr1);
    printf("\n New Value of Variable Using its Pointer iPtr2 = %d",*iPtr2);
    printf("\n==================================================================\n");
    getch();
    *iPtr1 = 101;

    printf("\n New Value of iNo = %d", iNo);
    printf("\n Value of iNo Using its Pointer iPtr1 = %d",*iPtr1);
    printf("\n Value of Variable Using its Pointer iPtr2 = %d", *iPtr2);
    printf("\n==================================================================\n");

    getch();
    return 0;

}
