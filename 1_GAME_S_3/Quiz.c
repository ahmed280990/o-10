#include "Quiz.h"
char z = 0;
int quiz()
{
    printf("                  W E L C O M E   T H I E V E S\n");
    printf("                  ______________________________\n\n");
    car_rent();
    driver();
    gas();
    food();
    cctv();
    gards();
    safe();
    escape();
    air_port();
    plane();
    return 0;
    }
void car_rent()
{
    int x=0;
    printf(" YOU ARE IN                     |  T H E  C A R  S H O P\n\n");
    printf(" ANSWER Q_01 TO RENT A CAR      |         ");
    scanf("%5d",&x);
    if(x==-1)
        z++;
}
void driver()
{
    if(z==1){
    int x=0;
    printf("\n ANSWER Q_02 TO GET YOUR DRIVER |         ");
    scanf("%d",&x);
    if(x==10)
        z++;
    }
}
void gas()
{
    if(z==2){
    printf("\n YOU ARE IN                     |  G A S  S T A T I O N\n\n");
    int x;
    printf(" ANSWER Q_03 TO GET GAS         |         ");
    scanf(" %c",&x);
    if(x=='A')
        z++;
}
}
void food()
{
    if(z==3){
    int x=0;
    printf("\n ANSWER Q_04 TO BUY PIZZA       |         ");
    scanf("%d",&x);
    if(x==3)
        z++;
}
}
void cctv()
{
    if(z==4){
    int x=0;
    printf("\n YOU ARE IN                     |  T H E  B A N K\n\n");
    printf(" ANSWER Q_05 TO DISABLE CCTV    |         ");
    scanf("%5d",&x);
    if(x==8)
        z++;
    }
}
void gards()
{
    if(z==5){
    int x = 0;
    printf("\n ANSWER Q_06 TO DISTURB GARDS   |         ");
    scanf("%5d",&x);
    if(x==95)
        z++;
    }
}
void safe()
{
    if(z==6){
    int x=0;
    printf("\n ANSWER Q_07 TO OPEN THE SAFE   |         ");
    scanf("%5d",&x);
    if(x==1)
        z++;
    }
}
void escape()
{
    if(z==7){
    int x=0;
    printf("\n ANSWER Q_08 TO ESCAPE          |         ");
    scanf("%5d",&x);
    if(x==90)
        z++;
    }
}
void air_port()
{
    if(z==8){
    int x=0;
    printf("\n YOU ARE IN                     |  T H E  A I R  P O R T\n");
    printf("\n ANSWER Q_09 TO ACCESS AIRPORT  |         ");
    scanf("%5d",&x);
    if(x==22)
        z++;
}
}
void plane()
{
    if(z==9){
    int x=0;
    printf("\n YOU ARE IN                     |  T H E  P L A N E\n");
    printf("\n ANSWER Q_10 TO FLY             |         ");
    scanf("%5d",&x);
    if(x==85){
    printf("\n\n                   Y O U R    N U M B E R    I S    5 5 4 6 \n");
    printf("                  _________________________________________\n\n");
    printf("\n\n                           E N D    O F   G A M E \n\n\n");
}
}
}

