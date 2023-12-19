#include<stdio.h>
int main(){
int N , R ,B,flag;
int loss,fill;
fill = 0;
printf("Enter the Rate at which bucket is leaking  : ");
scanf("%d",&R);
printf("Enter the Bucket Size :");
scanf("%d",&B);
flag = 1;
while(flag){
  printf("\nIteration----------------\n");
  printf("Enter the rate at which host is transmitting :");
  scanf("%d",&N);
  if(N-R<0){
     if(fill + N <= R ){ 
     printf("\nThe number of packets transmitted are %d " , fill + N);
     printf("\nNo packets lost ");
     printf("\nBucket empty ");
    fill = 0;
    }
    else{
      printf("\nNo of packets transmitted are %d ",R);
      fill = fill - R + N;
        printf("\nNo packets lost ");
     printf("\nBucket has %d packets ",fill);
     if(fill== B)
       printf("\n The bucket is full ");
      
      
    }
}
else{
  fill += N-R;
  printf("The no of packets transmitted are %d ",R);
  if(fill>B){
    printf("Overflow , %d packets are lost ",fill - B );
    fill = B ;
    if(fill== B)
       printf("\n The bucket is full ");
   }
   else{
     printf("No of packets in the bucket are %d " ,fill );
     printf("No packets lost ");
     if(fill== B)
       printf("\n The bucket is full ");
    }
}
printf("Do you want to proceed ?(1y,0N)");
scanf("%d",&flag);
}
return 0;
}
