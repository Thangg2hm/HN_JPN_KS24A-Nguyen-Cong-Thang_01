#include<stdio.h>
int main(){
	int arr[100];
	int luachon;
	int sophantu;
	do{
		printf("\nMENU\n");
		printf("1.nhap vao so phan tu va gia tri cho mang\n");
		printf("2.in ra gia tri cac phan tu trong mang\n");
		printf("3.tim gia tri nho nhat va lon nhat trong mang\n");
		printf("4.in ra tong cua tat ca phan tu\n");
		printf("5.them vao mot phan tu vao cuoi mang\n");
		printf("6.xoa phan tu tai mot vi tri cu the(nguoi dung nhap vi tri)\n");
		printf("7.sap xep mang theo thu tu giam dan(bubble sort)\n");
		printf("8.nhap vao 1 phan tu va tim kiem xem no co trong mang hay khong(linear search)\n");
		printf("9.in ra toan bo so nguyen to trong mang\n");
		printf("10.sap xep mang theo thu tu tang dan\n");
		printf("11.thoat\n");
	    	printf("moi ban nhap vao lua chon cua minh:");
	     	scanf("%d",&luachon);
		switch(luachon){
			case 1:
				printf("nhap vao so phan tu cua mang:");
				scanf("%d",&sophantu);
				for(int i=0;i<sophantu;i++){
					printf("arr[%d]=",i);
					scanf("%d",&arr[i]);
				}    break;
				
			case 2:
			    printf("gia tri cac phan tu trong mang la:");
				for(int i=0;i<sophantu;i++){
					printf("%d,",arr[i]);
				}	break;
				
			case 3:
				if(sophantu>0){
					int max=arr[0];
					for(int i=0;i<sophantu;i++){
					 if(arr[i]>max){
					  max=arr[i];
				       }
			     	}
				printf("phan tu lon nhat cua mang la:%d",max);
		    	}
				if(sophantu>0){
					int min=arr[0];
					for(int i=0;i<sophantu;i++){
						if(arr[i]<min){
						min=arr[i];
			        	}
			    	} 
				printf("gia tri nho nhat cua mang la:%d",min);
					
				}  break;
					
			 case 4: 
                int tong = 0;
                 for (int i=0;i<sophantu;i++) {
                       tong += arr[i];
               }
                   printf("Tong cac phan tu: %d\n", tong);
                   break;
                   
               case 5:
               	int phantu;
                printf("Nhap phan tu can them: ");
                scanf("%d",&phanTu);
                arr[sophantu] = phantu;
                sophantu++;
                 break;
             
                  
         
             
            
				
					
				  
				   
		
				
		      default:
		      	printf("ket thuc chuong trinh!")
		       
		   
		
	} while(luachon!=11);
	return 0;
}
