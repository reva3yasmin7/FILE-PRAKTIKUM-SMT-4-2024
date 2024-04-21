#include <stdio.h>

int main(){
	//Kamus lokal
	int i;
	//Algoritma
	printf("Masukkan nilai integer i : ");
	scanf("%d", &i);
	if (i==0){
		printf("i bilanggan nol (0)\n");
	}
	else if(i<0){
		printf("i bilangan negatif\n");
	}
	else{
		printf("i bilangan positif\n");
	}
	return 0;
}
