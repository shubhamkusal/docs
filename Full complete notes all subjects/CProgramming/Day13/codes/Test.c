 #include<stdio.h>
 #include<string.h>
// int main( void )
// {
// char str1[20] = "SunBeam ", str2[20] = "IT Park";
// printf("%s", strcpy(str2, strcat(str1, str2)));
// return 0;
// }

// #include<stdio.h>
// #include<string.h>
// int main( void )
// {
// char *str = "hello,\tSunbeam\n\0Karad Pune";
// printf("%d", strlen(str));
// return 0;
// }

// #include<stdio.h>
// int main( void )
// {
// printf("Sunbeam IT Park Hinjewadi"+8);

// return 0;
// }


#include <stdio.h>
int main(void)
{
	char dest[] = "Visual basic",src[] = "C++";
	puts(strcpy(&dest[7],src)-7);
	return 0;
}