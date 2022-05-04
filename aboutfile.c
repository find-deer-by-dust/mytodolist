#include<stdio.h>
#define max 6000
//采用@@作为换行符
void print(char *a);
void add(char *a);
void delete(char *a,int n);
int main(){
	FILE *fp=NULL;
	int tag=1;
	int n;
	int command;
	char test[max];
	while(tag){
		fp=fopen("a.txt","rb");
		fgets(test,max,fp);
		printf("输入命令\n1:查看list\n2:添加todo\n3:删除todo\n4:退出\n");
		swicth(x){
			case 1:print(test);break;
			case 2:add(test);break;
			case 3:printf("请输入你要删除的行数\n");scanf("%d",&n)delete(test,n);break;
			case 4;printf("已退出");tag=0;break;
			default: printf("输入命令错误\n");
		}
	}
	return 0;
}

void print(char *a){
	int i;
	int j=1;
	printf("%2d: ",j);
	for(i=0;i<=max;i++){
		if(a[i]=='@'&&a[i+1]=='@'){
			j++;
			printf("\n");
			printf("%2d: ",j);
			i++;
		}
		else if(a[i]=='\0') break;
		else{
			printf("%c",a[i]);
		}
	}
}

void add(char *a){
	int i;
	for(i=0;i<max;i++){
		if()




}
