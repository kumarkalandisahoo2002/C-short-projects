//finding LCM

#include <stdio.h>
int lcm(int,int);
int main(void)
{
    int x,y=1;
    printf("Enter numbers to find their LCM (press 0 to exit):\n");
while (1)
{
    scanf("%d",&x);
    if(x<1)
    break;
    else if(x>y)
    y=lcm(x,y);
    else
    y=lcm(y,x);
}
printf("LCM of these numbers is :%d",y);
    return 0;
}
int lcm(int x,int y)
{
    int temp=x;
    while (1)
    {
        if(temp%y==0 && temp%x==0)
        break;
        temp++;
    }
    return temp;
    
}