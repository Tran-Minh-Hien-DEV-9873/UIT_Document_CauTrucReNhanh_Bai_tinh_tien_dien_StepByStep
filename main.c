#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int soVon = 120;
	printf("Chuong Trinh Tinh tien dien \n");
	if(soVon < 100)
	{
		int ketQua100 = soVon*1000;
		int ketQuaTongHop = ketQua100;
		printf("Tong so tien la: %d", ketQuaTongHop);
	}
	else
	{
		if(soVon >= 100 && soVon < 200)
		{
			int ketQua100 = 100*1000;
			int ketQua200 = (soVon-100)*1500;
			int ketQuaTongHop = ketQua100 + ketQua200;
			printf("Tong so tien la: %d", ketQuaTongHop);
		}
		else
		{
			if(soVon >= 200)
			{
				int ketQua100 = 100*1000;
				int ketQua200 = 200*1500;
				int ketQua300 = (soVon-200)*2500;
				int ketQuaTongHop = ketQua100 + ketQua200 + ketQua300;
				printf("Tong so tien la: %d", ketQuaTongHop);
			}
			else
			{
				printf("Ket qua ko hop le");
			}
		}
	}
	return 0;
}
