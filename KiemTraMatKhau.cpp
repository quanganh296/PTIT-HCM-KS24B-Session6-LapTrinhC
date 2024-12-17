#include<stdio.h>
#include<string.h>
using namespace std;
int main(){
char n[20];
const char CorrectPass[]="YeuHutao";
printf("Moi ban nhap mat khau: ");
scanf("%20s",&n);
if(strcmp(n,CorrectPass)==0)
{
	printf("Mat khau dung");
	
}
else{
	printf("Mat khau sai");
}

	return 0;
}
