#include <stdio.h>
#include<math.h>
using namespace std;
int main ()
{
	int a,b,c;
	double x=0;
	scanf("%d",&a); 
scanf("%d",&b); 
    scanf("%d",&c); 
	printf("%d^2 + %dx + %d = 0 \n",a,b,c);
	if(a==0) 
	 {
       x = -b/a;
	   printf("Nghiem cua phuong trinh la : %d ",x);
	}
    if(b==0)
    {
        printf("pt vo nghiem hoac vo so nghiem");
    }
    else
    {
        double delta=0,x1=0,x2=0;
        delta = (b*b)-4*a*(c);
        if(delta < 0) {printf("pt vo nghiem");}
        if(delta == 0) { 
            x=  -b/2*a;
            printf("phuong trinh co nghiem la : %.2f", x);}
        if (delta >0) {
            
            x1 = (-b+sqrt(delta))/2*a;
            x2 = (-b-sqrt(delta))/2*a;
            printf("pt co 2 nghiem pb: %.2f va %.2f \n",x1,x2);
         }
    }
	 return 0;
}
