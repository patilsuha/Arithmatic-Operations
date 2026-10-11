#include "demo.h"
int main()
{
    int value1=0,value2=0,ans=0;
    printf("enter first Number:\n");
    scanf("%d",&value1);
    printf("enter second Number:\n");
    scanf("%d",&value2);

    ans=addition(value1,value2);
    printf("addition is:%d\n",ans);

    
    ans=substraction(value1,value2);
    printf("substraction is:%d\n",ans);
    
    ans=multiplication(value1,value2);
    printf("multiplication is:%d\n",ans);
    
    ans=division(value1,value2);
    printf("division is:%d\n",ans);
    
}