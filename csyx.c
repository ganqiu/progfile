#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{		
		srand((unsigned int)time(0));
        int magic=rand()%100+1;
        int guess;
        int counter=0;
                do{
                    printf("请猜一个数字：");
                    scanf("%d",&guess);
                    counter++;
                    if(guess>magic)
                    printf("太大了！\n");
                    else if(guess<magic)
                    printf("太小了！\n");
                else
                    printf("right!\n");
            }while(guess!=magic);
        printf("您一共猜了%d次，你真是太棒了！\n",counter);
	 	
	 	return 0;
}
