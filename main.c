#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL_image.h>
#include <time.h>

#define marcher for(i=0;i<190;i++){ position.x++;\
if(i%2==0) dino=IMG_Load("dinop.bmp");\
if(i%2==1) dino=IMG_Load("dinoi.bmp");\
SDL_FillRect(screen,NULL,SDL_MapRGB(fond->format,255,255,255));\
SDL_BlitSurface(fond,NULL,screen,&p);\
SDL_SetColorKey(dino,SDL_SRCCOLORKEY,SDL_MapRGB(dino->format,255,255,255));\
SDL_BlitSurface(dino,NULL,screen,&position);\
SDL_BlitSurface(rectangle,NULL,screen,&p);\
SDL_Flip(screen);}





#define label dino=IMG_Load("../sprites/dino.bmp");\
SDL_BlitSurface(fond,NULL,screen,&p);\
SDL_BlitSurface(danger[arb],NULL,screen,&(pdanger[arb]));\
SDL_SetColorKey(dino,SDL_SRCCOLORKEY,SDL_MapRGB(dino->format,255,255,255));\
SDL_BlitSurface(dino,NULL,screen,&position);\
SDL_BlitSurface(rectangle,NULL,screen,&p);\
SDL_Flip(screen);

#define condition if(pdanger[arb].x==0) {((pdanger[arb]).x)=1092;\
((pdanger[arb]).y)=270-danger[arb]->h;\
     arb=(rand())%4;}














int main ( int argc, char** argv ){


if(SDL_Init(SDL_INIT_VIDEO)!=0)
fprintf(stderr,"Erreur:%s\n",SDL_GetError());


else {
        int TpDino[13][2];
        srand(time(NULL));
        int continuer=1,i,j=1,arb=1,t=0,t2=0,def=10,k;
SDL_Event event;
SDL_Rect position,p,pdanger[4],pos;
SDL_Surface *screen,*fond=IMG_Load("../sprites/route.bmp"),*dino=IMG_Load("../sprites/dino.bmp"),*danger[4],*gameO=IMG_Load("../sprites/GameOver.bmp"),*rectangle;
danger[0]=IMG_Load("../sprites/cactuce1.bmp");
danger[1]=IMG_Load("../sprites/cactuce2.bmp");
danger[2]=IMG_Load("../sprites/bird.bmp");
danger[3]=IMG_Load("../sprites/cactuce3.bmp");
screen=SDL_SetVideoMode(1092,418,32,SDL_HWSURFACE||SDL_DOUBLEBUF);
SDL_WM_SetCaption("DINOSORUS",NULL);
SDL_WM_SetIcon(dino,NULL);
rectangle=SDL_CreateRGBSurface(SDL_HWSURFACE,90,418,32,0,0,0,0);
SDL_FillRect(rectangle,NULL,SDL_MapRGB(rectangle->format,255,255,255));

 for(i=0;i<2;i++){
SDL_SetColorKey(danger[i],SDL_SRCCOLORKEY,SDL_MapRGB(danger[i]->format,255,255,255));
((pdanger[i]).x)=1092;
((pdanger[i]).y)=270-danger[i]->h;
}

//Saisis
TpDino[0][0]=4; TpDino[0][1]=35;
TpDino[1][0]=6;TpDino[1][1]=38;
TpDino[2][0]=8;TpDino[2][1]=40;
TpDino[3][0]=4;TpDino[3][1]=42;
TpDino[4][0]=13;TpDino[4][1]=44;
TpDino[5][0]=15;TpDino[5][1]=53;
TpDino[6][0]=19;TpDino[6][1]=53;
TpDino[7][0]=26;TpDino[7][1]=53;
TpDino[8][0]=30;TpDino[8][1]=53;
TpDino[9][0]=48;TpDino[9][1]=12;
TpDino[10][0]=34;TpDino[10][1]=36;
TpDino[11][0]=37;TpDino[11][1]=6;
TpDino[12][0]=39;TpDino[12][1]=28;







pos.x=(1092-50)/2;
pos.y=200;
position.x=170;
p.x=0;
 p.y=0;
position.y=270-dino->h;
SDL_BlitSurface(fond,NULL,screen,&p);
SDL_BlitSurface(rectangle,NULL,screen,&p);
SDL_SetColorKey(dino,SDL_SRCCOLORKEY,SDL_MapRGB(dino->format,255,255,255));
SDL_BlitSurface(dino,NULL,screen,&position);
SDL_Flip(screen);


while(j){
SDL_WaitEvent(&event);


if((event.type)==SDL_KEYDOWN){
        marcher
j=0;
}
}
while(continuer){
SDL_PollEvent(&event);
t=SDL_GetTicks();
if((t-t2)>def){
        condition
(pdanger[arb].x)--;
SDL_FillRect(screen,NULL,SDL_MapRGB(fond->format,255,255,255));
SDL_BlitSurface(rectangle,NULL,screen,&p);
SDL_BlitSurface(fond,NULL,screen,&p);
SDL_BlitSurface(danger[arb],NULL,screen,&(pdanger[arb]));
SDL_SetColorKey(dino,SDL_SRCCOLORKEY,SDL_MapRGB(dino->format,255,255,255));
SDL_BlitSurface(dino,NULL,screen,&position);
SDL_SetColorKey(danger[arb],SDL_SRCCOLORKEY,SDL_MapRGB(danger[arb]->format,255,255,255));
SDL_BlitSurface(danger[arb],NULL,screen,&(pdanger[arb]));
SDL_BlitSurface(rectangle,NULL,screen,&p);
SDL_Flip(screen);
t2=t;
}


switch(event.type){

case SDL_QUIT:
    continuer=0;
break;


case SDL_KEYDOWN:
switch(event.key.keysym.sym){
            fprintf(stderr,"test");

      for(j=0;j<13;j++){
            for(i=0;i< danger[arb]->w;i++){
    for(k=0;k< danger[arb]->h;k++){
            t=SDL_GetTicks();
if((TpDino[j][0]+position.x  == pdanger[arb].x+i)&&(TpDino[j][1]+position.y==pdanger[arb].y+k)){
            fprintf(stdout,"test");
goto end;}


 if((t-t2)>def){
        condition
(pdanger[arb].x)--;
t2=t;
}

    if((TpDino[j][0]+position.x  == pdanger[arb].x+i)&&(TpDino[j][1]+position.y==pdanger[arb].y+k)){
            fprintf(stderr,"test");
goto end;}

    }}}


                          case SDLK_ESCAPE:
                          continuer=0;
                          break;



                          case SDLK_SPACE:
                          case SDLK_UP:




      for(i=0;i<80;i++){


t=SDL_GetTicks();

 if((t-t2)>def){
        condition
(pdanger[arb].x)--;
t2=t;
}
                            position.y--;
                        label
    }






for(i=0;i<80;i++){
    for(j=0;j<12;j++){
    for(k=0;k<((danger[arb])->w);k++){
            t=SDL_GetTicks();

 if((t-t2)>def){
        condition
(pdanger[arb].x)--;
t2=t;
}



    if(position.x +TpDino[j][0] == pdanger[arb].x +k && (position.y+TpDino[j][1])<=(pdanger[arb].y+danger[arb]->h) && (position.y+TpDino[j][1])>=(pdanger[arb].y))
goto end;

    }}

t=SDL_GetTicks();

 if((t-t2)>def){
condition
(pdanger[arb].x)--;
t2=t;
}
                            position.y++;
                            label

    }







                            break;


}
break;
}
}

end:
SDL_BlitSurface(gameO,NULL,screen,&pos);
SDL_Flip(screen);
j=1;

while(j){
SDL_WaitEvent(&event);
if(event.type==SDL_QUIT) j=0;
}



for(i=0;i<4;i++){
    SDL_FreeSurface(danger[i]);
}
SDL_FreeSurface(rectangle);
SDL_FreeSurface(dino);
SDL_FreeSurface(gameO);
SDL_FreeSurface(fond);
                           }
                           return 0;}
