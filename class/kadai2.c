#include <stdio.h>

#define NAME_LEN 64

typedef struct {
	char name[NAME_LEN];
	int height;
	float weight;
	long int scholarship;
	int sex;
} student; 

void update(student* p1){
       if (p1->sex == 1){
                if(p1->height <= 170){
                        p1->height = 170;
                }
                if(p1->weight >= 65.4){
                        p1->weight = 65.4;
                }
        }else{
                if(p1->height <= 158){
                        p1->height = 158;
                }
                if(p1->weight >= 50.5){
                        p1->weight = 50.5;
                }

        }

}



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
	
	printf("What's your sex?\nif you a man,please enter 1.\nif you a woman,please enter 2.\n");
	scanf("%d",&p1.sex);

	update(&p1);

	printf("check the data");
	printf("name:\t%s\n",p1.name);
	printf("height:\t%d\n",p1.height);
	printf("weight:\t%f\n",p1.weight);
	printf("scholarship:\t%d\n",p1.scholarship);

	return 0;
}
