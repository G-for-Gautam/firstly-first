#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<time.h>

int main(){//ABC,,MR,,IJO,PQUV
    system("cls");
    char n='Z',arr[5][5]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y'};
    int i=0,j=0,  x=1,y=3,  a=1,b=3,c=4,d=0,  t=0,scr,q;
    printf("\n         \033[1;33m*\033[1;0m \033[1;34mHIT THE SHIP\033[1;0m \033[1;33m*\033[1;0m\n");
    printf("           \033[1;33m------------\033[1;0m\n\n");

    printf("There are 4 enemy submarines hidding in the sea...\n ");
    sleep(3);

    printf("Your Job is to find them in least counts...\n");
    sleep(3);

    printf("The dimensions of ships (found by our intellengence agency) are...\n");
    sleep(3);

    printf("                        _ _\n");
    printf(" _ _ _  , _ _  , |_ _ , _ _\n");
    sleep(6);
    printf("\033[1;31mGood Luck\033[1;0m\n");
    sleep(1.5);
    system("cls");

    while(1){
    
    t++;
    printf("\n         \033[1;33m*\033[1;0m \033[1;34mHIT THE SHIP\033[1;0m \033[1;33m*\033[1;0m\n");
    printf("           \033[1;33m------------\033[1;0m\n\n");

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){        
      printf("\033[1;35m|\033[1;0m__\033[1;31m%c\033[1;0m__\033[1;35m|\033[1;0m",arr[i][j]);
        }printf("\n\n");
    }

    printf("enter your destroying position: ");
    scanf(" %c",&n);
    if(n>=96&&n<=122){
      n=n-32;}
    

    for(i=0;i<5;i++){
    for(j=0;j<5;j++){
     if(n==arr[i][j]){
        if(n=='A'||n=='B'||n=='C'||n=='M'||n=='R'||n=='I'||n=='J'||n=='O'||n=='P'||n=='Q'||n=='U'||n=='V')
        {printf("BULLSEYE\n");sleep(1.5);}
        else{printf("AMMO. WASTED\n");sleep(1.5);}
          }}}

    

    for(i=0;i<5;i++){
    for(j=0;j<5;j++){
     if(n==arr[i][j]){
        if(n=='A'||n=='B'||n=='C'||n=='M'||n=='R'||n=='I'||n=='J'||n=='O'||n=='P'||n=='Q'||n=='U'||n=='V')
          {arr[i][j]='*';}
        else{arr[i][j]='_';}
    }}}

    system("cls");

    if(arr[0][0]==arr[0][a]&&arr[0][a]==arr[0][2]){printf("Congrats! You destroyed %d ships, %d more remaining\n",x,y);x++;y--;a=3;}
    if(arr[2][2]==arr[b][2]){printf("Congrats! You destroyed %d ships, %d more remaining\n",x,y);x++;y--;b=4;}
    if(arr[1][3]==arr[1][c]&&arr[1][c]==arr[2][4]){printf("Congrats! You destroyed %d ships, %d more remaining\n",x,y);x++;y--;c=0;}
    if(arr[3][d]==arr[4][d]&&arr[4][d]==arr[4][1]&&arr[4][1]==arr[3][1]){printf("Congrats! You destroyed %d ships, %d more remaining\n",x,y);x++;y--;d=4;}
    
    if((arr[0][0]==arr[0][1]&&arr[0][1]==arr[0][2])&&(arr[2][2]==arr[3][2])&&(arr[1][3]==arr[1][4]&&arr[1][4]==arr[2][4])&&(arr[3][0]==arr[4][0]&&arr[4][0]==arr[4][1]&&arr[4][1]==arr[3][1]))
      {scr=1200/t;
        if(scr<=60){printf("Not too Good...\nYour \033[1;33mSCORE\033[1;0m is [\033[1;31m%d\033[1;0m]/100.\n",scr);}
        else if (scr>=61&&scr<=80){printf("Well done, You \033[1;31mDESTROYED\033[1;0m all SHIPS.\nYour \033[1;33mSCORE\033[1;0m is [\033[1;33m%d\033[1;0m]/100.\n",scr);}
        else if(scr>=81){printf("Excellent, You \033[1;31mDESTROYED\033[1;0m all SHIPS.\nYour \033[1;33mSCORE\033[1;0m is [\033[1;32m%d\033[1;0m]/100.\n",scr);}
      return 0;
      }
      
    }

}