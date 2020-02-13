#include <stdio.h>
#include<stdio.h>
int main() 
{
	char ch,inputfile[20],outputfile[20],n;
        int numAscii;
        FILE * fptr, * fptr2;
        printf("\n enter the name of file to be read\n");
	    scanf("%s",inputfile);
	    
	    printf("enter the security key for data to be encrypted or decrypted\n");
	    scanf("%d",&n);
	    
         printf("\n enter the name of file to be encrypted\n");
	    scanf("%s",outputfile);
        fptr = fopen(outputfile, "w");
        fptr2= fopen(inputfile,"r");
        if(fptr2==NULL){
		printf("input file doesnot exists\n");
		exit(0);
        }
       
         ch=fgetc(fptr2);
         while(ch!=EOF)
         {
			numAscii=(int)ch;
			numAscii=numAscii-n;
			
			fprintf(fptr,"%c",numAscii);
			ch=fgetc(fptr2);
		}
        fclose(fptr2);
        fclose(fptr);
        printf("the file has been been encrypted with name %s",outputfile);
        return 0;
    }
