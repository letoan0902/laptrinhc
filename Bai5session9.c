#include<stdio.h>
int main(){
	int ktra=0;
	while(1){
		int a[100];
		int chon,i,j,b,c,d,m,max,min,sum=0,dem=0;
	    printf("\nMENU\n\n1. Nhap vao mang\n2. Hien thi mang\n3. In ra cac phan tu chan va tinh tong\n4. In ra gia tri lon nhat va nho nhat trong mang\n5. In ra cac phan tu la so nguyen to trong mang va tinh tong\n6. Nhap vao mot so va thong ke trong mang co bao nhieu phan tu do\n7. Them mot phan tu vao vi tri chi dinh\n8. Thoat");
	    printf("\nLua chon cua ban: ");
	    scanf("%d",&chon);
    
    	if (chon==1){
	        ktra = 1;
	        printf("Hay nhap so phan tu muon them: ");
	        scanf("%d",&m);
	        for(i=0;i<m;i++){
		        printf("Phan tu thu %d:",i+1);
		        scanf("%d",&a[i]);
	        }
		}
		if (chon==2){
			if(ktra==0){
				printf("Hay nhap mang truoc khi chon chuc nang khac ");
				continue;
			}
			printf("\nMang hien tai la: ");
			for(i=0;i<m;i++){
				printf("%d ",a[i]);
			}
		}
		if (chon==3){
			if(ktra==0){
				printf("Hay nhap mang truoc khi chon chuc nang khac ");
				continue;
			}
			printf("\nCac phan tu chan la: ");
			for(i=0;i<m;i++){
				if(a[i]%2==0){
					printf("%d",a[i]);
					sum=sum+a[i];
				}
			}
			printf("\nTong bang %d",sum);
		}
		if (chon==4){
			if(ktra==0){
				printf("Hay nhap mang truoc khi chon chuc nang khac ");
				continue;
			}
			max = a[0];
			for (i=0;i<m;i++){
				if (max<a[i]){
					max=a[i];
				}
			}
			printf("\nSo lon nhat la: %d",max);
			min=a[0];
			for (i=0;i<m;i++){
				if (min>a[i]){
					min=a[i];
				}
			}
			printf("\nSo be nhat la: %d",min);
		}
		if (chon==5){
			if(ktra==0){
				printf("Hay nhap mang truoc khi chon chuc nang khac ");
				continue;
			}
			printf("So nguyen to trong mang la: ");
			for (i=0;i<m;i++){
				dem=0;
				if(a[i]<2){
					continue;
				}
				for(j=2;j<a[i];j++){
					if(a[i]%2==0){
						dem++;
					}
				}
				if (dem!=0){
					continue;
				}
				printf("%d ",a[i]);
				sum=sum+a[i];
			}
			printf("Tong la: %d",sum);
			
		}
		if (chon==6){
			if(ktra==0){
				printf("Hay nhap mang truoc khi chon chuc nang khac ");
				continue;
			}
			printf("Hay nhap vao mot so: ");
			scanf("%d",&d);
			for(i=0;i<m;i++){
				if (a[i]==d){
					dem++;
				}
			}
			printf("Trong mang co %d so %d", dem, d);	
		}
		if (chon==7){
			if(ktra==0){
				printf("Hay nhap mang truoc khi chon chuc nang khac ");
				continue;
			}
			while(1){
				printf("\nNhap vi tri muon them vao mang: ");
	            scanf("%d",&b);
	            if(b>0&&b<=m){
	    	        break;
		        }
			} 
	        printf("Nhap gia tri muon them vao mang: ");
	        scanf("%d",&c);	
	        b=b-1;
	        for (i=m;i>b;i--){
		        a[i]=a[i-1];
	        }
	        a[b]=c;
	        printf("\nMang hien tai la: ");
	        for (i=0;i<=m;i++){
		        printf("%d",a[i]);
	        }
	    }
		if (chon==8){
			break;	
		}	
    }
    return 0;
}
