#include<stdio.h>              
#include<stdlib.h>
void is_triangle(int,int,int);  
int main(void){          
	int s1,s2,s3;
	printf("請輸入邊長\n");
	scanf("%d %d %d",&s1,&s2,&s3);
	is_triangle(s1,s2,s3); 
}
void is_triangle(int s1,int s2,int s3){
	int array[]={s1,s2,s3};  
	int box;    
	for(int i=0;i<3;i++)
		for(int j=i+1;j<3;j++){
			if(array[j]>array[i]){  
				box=array[i];
				array[i]=array[j];
				array[j]=box;
			}
		}
	if((array[1]+array[2])>array[0]){  
		printf("是三角形");
	}
	else{
		printf("不是三角形");
	}
}
