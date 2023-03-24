#include<stdio.h>

    int main(){

        int marks ;

        printf("enter marks :" );
        scanf("%d", &marks);

  if(marks >=35 && marks <45){
        printf("pass");
  } 
  else if(marks >=45 && marks <60){
        printf("second class");
  }  
  else if(marks >=60 && marks <75){
        printf("first class");
  } 
  else if(marks >=75 && marks <100){
        printf("gread A");
  } 
  
  else{
        printf("invalid marks");
  }
        return 0 ;
}
