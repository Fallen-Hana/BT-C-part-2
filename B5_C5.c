#include <stdio.h> 
int main() {
  	int n,a[100],b[100],c[100],d[100];
  	printf("moi ban nhap phan tu : ");
  	scanf("%d",&n);
   	for(int i = 0;i < n; i++){
        printf("\n a[%d] = ", i);
        scanf("%d", &a[i]);
    	}
    for(int i = 0;i < n; i++){
        printf("\n b[%d] = ", i);
        scanf("%d", &b[i]);
    }
    for(int i = 0;i < n; i++){
        printf("\n c[%d] = ", i);
        scanf("%d", &c[i]);
    }
    for(int i = 0;i < n; i++){
        printf("\n d[%d] = ", i);
        scanf("%d", &d[i]);
    }
    printf("\n day thu nhat la \n");
  	for(int i = 0;i < n; i++){
		printf("\t a[%d]=%d",i,a[i]);
	}
	 printf("\n day thu hai la \n");
	for(int i = 0;i < n; i++){
		printf("\t b[%d]=%d",i,b[i]);
	}
	 printf("\n day thu ba la \n");
	for(int i = 0;i < n; i++){
		printf("\t c[%d]=%d",i,c[i]);
	}
	 printf("\n day thu tu la \n");
	for(int i = 0;i < n; i++){
		printf("\t d[%d]=%d",i,d[i]);
	}
	int max1=a[0],max2=b[0],max3=c[0],max4=d[0],min1=a[0],min2=b[0],min3=c[0],min4=d[0];
	for (int i = 0 ;i<n;i++){
		if (a[i]>max1){
			max1 = a[i] ;
			
		} 
	}
	for (int i = 0 ;i<n;i++){
		if (a[i]<min1){
			min1 = a[i] ;
			
		} 
	}
	for (int i = 0 ;i<n;i++){
		if (b[i]>max2){
			max2 = b[i] ;
			
		}
	}
	for (int i = 0 ;i<n;i++){
		if (b[i]<min2){
			min2 = b[i] ;
			
		} 
	}
	for (int i = 0 ;i<n;i++){
		if (c[i]>max3){
			max3 = c[i] ;
			
		} 
	}
	for (int i = 0 ;i<n;i++){
		if (c[i]<min3){
			min3 = c[i] ;
			
		} 
	}
	for (int i = 0 ;i<n;i++){
		if (d[i]>max4){
			max4 = d[i] ;	
		} 
	}
	for (int i = 0 ;i<n;i++){
		if (d[i]<min4){
			min4 = d[i] ;	
		} 
	}
	int Max=max1,Max1=max3;
	if (max1<max2){
		Max=max2;
	}
	if(max3<max4){
		Max1=max4;
	}
	int MAX=Max;
	if(Max<Max1){
		MAX=Max1;
	}
	int Min=min1,Min1=min3;
	if (min1>min2){
		Min=min2;
	}
	if(min3>min4){
		Min1=min4;
	}
	int MIN=Min;
	if(Min>Min1){
		MIN=Min1;
	}
	printf("\n Max trong 4 day so la % d ",MAX);
	printf("\n Min trong 4 day so la %d ",MIN);
}