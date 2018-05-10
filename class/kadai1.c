#include <stdio.h>

#define NAME_LEN 64

typedef struct {
	char name[NAME_LEN];
	int height;
	float weight;
	long int scholarship;
} student; 




int main(void){
	
	student p1;
	printf("enter the data\n");
	printf("enter the name\t");
	scanf("%s",p1.name);
	printf("enter the height\t");
        scanf("%d",&p1.height);
	printf("enter the weight\t");
        scanf("%f",&p1.weight);
	printf("enter the scholarship\t");
        scanf("%d",&p1.scholarship);

	printf("check the data");
	printf("name:\t%s\n",p1.name);
	printf("height:\t%d\n",p1.height);
	printf("weight:\t%f\n",p1.weight);
	printf("scholarship:\t%d\n",p1.scholarship);

	return 0;
}
