#include<stdio.h>
int main(){
	int ktra=0;
	while(1){
		int chon,i,b,c,m;
		int a[100];
	    printf("\nMENU\n\n1. Nhap vao mang\n2. Hien thi mang\n3. Them phan tu\n4. Sua phan tu\n5. Xoa phan tu\n6. Thoat");
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
			if (ktra==0){
				printf("Hay nhap mang roi moi chon chuc nang khac");
				continue;
			}
			printf("\nMang hien tai la: ");
			for(i=0;i<m;i++){
				printf("%d ",a[i]);
			}
		}
		if (chon==3){
			if (ktra==0){
			    printf("Hay nhap mang roi moi chon chuc nang khac");
			    continue;
		    }
			while (1){
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
            for (i=0;i<=m;i++){
		        printf("%d",a[i]);
	        }			
		}
		if (chon==4){
			if (ktra==0){
				printf("Hay nhap mang roi moi chon chuc nang khac");
				continue;
			}
			printf("\nNhap vi tri can sua: ");
	        scanf("%d",&b);
	        printf("Nhap gia tri sau khi sua: ");
	        scanf("%d",&c);	
	        b=b-1;
	        a[b]=c;
	        printf("Mang sau khi sua la: ");
	        for (i=0;i<m;i++){
		    printf("%d",a[i]);
	        }
		}
		if (chon==5){
			if (ktra==0){
				printf("Hay nhap mang roi moi chon chuc nang khac");
				continue;
			}			
			while (1){
		        printf("\nNhap vi tri muon xoa khoi mang: ");
	            scanf("%d",&b);
	            if(b>0&&b<=m){
	    	    break;
		        }
	        }
	        b=b-1;
	        for (i=b;i<m;i++){
		    a[i]=a[i+1];
	        }
	        printf("Mang sau khi da xoa la: ");
	        for (i=0;i<(m-1);i++){
		        printf("%d",a[i]);
	        }			
		}
		if (chon==6){
			break;
		}
	}
	return 0;
} 
