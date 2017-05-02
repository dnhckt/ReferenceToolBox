#include <stdio.h>

int main(void) 
{
   int input; // Used to take user input
   
   /* Universal fields */
   char author[20];
   char initial[2];
   char title[20];
   char year[4];
   
   /* Site fields */
   char sitename[20];
   char url[20];
   char visitdate[40];
   
   /* Book fields */   
   char place[20];
   char publisher[20];
   char edition[20];
   char pages[20];
   
   
   /* Function to reference books/other choices
   printf("Type 1 for Book, 2 for Website\n");
   scanf("%d", &input);
   
      if (input == 1)
      {
        printf("Insert Author Name:\n");
        scanf("%s", author);
        printf("Insert Article Title:\n");
        scanf("%s", title);
        printf("Insert Name of Site:\n");
        scanf("%s", sitename);
        printf("Insert Publication Year:\n");
        scanf("%s", year);
        printf("Insert URL:\n");
        scanf("%s", url);        
        printf("Insert Date Last Accessed:\n");
        scanf("%s", visitdate);      
        
       printf("%s. (%s). %s. %s Available: %s. Last Accessed %s\n", author, year, title, sitename, url, visitdate);                  
      } 
      
         else if (input == 2)
      { */
        
        printf("Insert Author Name: (Format: Surname, F.)\n");
        scanf("%s", author);
        scanf("%s", initial);
        printf("Insert Article Title:\n");
        scanf("%s", title);
        printf("Insert Name of Site:\n");
        scanf("%s", sitename);
        printf("Insert Publication Year:\n");
        scanf("%s", year);
        printf("Insert URL:\n");
        scanf("%s", url);        
        printf("Insert Date Last Accessed:\n");
        scanf("%s", visitdate);    
        
        printf("%s. (%s). %s. %s Available: %s. Last Accessed %s\n", author, year, title, sitename, url, visitdate);
        
      
     /* 
      else 
      {
        printf("Bye/n");
      }
  */

  
























}
