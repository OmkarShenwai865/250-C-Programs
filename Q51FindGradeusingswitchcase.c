#include<stdio.h>
int main(){
    int marks;
    printf("Enter Marks");
    scanf("%d",&marks);
    switch(marks>=85 && marks<=100){
        case 1:
        printf("Grade A");
        break;

        case 0:
        switch(marks>=70 && marks<85){
            case 1:
            printf("Grade B");
            break;

            case 0:
            switch(marks>=55 && marks<70){
                case 1:
                printf("Grade C");
                break;

                case 0:
                printf("Grade D");
                break;
            }
        }
    }
    return 0;
}