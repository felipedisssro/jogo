#include <stdio.h>

int main(){
   
int golsc; //corinthians
int golsp; // palmeiras

printf ("digite quantos gols o Corinthians marcou\n");
scanf ("%d", &golsc);

printf ("digite quantos gols o palmeiras marcou\n");
scanf ("%d", &golsp);

if (golsc > golsp){
   printf ("corinthians ganhou\n");
} else if (golsp > golsc){
   printf ("palmeiras ganhou\n");
} else 
   printf ("empate\n");
} 









