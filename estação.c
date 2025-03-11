 //biblioteca
 #include <stdio.h>
 #include <locale.h>
 
 int main(){
     setlocale (LC_ALL, "");
     
     int estacao;
     printf ("escolha um numero de (1-4): \n");
     scanf ("%d", &estacao);
     
     switch (estacao){
         case 1:
         printf ("você escolheu verão:\n");
         break;
         
         case 2:
         printf ("Você escolheu outono\n");
         break;
         
         case 3:
         printf ("voce escolheu inverno \n");
         break;
         
         case 4:
         printf ("voce escolheu primavera \n");
         break;
         
         default:
         printf ("opçao invalida! programa encerrado");
         return 1;
         
     }
     return 0;
 }