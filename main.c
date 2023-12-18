#include <stdio.h>
int main (){
   int boardTime[8][8];
   int xOccupy[8];
   int yOccupy[8];
   int fail = 0;
   int x, y = 0;
   int curX, curY = 0;


   
   while(boardTime[curX-x][curY-y] == 0){
      x--;
      y--;
   }
   //Test diagonal overlap
   x, y = 0;
   fail = 0;
   for(int i = 0; i < 8; i++){
      if(boardTime[x-curX+i][y-curY+i] == 1){
         fail = 1;
         break;
      }
      if(boardTime[x+curX-i][y+curY-i] == 1){
         fail = 1;
         break;
      }
   }


   printf("Test\n");
   return 0;
}