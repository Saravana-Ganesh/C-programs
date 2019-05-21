#include<stdio.h>
int match_word(int i,int j);
char a[1000];
int n,matching=0;
int main()
{
	int i,j,flag=0,b[10];
	printf("\nEnter the sentence\n");
	for(i=0;;i++){
		scanf("%c",&a[i]);
		if(a[i]=='\n'){
			b[flag++]=i;
		}
		if(flag>2)
			break;
	}
	n=i;
	flag=0;
	for(i=0;i<n;i++){
		if(a[i-1]=='\n'||a[i-1]==' '||i==0){
			//flag++;
		//	if(flag>2)
			//	flag=0;
			if(a[i-1]=='\n')
				++flag;
		//	printf("\nInside if incrementing flag ::flag=%d\n",flag);
			for(j=b[flag]+1;j<n;j++){
				if((a[i]==a[j])&&(a[j-1]=='\n'||a[j-1]==' ')){
				//	printf("\nCall for flag--%d\n",flag);
					match_word(i,j);
				}
				else
					continue;
			}
		}
		//break;
	}
	printf("\nMatching word count = %d",matching);
	return;
}
int match_word(int i,int j)
{
//	printf("..........function calling.................");
	int temp_1 = i, temp_2= j;
	int temp =0;
	for(i;i<n;i++)	{////Take the length of word by comparing str1 and str2
		if((a[i]==a[j])&&(a[i]!='\n')&&(a[i]!=' ')&&(a[j]!=' ')&&(a[j]!='\n')){
			++temp;
			++j;
		}
		else
			break;
	}
	i = temp_1;
	j = temp_2;
	temp_1=0,temp_2=0;
	for(i;a[i]!='\n'&&a[i]!=' ';i++){//Take the length of word from str1
		++temp_1;
		//printf("%c",a[i]);
	}
	printf("\n");
	for(j;a[j]!='\n'&&a[j]!=' ';j++){//Take the length of word from str2
		++temp_2;
	//	printf("%c",a[j]);
	}
	if((temp==temp_1)&&(temp==temp_2)){
	//	printf("\n%d %d %d--> Matching",temp,temp_1,temp_2);
		++matching;
	}
		
	else{
	//	printf("\nNot matching");
	//	printf("\n%d %d %d--> NOT Matched",temp,temp_1,temp_2);
	}
}