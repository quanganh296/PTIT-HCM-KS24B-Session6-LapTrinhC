#include<stdio.h>
using namespace std;
int main(){
	int n[5];
	int temp=0,count=0;
	printf("Moi ban nhap so: \n");
for(int i=1;i<=5;i++)
{   i+1;
	scanf("%d",&n[i]);
	if(n[i]%2==0)
	{
		temp++;
	}
	else
	{
		count++;
	}
}
printf("So chan: %d \n",temp);
printf("So le: %d \n",count);

	return 0;
}
