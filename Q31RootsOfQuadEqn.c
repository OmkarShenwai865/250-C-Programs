#include<stdio.h>
#include<math.h>
int main(){
    double a,b,c,discriminant,root1,root2,realpart,Imagpart;

    printf("Enter coefficients of a,b,c");
    scanf("%lf %lf %lf",&a,&b,&c);
discriminant = b*b - 4*a*c;
if(discriminant>0){
    root1 = (-b+sqrt(discriminant))/(2*a);
    root2 = (-b-sqrt(discriminant))/(2*a);
    printf("root1= %.2lf and root2= %.2lf",root1,root2);
}
else if(discriminant==0){
    root1=root2=-b/(2*a);
printf("root1 = %.2lf = root2",root1);
}
else{
    realpart= -b/(2*a);
    Imagpart= sqrt(-discriminant)/(2*a);
    printf("root1= %.2lf + %.2lf and root2= %.2lf - %.2lf",realpart,Imagpart,realpart,Imagpart);
}
return 0;
}