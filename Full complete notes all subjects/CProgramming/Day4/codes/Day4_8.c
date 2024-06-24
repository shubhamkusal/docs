#include<stdio.h> 


int main( )
{
    char ch; 
    printf("%d",sizeof(12.3)); // 8  
    printf("%d",sizeof(12.3f));// 4
    printf("%d",sizeof(12.3F));// 4   
    //printf("%d ",sizeof(10)); // 4 byte
    //printf("%d ",sizeof('A'));//sizeof(65)//4 bytes 
    // 'A'=> const => char const=> int  
    //printf("%d ",sizeof(ch));// 1 byte 
    // ch => variable => char => 1 byte 

    // printf("%d ",sizeof(10l)); // long => 4 
    // printf("%d ",sizeof(10L)); // long => 4
    // printf("%d ",sizeof(10ll)); // long long => 8
    // printf("%d ",sizeof(10LL)); // long => 8     
    
    // printf("%d ",sizeof(10u)); // unsigned => 4  
    // printf("%d ",sizeof(10U)); // unsigned => 4 
    
    //printf("%d",100);//100 
    //printf("%d ",0100);//octal to decimal 
    //printf("%o ",0100);//octal to octal 
    
    //printf("%d ",0x32);// hexadecimal to decimal  
    //printf("%x ",0x32);// hexadecimal to hexadecimal  
    
    printf("%d %c %o %x",65,65,65,65); 
    // printf("Code sharing utility..");
    // printf("Code sharing utility.."); 
    // printf("Code sharing utility..");
    // printf("Code sharing utility..");
    // printf("Code sharing utility..");
    return 0; 
}
/*
   1.classwork 
   2.Try to solve assignment ( use zoom channel )

    Lab session 
    1.Assignment doubt
    2.Concept doubt 
    3.Installation 

    1.MCQ ( discussion )
    2.Poll ( discussion )
    3.Topic Wise Test ( MCQ )
    4.Sunbeam Black Book ( MCQ + answers )

    //code sharing 
*/