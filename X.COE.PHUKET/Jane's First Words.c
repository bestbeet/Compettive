#include <stdio.h>
#include <string.h>
int main()
{
	char word[100];
	int i,n,ch=0;
	do{
		scanf("%s",word);
		if(word[0]=='d'&&word[1]=='a')
		{
		    n = strlen(word);
		    if(word[n-1]=='i'||word[n-1]=='y')
		    {
		        if(word[n-2]=='d')
		        {
		            if(word[n-3]=='d')
		            {
		                for(i=2;i<n-3;i++)
		                {
		                    if(word[i]!='a')
		                    {
		                        printf("Cooing\n");
		                        ch = 1;
		                        break;
		                    }
		                }
		                if(ch==0)
		                {
		                    printf("She called me!!!\n");
		                }
		                else
		                {
		                    ch = 0;
		                }
		            }
		            else
		            {
		                for(i=2;i<n-2;i++)
		                {
		                    if(word[i]!='a')
		                    {
		                        printf("Cooing\n");
		                        ch = 1;
		                        break;
		                    }
		                }
		                if(ch==0)
		                {
		                    printf("She called me!!!\n");
		                }
		                else
		                {
		                    ch = 0;
		                }
		            }
		        }
		        else
		        {
		            printf("Cooing\n");
		        }
		    }
		    else
		    {
		        printf("Cooing\n");
		    }
		}
		else
		{
		    printf("Cooing\n");
		}

	}while(getchar() != EOF);

	return 0;
}
