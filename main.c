#include <stdio.h>
#include <stdint.h>
#include <string.h>

/*void printBoard(int queenX[], int queenY[]) {
   for (int i = 0; i < 8; i++) {
      for (int j = 0; j < 8; j++) {
         if (queenX[i] == queenY[j] && queenX[i] != 0) {
               printf("%d ", queenX[i]);
         } else {
               printf(". ");
         }
      }
      printf("\n");
   }
   
   printf("\n");
}*/

int main (){
   int attempt[8][8] = {};
   //Essentially x/y coords for each placed queen
   int queenX[8] = {};
   int queenY[8] = {};
   
   int destroyedBoards = 0;
   int solutions[92][8][8] = {};
   int total = 0;

   while(total < 92){
      for(int i = 0; i < 8; i++){
         attempt[queenX[i]][queenY[i]] = 0;
      }
      memset(queenX, 0, sizeof(queenX));
      memset(queenY, 0, sizeof(queenY));

   }


   printf("\n");
   return 0;
}