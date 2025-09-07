#include <stdio.h>



int main()
{
	int panjang;
	int lebar;
	int luas;
	
	printf("Masukan Panjang = ");
	scanf("%d", &panjang);
	printf("Masukan Lebar = ");
	scanf("%d", &lebar);
	
	luas = panjang*lebar;
	
	printf("Total Luas Persegi Panjang adalah \n%d", luas);
	
	return 0;


}