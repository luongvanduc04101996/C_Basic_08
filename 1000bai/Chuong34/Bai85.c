#include<stdio.h>
void main(){
int n;
printf("Nhap thang:\n");
scanf("%d",&n);
switch(n)
{
case 1:
case 2:
case 3:

    {
        printf("===> Quy 1 <====");
        break;
    }
case 4:
case 5:
case 6:
    {
        printf("===> Quy 2 <====");
        break;
    }
case 7:
case 8:
case 9:
    {
        printf("===> Quy 3 <====");
        break;
    }
case 10:
case 11:
case 12:
    {
        printf("===> Quy 4 <====");
        break;
    }
    default:
    {
        printf("Khong co thang %d",n);
        break;
    }
}
}
