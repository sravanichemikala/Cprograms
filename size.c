#include<stdio.h>
int main()
{
short int si;
int i;
float f;
long int li;
double d;
long double ld;
unsigned int ui;
printf("Enter the values for following formats: si,i,li,ui");
scanf("%d%d%ld%ud",&si,&i,&li,&ui);
printf("%d %d %ld %ud",si,i,li,ui);
printf("Enter the values for following formats: f,d,ld");
scanf("%f%lf%Lf",&f,&d,&ld);
printf("%f %lf %Lf",f,d,ld);
return 0;
}