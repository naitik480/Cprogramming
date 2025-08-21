int main(){
int a,b,c;
printf("enter the side of triangle");
scanf("%d%d%d",&a,&b,&c);
if(a==b && b==c){
        printf("equilateral");
}else if(a==b||b==c||a==c){
printf("isoceles");
} else{
printf("scalene");
}
}

