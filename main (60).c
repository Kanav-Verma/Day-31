
    #include<stdio.h>
int main(){
int arr[6]={1,7,9,67,5,3};
int n,flag =0, index=0;
printf("Enter a number to check\t");
scanf("%d",&n);
for(int i =0;i<6;i++){
if(arr[i]==n){
flag=1;
index=i;
break;
}
}
if(flag==1)
printf("Founded at index = %d ",index);
else
printf("NOT Founded");
return 0;
}


