#include<stdio.h>
int main(){
	
	int num[30];
	int i,n,j;
	int option;
	do{
		printf("========== ||| MENU ||| ==========\n");
		printf("1. Input \n");
		printf("2. Output \n");
		printf("3. Search \n");
		printf("4. Update \n");
		printf("5. Delete \n");
		printf("6. Sort \n");
		printf("7. Add \n");
		printf("Enter an option: ");scanf("%d",&option);
		switch(option){
			case 1:{
				//input n value
				printf("======= Input ========\n");
				printf("Enter N: ");scanf("%d",&n);
				for(i=0;i<n;i++){
					printf("Enter Number[%d] = ",i);scanf("%d",&num[i]);
				}
				break;
			}
			case 2:{
				//output
				printf("======= Output ========\n");
				for(i=0;i<n;i++){
					printf("Number[%d] = %d\n",i,num[i]);
				}
				break;
			}
			//10,20,30,40,50
			case 3:{
				int search;
				//search
				printf("======= Search ========\n");
				printf("Enter number to search: ");scanf("%d",&search);
				int check = 0;
				for(i=0;i<n;i++){
					if(search == num[i]){
						printf("Number[%d] = %d\n",i,num[i]);
						check = 1;
					}
				}
				if(check == 0){
					puts("Search not found");
				}
				
				break;
			}
			case 4:{
				int update;
				//update
				printf("======= Update ========\n");
				printf("Enter number to update: ");scanf("%d",&update);
				int check = 0;
				for(i=0;i<n;i++){
					if(update == num[i]){
						printf("Enter new Number[%d] = ",i);scanf("%d",&num[i]);
						check = 1;
					}
				}
				if(check == 0){
					printf("Update not Success\n");
				}
				else{
					printf("Update Success\n");
				}
				break;
			}
			case 5:{
				int deleted;
				int check = 0;
				printf("======= Delete ========\n");
				printf("Enter Number to delete: ");scanf("%d",&deleted);
				for(i=0;i<n;i++){
					if(deleted == num[i]){
						for(j=i;j<n-1;j++){
							num[j] = num[j+1];
						}
						check = 1;
						n--;
						break;
					}
				}
				if(check == 0){
					printf("Delete not Success\n");
				}
				else{
					printf("Delete Success\n");
				}
				break;
			}
			case 6:{
				int temp;
				printf("======= SORT ========\n");
				for(i=0;i<n;i++){
					for(j=i;j<n;j++){
						if(num[i]>num[j]){
							temp = num[i];
							num[i] = num[j];
							num[j] = temp;
						}
					}
				}
				printf("Sort Success\n");
				break;
			}
			case 7:{
				int add;
				printf("How many number to add: ");scanf("%d",&add);//2
				for(i=n;i<n+add;i++){
					printf("Enter Number[%d] = ",i);scanf("%d",&num[i]);
				}
				n=n+add;
				printf("Add Success");
				break;
			}
		}
	}while(1);
}
