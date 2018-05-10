#include <stdio.h>
#include <string.h>

#define NUMBER 5
#define NAME_LEN 64

typedef struct {
	char name[NAME_LEN];
	int height;
	float weight;
} Student; 

void swap_Student(Student *x, Student *y){

	Student temp = *x;
	*x = *y;
	*y = temp;

}

void sort_by_height(Student a[], int n){

	int i, j;

	for(i=0;i<n-1;i++){
		for(j=n-1;j>i;j--){
			if(a[j-1].height > a[j].height){
				swap_Student(&a[j-1], &a[j]);
			}
		}
	}			        
}

void sort_by_weight(Student a[], int n){

	int i, j;

	for(i=0;i<n-1;i++){
		for(j=n-1;j>i;j--){
			if(a[j-1].weight > a[j].weight){
				swap_Student(&a[j-1], &a[j]);
			}
		}
	}			        
}


int main(void){
	
	// int i;
	// int height[NUMBER];
	// float weight[NUMBER];
	// char name[NUMBER][NAME_LEN]={0};
	int i,flag;
	int height;
	float weight;
	char name[NAME_LEN];

	Student std[NUMBER];


	for (i=1;i<NUMBER+1;i++){
		printf("number %d student\n",i);
		printf("name :\t");
		scanf("%s",name);
		printf("height :\t");
		scanf("%d",&height);
		printf("weight :\t");
		scanf("%f",&weight);
		// printf("%s\n",name[i]);
		strcpy(std[i].name,name);
		std[i].height = height;
		std[i].weight = weight;
	}

		printf("\n");

	for(i=1;i<NUMBER+1;i++){
		printf("%-8s %6d%6.1f\n",std[i].name,std[i].height,std[i].weight);
	}
	
	printf("which sort do you want to do?\n[1]...sort_by_height\t[2]...sort_by_weight\n");

	while (1){
		scanf("%d",&flag);
		if (flag == 1 || flag ==2){
			break;
		}else{
			printf("please enter the number again.\n");
		}
	}

	if (flag == 1){
		sort_by_height(std,NUMBER);
		puts("\nsort by height.");
	}else if(flag ==2){
		sort_by_weight(std,NUMBER);
		puts("\nsort by weight.");
	}

	for(i=1;i<NUMBER+1;i++){
			printf("%-8s %6d%6.1f\n",std[i].name,std[i].height,std[i].weight);
		}

	return 0;
}
