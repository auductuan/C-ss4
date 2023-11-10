#include<stdio.h>
int main(){
	int so_moi, so_cu;
	printf("Nhap chi so_moi va so_cu:");
	scanf("%d%d", &so_moi, &so_cu);
	int so_dien = so_moi - so_cu;
	if(0 <= so_dien < 50){
		printf("Gia dien la 10000");
	}	
	 else if(50 <= so_dien < 100){
		printf("Gia dien la 15000");
	}
	else if(100 <= so_dien < 150){
		printf("Gia dien la 20000");
	}
	else if(150 <= so_dien < 200){
		printf("Gia dien la 25000");
	}
	else if(200 <= so_dien){
		printf("gia dien la 30000");
	}
}
		
		
	
	
