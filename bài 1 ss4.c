#include<stdio.h>
int main(){
int number;
printf("Nhap vao 1 so nguyen:");
scanf("%d", &number);
if(number % 3 ==0 && number % 5 == 0){
	printf("la so chia het cho 3 và 5\n", number);
	}else{	
	printf("khong la so chia het cho 3 va 5\n", number);
	}
}																									
	
	

	

