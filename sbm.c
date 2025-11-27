#include<stdio.h>
int main()
{
	int ch,qty;
	char cont;
	float price,item_total,gst,total=0,final_amt;
	printf("1. chocolates - Rs 25 /-\n");
	printf("2. ice cream - Rs 50/-\n");
	printf("3. maaza - Rs 80 /-\n");
	printf("4. Buiscuit - Rs 50 /-\n");
	printf("5. soap- Rs 30 /-\n");
	
	do {
		printf("Enter your number :");
		scanf("%d",&ch);
		
		switch(ch){
			case 1:
			    price=25;
			    break;
			case 2:
			    price=50;
			    break;
			 case 3:
			    price=80;
			    break;
			 case 4:
			    price=50;
			    break;
			 case 5:
			    price=30;
			    break;
			 default:
			        printf("invalid choice");
			        continue;
		}
		 printf("Enter quantity:");
		 scanf("%d", &qty);
		 
		 item_total=price*qty;
		 total=total+item_total;
		 
		 printf("item total: %.2f\n",item_total);
		 
		 
		 printf("Do you want to continue your shopping(Y/N):\n");
		 scanf(" %c",&cont);
		 
	}
	 while(cont=='Y');
	  
	  gst=total*0.05;
	  final_amt=total+gst;
	           
	  printf("Total amount:%.2f\n",total);
	  printf("GST:%.2f\n",gst);
	  printf("final amount:%.2f\n",final_amt);
	 

	 return 0;
}
	 	    
			    
		
		
		
	
	
