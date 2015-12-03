//DATA
#include<stdio.h>

#include<conio.h>

# define size 24

struct bus
{
 int city_no;
 char city[20];
 int price;
 int rent;
 int cost_house;
 int renthouse;
 int mortgage;
 int sell;
 }ob[size];

int main()
{
  FILE *f1;
  int i,j;
  clrscr();
 /* f1=fopen("Data.txt","w");
  for(i=0;i<size;i++)
  {
   printf("Enter the city no:");
   scanf("%d",&ob[i].city_no);
   printf("Enter the city:");
   fflush(stdin);
   scanf("%s",&ob[i].city);
   printf("Enter the price:");
   scanf("%d",&ob[i].price);
   printf("Enter the rent:");
   scanf("%d",&ob[i].rent);
   printf("Enter the cost of house:");
   scanf("%d",&ob[i].cost_house);
   printf("Enter the Rent with House:");
   scanf("%d",&ob[i].renthouse);
   printf("Enter the Bank Mortgage Value:");
   scanf("%d",&ob[i].mortgage);
   printf("Enter the selling value:");
   scanf("%d",&ob[i].sell);
   fprintf(f1,"City No.: %d\nCity: %s\nPrice: Rs. %d\nRent Site: Rs. %d\nCost of House: Rs. %d\nRent with House: Rs. %d\nBank Mortgage Value: Rs. %d\nSelling Value: Rs. %d\n\n",ob[i].city_no,ob[i].city,ob[i].price,ob[i].rent,ob[i].cost_house,ob[i].renthouse,ob[i].mortgage,ob[i].sell);
  }
  fclose(f1);*/
  clrscr();

  //DISPLAY INFORMATION
  f1=fopen("data.txt","r");
  while(!feof(f1))
  {
  for(i=0;i<size;i++)
  {
   fscanf(f1,"City No.: %d\nCity: %s\nPrice: Rs. %d\nRent Site: Rs. %d\nCost of House: Rs. %d\nRent with House: Rs. %d\nBank Mortgage Value: Rs. %d\nSelling Value: Rs. %d\n\n",&ob[i].city_no,&ob[i].city,&ob[i].price,&ob[i].rent,&ob[i].cost_house,&ob[i].renthouse,&ob[i].mortgage,&ob[i].sell);
   printf("City No.: %d",ob[i].city_no);
   printf("\nCity: %s",ob[i].city);
   printf("\nPrice:Rs. %d",ob[i].price);
   printf("\nRent:Rs. %d",ob[i].rent);
   printf("\nCost of House:Rs. %d",ob[i].cost_house);
   printf("\nRent with House:Rs. %d",ob[i].renthouse);
   printf("\nBank Mortgage Value:Rs. %d",ob[i].mortgage);
   printf("\nSelling Value:Rs. %d\n\n",ob[i].sell);
   }
  }
  fclose(f1);
 getch();
 return 0;
}



