#include<stdio.h>
int max(int num1,int num2,int num3);//AEM:59641
int min(int num1,int num2,int num3);
int main()
{
     start:
    int result;
    int a,b,c;
    printf("Δώστε τρεις αριθμούς: ");
    result=scanf(" %d , %d , %d", &a, &b, &c);
    int res1=max(a,b,c);
    int res2=min(a,b,c);
    if(a==c || b==c || a==b){
        printf("Μή έγκυροι αριθμοί\n");
        goto start;
    }
    else{
    printf("%d, %d",res2, res1);
    }
    return 0;
}
int max(int num1,int num2,int num3)
{
    int maximum;
    maximum=num1;
    if(num2>maximum){
        maximum=num2;
    }
    if(num3>maximum){
        maximum=num3;
    }
    return(maximum);
}
int min(int num1,int num2,int num3)
{
    int minimum;
    minimum=num1;
    if(num2<minimum){
        minimum=num2;
    }
    if(num3<minimum){
        minimum=num3;
    }
    return(minimum);
}
