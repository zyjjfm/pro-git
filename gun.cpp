/* lethead1.c  驱劢一个打印星号癿凼数  */
	#include <stdio.h>
	#define NAME "GIGATHINK,ING."
	#define ADDRESS "101 Megabuck Plazd"
	#define PLACE "Megapolis,CA 94904"
	#define WIDTH 40
  void starbar (void); // 声明凼数原垄
  	int main (void){
	starbar();
	printf ("%s\n",NAME);
	printf ("%s\n",ADDRESS); 
	printf ("%s\n",PLACE);
	starbar(); // 使用凼数
	return 0;
}
  void starbar (void) // 定丿凼数{
	int count;
    for (count = 1; count <=WIDTH; count++)
	putchar('*');
	putchar('\n');
}



//
/*

zhangyajun   you mast work-hard


*/
