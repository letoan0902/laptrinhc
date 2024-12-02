#include <stdio.h>

int main(){
	
	int array[100][100];
	int a,a1,a2;
	int sum=0,product=1,max,maxSum,rowSum;
	do {
		printf("MENU\n");
		printf("1. Nhap kich co va gia tri cac phan tu cua mang\n2. In gia tri cac phan tu cua mang theo ma tran\n3. In gia tri cac phan tu la le va tinh tong\n4. In cac phan tu nam tren duong bien va tinh tich\n5. In cac phan tu nam tren duong cheo chinh\n6. In cac phan tu nam tren duong cheo phu\n7. In ra dong co tong gia tri cac phan tu lon nhat\n8. Thoat\n");
		scanf("%d",&a);
		if (a==1){
			printf("Nhap so dong \n");
			scanf("%d",&a1);
			printf("Nhap so cot \n");
			scanf("%d",&a2);
			array[100][100]=array[a1][a2];
			for (int i=0;i<a1;i++){
				for (int j=0;j<a2;j++){
					printf ("Nhap gia tri phan tu cua array[%d][%d] ",i,j);
					scanf("%d",&array[i][j]);
				}
			}
		}
		if (a==2){
			for (int i=0;i<a1;i++){
				for (int j=0;j<a2;j++){
					printf(" %d ",array[i][j]);
				}
				printf("\n");
			}
		}
		if (a==3){
			for (int i=0;i<a1;i++){
				for (int j=0;j<a2;j++){
					if (array[i][j]%2!=0){
						printf("Gia tri phan tu le la %d \n",array[i][j]);
						sum+=array[i][j];
					}
				}
			}
			printf("Tong la %d \n",sum);
		}
		if (a==4){
			printf ("Cac phan tu duong bien :  ");
			for (int i=0;i<a1;i++){
				for (int j=0;j<a2;j++){
					if (i==0 || i==a1-1 || j==0 || j==a2-1){
						printf ("%d\t",array[i][j]);
						product*=array[i][j];
					}
				}
			}
			printf("Tich la %d \n",product);
		}
		if (a==5){
			for (int i=0;i<a1;i++){
				if (a1==a2){
					printf(" %d \n",array[i][i]);
				} else {
					printf("Chi co the thuc hien khi mang la ma tran vuong\n");
				}
			}
		}
		if (a==6){
			for (int i=0;i<a1;i++){
				if (a1==a2){
					printf(" %d \n",array[i][a1-1-i]);
				} else {
					printf("Chi co the thuc hien khi mang la ma tran vuong\n");
				}
			}
		}
		if (a==7){
			for (int i=0;i<a1;i++){
				max=0;
				for (int j=0;j<a2;j++){
					maxSum+=array[i][j];
				}
				if (maxSum>max){
					max=maxSum;
					rowSum=i;
				}
			}
			printf("Dong co tong lon nhat la dong %d voi tong la %d \n",rowSum,max);
		}
	} while (a!=8);
	return 0;
}
