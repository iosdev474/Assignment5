#include<stdio.h>
int main(){
	int m1,n1,m2,n2,i,j,k;
	scanf("%d%d%d%d",&m1,&n1,&m2,&n2);
	if(n1!=m2)
		return 1;
	int arr1[m1][n1];
	int arr2[m2][n2];
	int arr3[m1][n2];
	for(i=0;i<m1;i++){
		for(j=0;j<n1;j++){
			scanf("%d",&arr1[i][j]);
		}
	}
	for(i=0;i<m2;i++){
		for(j=0;j<n2;j++){
			scanf("%d",&arr2[i][j]);
		}
	}
	for(i=0;i<m1;i++){
		for(j=0;j<n2;j++){
			arr3[i][j]=0;
		}
	}
	for(i=0;i<m1;i++){
		for(j=0;j<n2;j++){
			for(k=0;k<m2;k++){
				arr3[i][j]+=arr1[i][k]*arr2[k][j];
			}
		}
	}
		
		printf("\n\n\tOUTPUT:\n");
		for(i=0;i<m1;i++){
			printf("\t");
			for(j=0;j<n2;j++){
				printf("%d ",arr3[i][j]);
			}printf("\n");
	}
	return 0;
}
