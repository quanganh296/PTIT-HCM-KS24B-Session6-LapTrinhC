#include <stdio.h>
#include <math.h>

int main() {
	int n=5;
	int sum=0;
     printf("Moi ban nhap vao 5 so: ");
    for(int i=1;i<=n;i++)
    {
    scanf("%d",&i);
    if(i%2!=0)
    { 
    	sum+=i;
    	
	}
	
	}printf("%d",sum);
    return 0;
}

