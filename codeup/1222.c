#include <stdio.h>
 
 
int main (void)
{
    
    int time, score1 ,score2;
    scanf("%d %d %d",&time, &score1, &score2);
    
    
    time = 90 - time;
    if( time != 0)  
    {
    score1=1+score1; 
    if(time >=5){
    score1 = score1 + (time-1)/5;
    }
    }
    
            
    if(score1>score2){printf("win");}
    else if(score1 == score2){printf("same");}
    else{ printf("lose");}
    
    return 0;
}