#include <stdio.h>
int main(){
	int n,a[100005],i,j,temp;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}for(int i=0;i<n;i++){
		for(int j=n-1;j>i;j--){
			if(a[j]<a[j-1]){
				temp=a[j];
				a[j]=a[j-1];
				a[j-1]=temp;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}printf("\n");
	return 0; 
}
