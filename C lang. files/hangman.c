#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<time.h>

void head(){
 printf(" ___________\n");
 printf("|  \033[1;33m*     *\033[1;0m  |\n");
 printf("|           |\n");
 printf("|_____O_____|\n");
}
void headlast(){
 printf(" ___________\n");
 printf("|  \033[1;31mX     X\033[1;0m  |\n");
 printf("|           |\n");
 printf("|_____O_____|\n");
}
void Dorsal(){
  for(int i=0;i<=3;i++){
  for(int j=6;j>0;j--){
      printf(" ");    
      }printf("|");
      printf("\n");
}printf("\n");}
void Lefthand(){
    int x=4,y=1;
for(int i=0;i<=3;i++){
    for(int j=x;j>0;j--){
    printf(" ");
    }x--;
    printf("/");
    
    for(int j=y;j>0;j--){
      printf(" ");    
      }y++;
      printf("|");
      printf("\n");}
      printf("\n");
}
void Righthand(){
    int x=4,y=1,z=1;
for(int i=0;i<=3;i++){
    for(int j=x;j>0;j--){
    printf(" ");
    }x--;
    printf("/");
    
    for(int j=y;j>0;j--){
      printf(" ");    
      }y++;
      printf("|");
    for(int j=z;j>0;j--){
        printf(" ");
    }z++;
    printf("\\");
    printf("\n");
      
      }printf("\n");
}
void Leftleg(){
    int x=4,y=1,z=1;
for(int i=0;i<=3;i++){
    for(int j=x;j>0;j--){
    printf(" ");
    }x--;
    printf("/");
    
    for(int j=y;j>0;j--){
      printf(" ");    
      }y++;
      printf("|");
    for(int j=z;j>0;j--){
        printf(" ");
    }z++;
    printf("\\");
    printf("\n");
      }
      x=4;
    for(int i=0;i<=3;i++){
    for(int j=x;j>0;j--){
    printf(" ");
    }x--;
    printf("/\n");

}printf("\n");}
void Rightleg(){
    int x=4,y=1,z=1;
for(int i=0;i<=3;i++){
    for(int j=x;j>0;j--){
    printf(" ");
    }x--;
    printf("/");
    
    for(int j=y;j>0;j--){
      printf(" ");    
      }y++;
      printf("|");
    for(int j=z;j>0;j--){
        printf(" ");
    }z++;
    printf("\\");
    printf("\n");
      }
      x=4;z=3;
    for(int i=0;i<=3;i++){
    for(int j=x;j>0;j--){
    printf(" ");
    }x--;
    printf("/");
    for(int j=z;j>0;j--){
        printf(" ");
    }z+=2;
    printf("\\");
    printf("\n");
    }printf("\n");
    
}
void attemp(){
  printf("LAST ATTEMPT LEFT\n");
}   
void bridge(int* a){
  if(*a==1){head();}
  if(*a==2){head();Dorsal();}
  if(*a==3){head();Lefthand();}
  if(*a==4){head();Righthand();}
  if(*a==5){head();Leftleg();}
  if(*a==6){head();Rightleg();attemp();}
  if(*a==7){headlast();Rightleg();} 
}    

int main(){
  system("cls");
  printf("[ \033[1;32mWelcome\033[1;0m to \033[1;33mHANGMAN\033[1;0m ]\n");
  sleep(2);
  printf("\033[1;34mGuess the words before the hangman dies\033[1;0m...\n");
  sleep(3);
  printf("\033[1;34mevery wrong guess will be a step towards its death\033[1;0m...\n");
  sleep(3);
  printf("\033[1;34mSo, be cautious\033[1;0m...\n");
  sleep(3);
  printf("\033[1;31mGood Luck\033[1;0m\n\n");
  sleep(2);

  int value,count=1,t;
    char word1[10]={'c','o','m','p','i','l','l','a','r','\0'};
    char ask1[10]={'_','_','m','p','_','_','l','a','_','\0'};

    char word2[9]={'d','i','c','t','a','t','o','r','\0'};
    char ask2[9]={'_','i','_','_','a','t','o','_','\0'};

    char word3[15]={'p','r','o','c','a','s','t','i','n','a','t','i','o','n','\0'};
    char ask3[15]={'p','_','o','_','a','_','_','_','_','a','t','i','o','n','\0'};


while(count<=7){

    while(value!=0){
      printf("\033[1;31mLEVEL 1\033[1;0m\n");
      printf("\033[1;35mFirst Word\033[1;0m : ");
      for(int i=0;i<10;i++){
      if(ask1[i]!='_'){printf("\033[1;32m%c\033[1;0m ",ask1[i]);}
      else{printf("\033[1;31m%c\033[1;0m ",ask1[i]);}}
     printf("\n");
    char n;
    printf("enter your guess : ");
    scanf(" %c",&n);
    t++;
    for(int i=0;i<10;i++){
      if(n==word1[i]){ask1[i]=n;break;}
      else if(i==9 && n!=word1[i]){bridge(&count);count++;}
    }
    value=strcmp(ask1,word1);
     if(count>7){break;}
    }
    if(count>7){break;}
    value=1;
    printf("\n");

while(value!=0){
      printf("\033[1;31mLEVEL 2\033[1;0m\n");
      printf("\033[1;35mSecond Word\033[1;0m : ");
      for(int i=0;i<9;i++){
      if(ask2[i]!='_'){printf("\033[1;32m%c\033[1;0m ",ask2[i]);}
      else{printf("\033[1;31m%c\033[1;0m ",ask2[i]);}}
      printf("\n");
    char n;

    printf("enter your guess : ");
    scanf(" %c",&n);
    t++;
    for(int i=0;i<9;i++){
      if(n==word2[i]){ask2[i]=n;break;}
      else if(i==8 && n!=word1[i]){bridge(&count);count++;}
    }
     
    value=strcmp(ask2,word2);
     if(count>7){break;}
    }
     if(count>7){break;}
    value=1;
    printf("\n");

    while(value!=0){
      printf("\033[1;31mLEVEL 3\033[1;0m\n");
      printf("\033[1;35mThird Word\033[1;0m : ");
      for(int i=0;i<15;i++){
      if(ask3[i]!='_'){printf("\033[1;32m%c\033[1;0m ",ask3[i]);}
      else{printf("\033[1;31m%c\033[1;0m ",ask3[i]);}}
      printf("\n");
    char n;

    printf("enter your guess : ");
    scanf(" %c",&n);
    t++;
    for(int i=0;i<15;i++){
      if(n==word3[i]){ask3[i]=n;break;}
      else if(i==14 && n!=word1[i]){bridge(&count);count++;}
    }

    value=strcmp(ask3,word3);
     if(count>7){break;}
    } 
    if(count>7){break;}
    break;
    }

    if(count<7){
    printf("\n\033[1;33mCongrats\033[1;0m, for your \033[1;32mWin\033[1;0m..\n");
    printf("Your \033[1;33mscore\033[1;0m is [\033[1;33m %d \033[1;0m].",(t-count)*100/t);}
    else if(count>=7){
      printf("Oops, you \033[1;31mkilled\033[1;0m the hangman..\n");
     printf("Your \033[1;33mscore\033[1;0m is [ \033[1;33m%d\033[1;0m ]/100.",(t-count)*100/t);
    }
    return 0;
}
  