#include<stdio.h>
#define max 6000
//采用@@作为换行符
void print(char *a);
int main(){
	FILE *fp=NULL;
	char test[max];
//	while(1){
		fp=fopen("a.txt","rb");
		fgets(test,max,fp);
		print(test);
		
//	}
	return 0;
}

void print(char *a){
	int i;
	for(i=0;i<=max;i++){
		if(a[i]=='@'&&a[i+1]=='@'){
			printf("\n");
			i=i+1;
		}
		else if(a[i]=='\0') break;
		else{
			printf("%c",a[i]);
		}
	}
}
