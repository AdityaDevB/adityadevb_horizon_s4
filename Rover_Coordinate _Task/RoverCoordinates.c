#include <stdio.h>
#include <math.h>
int main(){
     float x1,y1,x2,y2;
     float d;
     float u,a,v;
     float t1,t2,time,s;

     printf("Enter the origin coordinates(x1,y1) of the rover : ");
     scanf("%f %f",&x1,&y1);
     printf("Enter the destination coordinates(x2,y2) of the rover : ");
     scanf("%f %f",&x2,&y2);
     d= sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));

    
     
     printf("Enter the intial velociity of the rover : ");
     scanf("%f",&u);
     printf("Enter the Acceleration of the rover :");
     scanf("%f",&a);
     printf("Enter the maximum velocity of the rover :");
     scanf("%f",&v);

     if(a<=0 || v<=0){
        printf("Error: Acceleration and Vmax must be positive. \n");
        return 0;
     }

     t1=(v-u)/a;
     s=u*t1+(0.5*a*t1*t1);

     if(s>=d){
        time=(-u+sqrt(u*u+2*a*d))/a;
     }
     else{
        float rem = d-s;
        t2=rem/v;
        time=t1+t2;
     }
     printf("The distance the rover must travel : %.2f \n",d);
     printf("The time taken for the rover to reach the destination : %.2f seconds \n",time);


     return 0;

}