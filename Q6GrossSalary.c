//Gross Salary is the net salary that the employer receives without any taxes 
// D.A = dearness Allowance-> given to cope with cost of living
// HRA = house rent allowance->rented accomdation
//D.A = 5% of BS
//HRA = 10% of BS
#include<stdio.h>
int main(){
int BS;
printf("Enter Basic Salary");
scanf("%d",&BS);
int DA,HRA,GS;
DA = (5*BS)/100;
HRA = (10*BS)/100;
GS = DA + HRA + BS;
printf("The Gross Salary of the Employee is: %d",GS);
return 0;
}