#include <stdio.h>
int main() 
{
	char ch;
        int numAscii;
        FILE * fptr, * fptr2;
        
        
        fptr = fopen("tvt.txt", "w");// "w" defines "writing mode"
        fptr2= fopen("deep.txt","r");
       
         ch=fgetc(fptr2);
         while(ch!=EOF){
			numAscii=(int)ch;
			numAscii=numAscii-5;
			
			fprintf(fptr,"%c",numAscii);
			ch=fgetc(fptr2);
		}
        fclose(fptr2);
        fclose(fptr);
        return 0;
    }
