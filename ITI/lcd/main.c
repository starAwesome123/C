#include "LCD_prototype.h"

int main(void){
 LCD_Init();
 char name[7]="MARIAM";
 for(int i;i<7;++i){
 LCD_SendData(name[i]);
 }
 while(1){

 }
return 0;
}
