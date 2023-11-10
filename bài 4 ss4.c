#include<stdio.h>
int main(){
int month, year; 
printf("Nhap nam va thang bat ki");
scanf("%d", &month, &year);
switch(month){
	case 1 : case 3 : case 5 : case 7 : case 8 : case 10 :
		printf("nhung thang nay la 31 ngay");
	break;
	case 4: case 6: case 9: case 11:
		printf("nhung thang nay la 39 ngay");
	break;
	case 2:
		if(year%4 == 0){
			printf("nam nhuan co 29 ngay");
			}
		else{
			printf("nam kh phai nam nhuan co 28 ngay");
		}
		break;
	}
}		



