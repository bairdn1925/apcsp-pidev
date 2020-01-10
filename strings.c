#include <stdio.h>
#include <string.h>
void compare(char* c1, char*  c2)
{
if(strcmp(c1,c2) == 0)
  {
                printf("The two strings match\n");
  }
        else
  {
                printf("The strings do not match\n");
  
  }
//printf("%d\n",strcmp(c1,c2));
//printf("c1: %s	c2: %s\n",c1,c2);        
}

int main()
{
	char loopABC[30];
	char* constantABC = "abcdefghijklmnopqrstuvwxyz";
	char combine[48];	
	
	for(int i = 0; i <26; i++)
  {
		 loopABC[i] = i+97;
	}
	compare(constantABC,loopABC);
	for(int i = 0; i < 26; i++)
  {
		loopABC[i] = i+65;
	}
	
	compare(constantABC, loopABC);

	printf("1: %s\n",constantABC); 
	printf("2: %s\n",loopABC);  

	 strcat(combine,constantABC);
        strcat(combine,loopABC);
	printf("3: %s\n",combine);  
}
