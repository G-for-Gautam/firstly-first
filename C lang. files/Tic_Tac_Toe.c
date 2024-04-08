#include<stdio.h>
#include<stdlib.h>

int main(){
    
    char arr[3][3]={'1','2','3','4','5','6','7','8','9'};
    int i,j,x=1;
    char n;

    while(x<10){

    system("cls");
    printf("\033[1;31m*\033[1;0m\033[1;33m TIC TAC TOE \033[1;0m\033[1;31m*\033[1;0m\n");
    printf("  \033[1;31m-----------\033[1;0m\n\n");

        for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf(" \033[1;32m%c\033[1;0m \033[1;35m|\033[1;0m ",arr[i][j]);
                        }
            printf("\n\n");
            printf("\a");
                        }
              //using loops recommneded for below codes
          if(arr[0][0]==arr[0][1]&&arr[0][1]==arr[0][2]){printf("\033[1;31m]\033[1;0m \033[1;33mGAME OVER\033[1;0m\033[1;31m [\033[1;0m");
        return 0;}
        
        if(arr[1][0]==arr[1][1]&&arr[1][1]==arr[1][2]){printf("\033[1;31m]\033[1;0m \033[1;33mGAME OVER\033[1;0m\033[1;31m [\033[1;0m");
        return 0;}
        if(arr[2][0]==arr[2][1]&&arr[2][1]==arr[2][2]){printf("\033[1;31m]\033[1;0m \033[1;33mGAME OVER\033[1;0m\033[1;31m [\033[1;0m");
        return 0;}
           
        if(arr[0][0]==arr[1][0]&&arr[1][0]==arr[2][0]){printf("\033[1;31m]\033[1;0m \033[1;33mGAME OVER\033[1;0m\033[1;31m [\033[1;0m");
        return 0;}
        if(arr[0][1]==arr[1][1]&&arr[1][1]==arr[2][1]){printf("\033[1;31m]\033[1;0m \033[1;33mGAME OVER\033[1;0m\033[1;31m [\033[1;0m");
        return 0;}
        if(arr[0][2]==arr[1][2]&&arr[1][2]==arr[2][2]){printf("\033[1;31m]\033[1;0m \033[1;33mGAME OVER\033[1;0m\033[1;31m [\033[1;0m");
        return 0;}
             
        if(arr[0][0]==arr[1][1]&&arr[1][1]==arr[2][2]){printf("\033[1;31m]\033[1;0m \033[1;33mGAME OVER\033[1;0m\033[1;31m [\033[1;0m");
        return 0;}
        if(arr[0][2]==arr[1][1]&&arr[1][1]==arr[2][0]){printf("\033[1;31m]\033[1;0m \033[1;33mGAME OVER\033[1;0m\033[1;31m [\033[1;0m");
          return 0;}

        
        if(x%2==0){printf("player O choice: ");}
        else{printf("Player X choice: ");}

        scanf(" %c",&n);
     
    for(i=0;i<3;i++){
     for(j=0;j<3;j++){
      if(x%2==0){
       if(n==arr[i][j]){ 
          arr[i][j]='O';}}
      else{
        if(n==arr[i][j]){ 
          arr[i][j]='X';}}
        }}           
        x++;
    }
}