#include <stdio.h>
int main(void)
{

    float distance,dis_m,dis_cm,dis_f,dis_i;
    printf("Enter the distance (KM):\n");
    scanf("%f",&distance);
        printf("\n");
    dis_m=distance*1000;
    dis_cm=distance*100000;
    dis_f=distance*3280.84;
    dis_i=distance*39370.1;

    printf("Distance in meter is:%f\n",dis_m);
    printf("Distance in centi-meter is:%f\n",dis_cm);
    printf("Distance in feet is:%f\n",dis_f);
    printf("Distance in inch is:%f\n",dis_i);
    return 0;
}