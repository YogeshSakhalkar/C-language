#include<stdio.h>
void main(){
	int a[10][10],i,j,sum=0,sum1=0,sum3=0;
	printf("Enter the input matrix");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&a[i][j]);
		}
	}

	for(i=0;i<3;i++){
				for(j=0;j<3;j++){
					printf("%d   ",a[i][j]);
				}
				printf("\n");
			}			
		
			printf("\n\n\n");
						for(i=0;i<3;i++){
							sum=0;
							for(j=0;j<3;j++){
								if(j<=2){
									printf("%d   ",a[i][j]);
									sum=sum+a[i][j];
								}else
									break;
							}
							a[i][j]=sum;
							printf("%d ",a[i][j]);
							printf("\n");

						}
						
					
					for(j=0;j<3;j++){
						sum1=0;
					for(i=0;i<3;i++){
						if(i<=2){
							sum1=sum1+a[i][j];
						}else
							break;
				}
				a[i][j]=sum1;
				printf("%d  ",a[i][j]);

				if(j==3){
				for(i=3;i<=3;i++){
				for(j=0;j<3;j++){
					sum3=sum3+a[i][j];

				}
				a[i][j]=sum3;
				printf("%d",a[i][j]);
				}
			}
	
		}
}
