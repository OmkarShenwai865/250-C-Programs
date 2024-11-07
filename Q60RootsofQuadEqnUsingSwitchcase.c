#include<stdio.h>
#include<math.h>
int main(){
float a,b,c,realpart,imagpart,discriminant,root1,root2;
printf("Enter the coefficients of a,b,c");
scanf("%f %f %f",&a,&b,&c);

discriminant= (b*b)-4*a*c;
switch((discriminant>0) - (discriminant<0)){
case 1:
root1 = (-b +sqrt(discriminant))/(2*a);
root2= (-b -sqrt(discriminant))/(2*a);
printf("Roots are real and distinct\n");
printf("Root1 = %.2f\n",root1);
printf("Root2= %.2f\n",root2);
break;

case 0:
root1 = root2 = -b/(2*a);
printf("roots are real and same\n");
printf("Root1=Root2= %.2f\n",root1);
break;

case -1:
realpart = -b/(2*a);
imagpart = sqrt(-discriminant)/(2*a);
printf("Roots are complex and distinct\n");
printf("Root1= %.2f + %.2fi\n",realpart,imagpart);
printf("Root2= %.2f - %.2fi\n",realpart,imagpart);
break;
}
return 0;
}