//Check Valid Palindrome
#include<stdio.h>
#include<stdbool.h>

void RemoveWhiteSpaces(char *str)
{
    while(*str != '\0')
    {
        if(*str == ' ')
        {
            *str = ' ';
        }
        str++;
    }
}
void RemoveCharacters(char *str)
{
    while(*str!='\0')
    //for(int i =0;str[i] !='\0';i++)
    {
        if((*str<='A' || *str>='Z') && (*str>='a' || *str<='z') && (*str >=0 || *str<=9))
        {
           str++;
        }
        else
        {
           *str = ' '; 
        }
        str++;
    }
}
/*bool CheckPalindrome(char *str)
{
	char *end = NULL;
	bool flag = true;
	//start = str;
	end = str;
	
	while(*end != '\0')
	{
		end++;
	}
	end--;
	
	while(str < end)
	{
		if(*str != *end)
		{
			flag = false;
			break;
		}
		str++;
		end--;
	}
		return flag;
}*/


int main()
{
	char Arr[50];
	bool bRet=false;
	
	printf("Enter a string: ");		
	scanf("%[^'\n']s",Arr);		// Bcoz of this [^'\n'] Enter is ignored so after giving string input and pressing Enter we can't give and character input.
	
    RemoveCharacters(Arr);
    printf("Modified string is %s",Arr);

    //RemoveWhiteSpaces(Arr);
    
	// bRet = CheckPalindrome(Arr);
	// if(bRet==true)
	// {
	// 	printf("It is a palindrome");
	// }
	
	// else
	// {
	// 	printf("It is not a palindrome");
	// }
	return 0;
}