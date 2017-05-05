#include <stdio.h>

/*
    Harvard Reference ToolBox
    =========================
    Function: Quickly creates Harvard references in the correct layout. 
    Author: Aidan Hackett  
    
*/



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
   
   
   /* User input to choose to reference either a book or a website */
   printf("Type 1 for Book, 2 for Website\n");
   scanf("%d", &input);
   
          // Book
          
          if (input == 1)
          {
                // Take user input of data 
                printf("Insert Author Name: (Format: Surname, F)\n");  
                scanf("%s", author);
                scanf("%s", initial);
                printf("Insert Book Title:\n");
                scanf("%s", title);
                printf("Insert Publication Year:\n");
                scanf("%s", year);
                printf("Insert Publication Location:\n");
                scanf("%s", place);
                printf("Insert Publisher:\n");
                scanf("%s", publisher);     
                printf("Insert Edition:\n");
                scanf("%s", edition);     
                printf("Insert Page Numbers: (Format: pX-pY)\n");
                scanf("%s", pages);      
                
                // Print results
                printf("Copy and paste the following into your bibliography. Don't forget to arrange alphabetically!\n");
                printf("%s %s (%s). %s. %s: %s. %s.\n", author, initial, year, title, place, publisher, pages);                  
           } 
          
         // Website
         
         else if (input == 2)
         { 
            // Take user input
            printf("Insert Author Name: (Format: Surname, F)\n");
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
            
            /p36-p56
            / Print results
            printf("Copy and paste the following into your bibliography. Don't forget to arrange alphabetically!\n");
            printf("%s %s. (%s). %s. %s Available: %s. Last Accessed %s\n", author, initial, year, title, sitename, url, visitdate);                  
         }  
      
          // If input is neither 1 or 2
         else 
         {
             printf("Bye/n");
         }



}
