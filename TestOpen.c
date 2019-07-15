   #include <stdio.h>
   #define MAX_VALUE 50
   int main (){
           FILE* p_file = NULL;
	   char c_arr[MAX_VALUE];
	  printf("Enter the sentace to appaned\n");
	   fgets(c_arr,50,stdin);

           p_file = fopen("text.txt","a+");
           if(p_file != NULL){
		   fwrite(c_arr,sizeof(char),sizeof(c_arr),p_file);
           //        fputs(c_arr,p_file);
           }else {
                   printf("Error");
		  }
   
	  fclose(p_file);
          return 0;
  
  }
         
