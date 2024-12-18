#include <stdio.h>
#include <math.h>
int main() {
  int n,num=0;
  printf("Moi ban nhap so nguyen bat ki: ");
  scanf("%d",&n);
  if(n<2){
  	printf("%d ko phai la so nguyen to",n);
  	return 0;
  }
  for(int i=1;i<=sqrt(n);i++){
  	if(n%i==0){
  		num++;
  		break;
	  }}
	  if(num=1){
	  
	  printf("%d ko phai la so nguyen to",n);
}
else{
  	printf("%d la so nguyen to",n);
  }
    return 0;
}

