#include "lab9.h"
#include "./utils/utils.h"

extern const int MAX;

struct Stock {
	char *symbol;
	char *companyName;
	double currentPrice;
};

int menu()
{
   int num;
   do
   {
   	printf("Please choose from the following\n");
   	printf("1) Sort by Symbol\n");
   	printf("2) Sort by Company Name\n");
   	printf("3) Sort by Price\n");
   	printf("4) Quit\n");
   	printf("Choice --> ");
   	scanf("%d", &num);
	   while(fgetc(stdin) != '\n');
   }while(num < 1 || num > 4);

   return num;
}// end menu


Stock * fillArray(FILE * fin, int total)
{
   int x = 0;
   char temp[100];
   Stock * array = NULL;
   return array;
}


void symbolSort(Stock array[], int total)
{
   
}


void printArray(Stock array[], int total)
{
   int x;
   for(x = 0; x < total; x++)
      printf("%s - %s - $%.2lf\n\n", array[x].name, array[x].symbol, array[x].price);

}


void companySort(Stock array[], int total)
{
   
}// end companySort


void priceSort(int total, Stock array[])
{
   
}// end priceSort


void cleanUp(Stock * array, int total)
{
   
}// end cleanUp