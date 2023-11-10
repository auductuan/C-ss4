#include<stdio.h>
int main(){
	float arkHtml, markCss, markJavascript;
	printf("Nhap so diem html, css, javascript cua sinh vien:");
	scanf("%f%f%f",&arkHtml, &markCss, &markJavascript);
	float avgMark= (arkHtml + markCss + markJavascript) / 3; 
	if(avgMark<5){
		printf("Xep loai sinh vien: Yeu");
	}else if(avgMark <7){
	   printf("Xep loai sinh vien: trung binh");
	}else if(avgMark<8){
		printf("Xep loai sinh vien: kha");
	}else if(avgMark <9){
		printf("Xcep loai sinh vien: gioi");
	}else{
		printf("Xep loai hoc sinh vien: xuat sac");
	}
	
}
