#include<stdio.h>
#include<conio.h>

int max(int a[], int n);
int min(int a[], int n);

void main(){
    int a[100],n,i,maxi,mini;
    clrscr();
    printf("Enter the number of elements ");
    scanf("%d",&n);
    printf("Enter the elements of array ");
    for(i=0;i<n;i++)
    {
        scanf("%d \n",&a[i]);
    }
    maxi = max(a,n);
    mini = min(a,n);
    printf("\nMaximum element : %d",maxi);
    printf("\nMinimum element : %d",mini);
    getch();
}

int max(int a[],int n){
    int maxo=0,i=0;
    if(i<n){
        if(maxo < a[i]){
           maxo=a[i];
        }
        i++;
        max(a,n);
    }
    return maxo;
}

int min(int a[],int n){
    int mino=999,i=0;
    if(i<n){
        if(mino > a[i]){
            mino=a[i];
        }
        i++;
        min(a,n);
    }
    return mino;
}