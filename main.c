#include <stdio.h>
#include <stdint.h>

void printBoard(int queenX[], int queenY[]) {
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
}

int main (){
   int xOccupy[8] = {};
   int yOccupy[8] = {};
   int fullBoard[8][8] = {};
   int queenX[8] = {};
   int queenY[8] = {};
   int queen = 0;

   //We're just doing lateral and then horizontal progression
   //placement, this time

   for(int i = 0; i < 8; i++){
      if(xOccupy[i] != 1){
         for(int j = 1; j <= 9; j = j + 2){
            if(j >= 8){j = 0;}
            if(yOccupy[j] != 1 && fullBoard[i][j] != 1){
               xOccupy[i] = 1;
               yOccupy[j] = 1;
               queen++;
               queenX[i] = queen;
               queenY[j] = queen;
               for(int k = 1; k < 8; k++){
                  if(i + k < 8){
                     if(j + k < 8){
                        fullBoard[i+k][j+k] = 1;
                     }
                     if(j - k >= 0){
                        fullBoard[i+k][j-k] = 1;
                     }
                  }
                  if(i - k >= 0){
                     if(j + k < 8){
                        fullBoard[i-k][j+k] = 1;
                     }
                     if(j - k > 0){
                        fullBoard[i-k][j-k] = 1;
                     }
                  }
               }
               break;
            }
         }
      }
   }
   printBoard(queenX, queenY); // Print the board after placing queens
   printf("%d\n", queen);
   for(int i = 0; i < 8; i++){
      printf("%d", queenX[i]);
   }
   printf("\n");
   for(int i = 0; i < 8; i++){
      printf("%d", queenY[i]);
   }
   printf("\n");
   for(int i = 0; i < 8; i++){
      for(int j = 0; j < 8; j++){
         printf("%d ", fullBoard[i][j]);
      }
      printf("\n");
   }
   printf("\n");
   return 0;
}