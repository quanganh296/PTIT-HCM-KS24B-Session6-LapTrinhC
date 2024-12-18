#include <stdio.h>
using namespace std;
int main()
{int n,a=0,b=1,next;
printf("Moi ban nhap so nguyen bat ki: ");
scanf(" %d",&n);
printf("Day %d so fibonanci dau tien la: \n",n);
for(int i=1;i<=n;i++)
	{
		if(i==1){
			printf(" %d",a);
		}
		else if(i==2){
			printf(" %d",b);
		}
		else {
			next =a+b;
			printf(" %d",next);
			a=b;
			b=next;
		}
	}
	return 0;
}
