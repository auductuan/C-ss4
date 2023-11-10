#include <stdio.h>
int main(){
	int edge1, edge2, edge3;
	printf ("Nhap 3 canh cua tam giac:");
	scanf ("%d%d%d", &edge1, &edge2, &edge3);
	if (edge1 + edge2 > edge3 && edge1 + edge3 > edge2 && edge3 + edge2 > edge1 ){
		printf("Day la tam giac thuong");
	}
	else if (edge1 == edge2 && edge1 == edge3 && edge3 == edge2){
		printf ("Day la tam giac can");
	}
	else if ((edge1 + edge2)*(edge1 + edge2)==edge3*edge3 && (edge1 + edge3)*(edge1 + edge3)==edge2*edge2 && (edge3 + edge2)*(edge3 + edge2)==edge1*edge1){
		printf ("Day la tam giac vuong");
	}
	else if (edge1 == edge2 && edge1 == edge3 && edge3 == edge2 && (edge1 + edge2)*(edge1 + edge2)==edge3*edge3 && (edge1 + edge3)*(edge1 + edge3)==edge2*edge2 && (edge3 + edge2)*(edge3 + edge2)==edge1*edge1){
	    printf ("Day la tam giac vuong can");	
	}
	else if (edge1 == edge2 == edge3){
		printf ("Day la tam giac deu");
	}
}

