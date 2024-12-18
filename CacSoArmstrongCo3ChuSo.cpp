#include <stdio.h>
#include <math.h>
int main() {
   printf("Cac so Armstrong co 3 chu so la: \n");
    for(int i=100;i<=999;i++){
	
    int thousands =i/100;
    int hundreds =(i/10)%10;
    int ones =i%10;
    int sum= pow(thousands,3)+pow(hundreds,3)+pow(ones,3);
    if (sum==i){
    	printf(" %d",sum);
	}}
    return 0;
}

