#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
#include<process.h>
#include<stdlib.h>
#include<time.h>
int getscan();
void one8(int[],int[],int);
void two8(int[],int[],int[],int[],int[],int);
void three8(int[],int[],int[],int[],int[],int);
void four8(int[],int[],int[],int[],int);
void five8(int[],int[],int[],int[],int[],int);
void six8(int[],int[],int[],int[],int[],int[],int);
void seven8(int[],int[],int[],int);
void eight8(int[],int[],int[],int[],int[],int[],int[],int);
void nine8(int[],int[],int[],int[],int[],int[],int);
void zero8(int[],int[],int[],int[],int[],int[],int);
void one6(int[],int[],int);
void two6(int[],int[],int[],int[],int[],int);
void three6(int[],int[],int[],int[],int[],int);
void four6(int[],int[],int[],int[],int);
void five6(int[],int[],int[],int[],int[],int);
void six6(int[],int[],int[],int[],int[],int[],int);
void seven6(int[],int[],int[],int);
void eight6(int[],int[],int[],int[],int[],int[],int[],int);
void nine6(int[],int[],int[],int[],int[],int[],int);
void zero6(int[],int[],int[],int[],int[],int[],int);
void one5(int[],int[],int);
void two5(int[],int[],int[],int[],int[],int);
void three5(int[],int[],int[],int[],int[],int);
void four5(int[],int[],int[],int[],int);
void five5(int[],int[],int[],int[],int[],int);
void six5(int[],int[],int[],int[],int[],int[],int);
void seven5(int[],int[],int[],int);
void eight5(int[],int[],int[],int[],int[],int[],int[],int);
void nine5(int[],int[],int[],int[],int[],int[],int);
void zero5(int[],int[],int[],int[],int[],int[],int);
void one4(int[],int[],int);
void two4(int[],int[],int[],int[],int[],int);
void three4(int[],int[],int[],int[],int[],int);
void four4(int[],int[],int[],int[],int);
void five4(int[],int[],int[],int[],int[],int);
void six4(int[],int[],int[],int[],int[],int[],int);
void seven4(int[],int[],int[],int);
void eight4(int[],int[],int[],int[],int[],int[],int[],int);
void nine4(int[],int[],int[],int[],int[],int[],int);
void zero4(int[],int[],int[],int[],int[],int[],int);

void one7(int[],int[],int);
void microsnd8(int[],int[],int[],int[],int[],int[],int[],int);
void microsnd7(int[],int[],int[],int[],int[],int[],int[],int);
void microsnd6(int[],int[],int[],int[],int[],int[],int[],int);
void microsnd5(int[],int[],int[],int[],int[],int[],int[],int);
void microsnd4(int[],int[],int[],int[],int[],int[],int[],int);
void microsnd3(int[],int[],int[],int[],int[],int[],int[],int);
void microsnd2(int[],int[],int[],int[],int[],int[],int[],int);
void microsnd1(int[],int[],int[],int[],int[],int[],int[],int);
void startandpause(void);
void pauseandstart(void);
main()
{
 int gdriver=DETECT,gmode,errorcode,choice,select;
 int poly1[10]={50,200,90,200,85,205,55,205,50,200};
 int poly2[10]={85,210,90,205,90,245,85,240,85,210};
 int poly3[10]={85,256,90,251,90,291,85,286,85,256};
 int poly4[10]={55,291,85,291,90,296,50,296,55,291};
 int poly5[10]={50,251,55,256,55,286,50,291,50,251};
 int poly6[10]={50,205,55,210,55,240,50,245,50,205};
 int poly7[14]={55,245,85,245,90,248,85,251,55,251,50,248,55,245};
 //first poly end
 int poly8[10]={110,200,150,200,145,205,115,205,110,200};
 int poly9[10]={145,210,150,205,150,245,145,240,145,210};
 int poly10[10]={145,256,150,251,150,291,145,286,145,256};
 int poly11[10]={115,291,145,291,150,296,110,296,115,291};
 int poly12[10]={110,251,115,256,115,286,110,291,110,251};
 int poly13[10]={110,205,115,210,115,240,110,245,110,205};
 int poly14[14]={115,245,145,245,150,248,145,251,115,251,110,248,115,245};
 //second poly end
 int poly15[10]={190,200,230,200,225,205,195,205,190,200};
 int poly16[10]={225,210,230,205,230,245,225,240,225,210};
 int poly17[10]={225,256,230,251,230,291,225,286,225,256};
 int poly18[10]={195,291,225,291,230,296,190,296,195,291};
 int poly19[10]={190,251,195,256,195,286,190,291,190,251};
 int poly20[10]={190,205,195,210,195,240,190,245,190,205};
 int poly21[14]={195,245,225,245,230,248,225,251,195,251,190,248,195,245};
 //third poly end
 int poly22[10]={250,200,290,200,285,205,255,205,250,200};
 int poly23[10]={285,210,290,205,290,245,285,240,285,210};
 int poly24[10]={285,256,290,251,290,291,285,286,285,256};
 int poly25[10]={255,291,285,291,290,296,250,296,255,291};
 int poly26[10]={250,251,255,256,255,286,250,291,250,251};
 int poly27[10]={250,205,255,210,255,240,250,245,250,205};
 int poly28[14]={255,245,285,245,290,248,285,251,255,251,250,248,255,245};
 //fourth poly end
 int poly29[10]={330,200,370,200,365,205,335,205,330,200};
 int poly30[10]={365,210,370,205,370,245,365,240,365,210};
 int poly31[10]={365,256,370,251,370,291,365,286,365,256};
 int poly32[10]={335,291,365,291,370,296,330,296,335,291};
 int poly33[10]={330,251,335,256,335,286,330,291,330,251};
 int poly34[10]={330,205,335,210,335,240,330,245,330,205};
 int poly35[14]={335,245,365,245,370,248,365,251,335,251,330,248,335,245};
 //fifth poly end
 int poly36[10]={390,200,430,200,425,205,395,205,390,200};
 int poly37[10]={425,210,430,205,430,245,425,240,425,210};
 int poly38[10]={425,256,430,251,430,291,425,286,425,256};
 int poly39[10]={395,291,425,291,430,296,390,296,395,291};
 int poly40[10]={390,251,395,256,395,286,390,291,390,251};
 int poly41[10]={390,205,395,210,395,240,390,245,390,205};
 int poly42[14]={395,245,425,245,430,248,425,251,395,251,390,248,395,245};
 //sixth poly end
 int poly43[10]={470,200,510,200,505,205,475,205,470,200};
 int poly44[10]={505,210,510,205,510,245,505,240,505,210};
 int poly45[10]={505,256,510,251,510,291,505,286,505,256};
 int poly46[10]={475,291,505,291,510,296,470,296,475,291};
 int poly47[10]={470,251,475,256,475,286,470,291,470,251};
 int poly48[10]={470,205,475,210,475,240,470,245,470,205};
 int poly49[14]={475,245,505,245,510,248,505,251,475,251,470,248,475,245};
 //seventh poly end
 int poly50[10]={530,200,570,200,565,205,535,205,530,200};
 int poly51[10]={565,210,570,205,570,245,565,240,565,210};
 int poly52[10]={565,256,570,251,570,291,565,286,565,256};
 int poly53[10]={535,291,565,291,570,296,530,296,535,291};
 int poly54[10]={530,251,535,256,535,286,530,291,530,251};
 int poly55[10]={530,205,535,210,535,240,530,245,530,205};
 int poly56[14]={535,245,565,245,570,248,565,251,535,251,530,248,535,245};
 //eight poly end
 int c1=7,c2=14,c3=12,i=0,opt,k=0;
 initgraph(&gdriver,&gdriver,"");
 setcolor(4);
 settextstyle(GOTHIC_FONT,HORIZ_DIR,7);
 outtextxy(170,5,"DIGITAL");
 settextstyle(GOTHIC_FONT,HORIZ_DIR,8);
 outtextxy(70,60,"STOPWATCH");
 setcolor(c1);
      setfillstyle(1,c1);
      circle(170,232,3);
      floodfill(171,233,c1);
      circle(170,264,3);
      floodfill(171,265,c1);

      circle(310,232,3);
      floodfill(311,233,c1);
      circle(310,264,3);
      floodfill(311,265,c1);

      circle(450,232,3);
      floodfill(451,233,c1);
      circle(450,264,3);
      floodfill(451,265,c1);
      setlinestyle(CENTER_LINE,1,1);
      rectangle(30,180,590,316);
      setlinestyle(SOLID_LINE,1,1);
      setcolor(7);
      setfillstyle(1,8);
      ellipse(200, 370,0,360, 40,20);
      floodfill(201,371,7);
      ellipse(310, 370,0,360, 40,20);
      floodfill(301,371,7);
      ellipse(420, 370,0,360, 40,20);
      floodfill(421,371,7);
      setcolor(7);
      settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
      outtextxy(195,350,"S");
      outtextxy(302,350,"R");
      outtextxy(413,350,"P");
while(1)
{
     microsnd1(poly1,poly2,poly3,poly4,poly5,poly6,poly7,c1);
     microsnd2(poly8,poly9,poly10,poly11,poly12,poly13,poly14,c1);
     microsnd3(poly15,poly16,poly17,poly18,poly19,poly20,poly21,c1);
     microsnd4(poly22,poly23,poly24,poly25,poly26,poly27,poly28,c1);
     microsnd5(poly29,poly30,poly31,poly32,poly33,poly34,poly35,c1);
     microsnd6(poly36,poly37,poly38,poly39,poly40,poly41,poly42,c1);
     microsnd7(poly43,poly44,poly45,poly46,poly47,poly48,poly49,c1);
     microsnd8(poly50,poly51,poly52,poly53,poly54,poly55,poly56,c1);
    opt=getscan();
    if(opt==1)
    {
    break;
    }
    if(opt==31)
    {
     setcolor(4);
     outtextxy(195,350,"S");
     i=0;
     k=0;
    while(1)
     {
      setcolor(c3);
      setfillstyle(1,c3);
      circle(170,232,3);
      floodfill(171,233,c3);
      circle(170,264,3);
      floodfill(171,265,c3);

      circle(310,232,3);
      floodfill(311,233,c3);
      circle(310,264,3);
      floodfill(311,265,c3);

      circle(450,232,3);
      floodfill(451,233,c3);
      circle(450,264,3);
      floodfill(451,265,c3);

      microsnd7(poly43,poly44,poly45,poly46,poly47,poly48,poly49,c1);
      microsnd8(poly50,poly51,poly52,poly53,poly54,poly55,poly56,c1);
      one8(poly51,poly52,c2);
      delay(100);
      if(kbhit())
      {
       opt=getscan();
       if(opt==19)
       {
	setcolor(7);
	outtextxy(195,350,"S");
	break;
       }
       if(opt==25)
	 {
	  startandpause();
	  pause1:
	  opt=getscan();
	  if(opt==31)
	   {
	    pauseandstart();
	   }
	   else
	   {
	   goto pause1;
	   }
       }
      }
      microsnd8(poly50,poly51,poly52,poly53,poly54,poly55,poly56,c1);
      two8(poly50,poly51,poly53,poly54,poly56,c2);
      delay(100);
      if(kbhit())
      {
       opt=getscan();
       if(opt==19)
       {
	setcolor(7);
	outtextxy(195,350,"S");
	break;
       }
       if(opt==25)
       {
	  startandpause();
	  pause2:
	  opt=getscan();
	  if(opt==31)
	   {
	    pauseandstart();
	   }
	   else
	   {
	   goto pause2;
	   }
       }
      }
      microsnd8(poly50,poly51,poly52,poly53,poly54,poly55,poly56,c1);
      three8(poly50,poly51,poly52,poly53,poly56,c2);
      delay(100);
      if(kbhit())
      {
       opt=getscan();
       if(opt==19)
       {
	setcolor(7);
	outtextxy(195,350,"S");
	break;
       }
       if(opt==25)
       {
	  startandpause();
	  pause3:
	  opt=getscan();
	  if(opt==31)
	   {
	    pauseandstart();
	   }
	   else
	   {
	   goto pause3;
	   }
       }
      }
      microsnd8(poly50,poly51,poly52,poly53,poly54,poly55,poly56,c1);
      four8(poly51,poly52,poly55,poly56,c2);
      delay(100);
      if(kbhit())
      {
       opt=getscan();
       if(opt==19)
       {
	setcolor(7);
	outtextxy(195,350,"S");
	break;
       }
       if(opt==25)
       {
	  startandpause();
	  pause4:
	  opt=getscan();
	  if(opt==31)
	   {
	    pauseandstart();
	   }
	   else
	   {
	   goto pause4;
	   }
       }
      }
      microsnd8(poly50,poly51,poly52,poly53,poly54,poly55,poly56,c1);
      five8(poly50,poly52,poly53,poly55,poly56,c2);
      delay(100);
      if(kbhit())
      {
       opt=getscan();
       if(opt==19)
       {
	setcolor(7);
	outtextxy(195,350,"S");
	break;
       }
       if(opt==25)
       {
	  startandpause();
	  pause5:
	  opt=getscan();
	  if(opt==31)
	   {
	    pauseandstart();
	   }
	   else
	   {
	   goto pause5;
	   }
       }
      }
      microsnd8(poly50,poly51,poly52,poly53,poly54,poly55,poly56,c1);
      six8(poly50,poly52,poly53,poly54,poly55,poly56,c2);
      delay(100);
      if(kbhit())
      {
       opt=getscan();
       if(opt==19)
       {
	setcolor(7);
	outtextxy(195,350,"S");
	break;
       }
       if(opt==25)
       {
	  startandpause();
	  pause6:
	  opt=getscan();
	  if(opt==31)
	   {
	    pauseandstart();
	   }
	   else
	   {
	   goto pause6;
	   }
       }
      }
      microsnd8(poly50,poly51,poly52,poly53,poly54,poly55,poly56,c1);
      seven8(poly50,poly51,poly52,c2);
      delay(100);
      if(kbhit())
      {
       opt=getscan();
       if(opt==19)
       {
	setcolor(7);
	outtextxy(195,350,"S");
	break;
       }
       if(opt==25)
       {
	  startandpause();
	  pause7:
	  opt=getscan();
	  if(opt==31)
	   {
	    pauseandstart();
	   }
	   else
	   {
	   goto pause7;
	   }
       }
      }
      microsnd8(poly50,poly51,poly52,poly53,poly54,poly55,poly56,c1);
      eight8(poly50,poly51,poly52,poly53,poly54,poly55,poly56,c2);
      delay(100);
      if(kbhit())
      {
       opt=getscan();
       if(opt==19)
       {
	setcolor(7);
	outtextxy(195,350,"S");
	break;
       }
       if(opt==25)
       {
	  startandpause();
	  pause8:
	  opt=getscan();
	  if(opt==31)
	   {
	    pauseandstart();
	   }
	   else
	   {
	   goto pause8;
	   }
       }
      }
      microsnd8(poly50,poly51,poly52,poly53,poly54,poly55,poly56,c1);
      nine8(poly50,poly51,poly52,poly53,poly55,poly56,c2);
      delay(100);
      if(kbhit())
      {
       opt=getscan();
       if(opt==19)
       {
	setcolor(7);
	outtextxy(195,350,"S");
	break;
       }
       if(opt==25)
       {
	  startandpause();
	  pause9:
	  opt=getscan();
	  if(opt==31)
	   {
	    pauseandstart();
	   }
	   else
	   {
	   goto pause9;
	   }
       }
      }
      microsnd8(poly50,poly51,poly52,poly53,poly54,poly55,poly56,c1);
      zero8(poly50,poly51,poly52,poly53,poly54,poly55,c2);
      one7(poly44,poly45,c2);
      delay(100);
      if(kbhit())
      {
       opt=getscan();
       if(opt==19)
       {
	setcolor(7);
	outtextxy(195,350,"S");
	break;
       }
       if(opt==25)
       {
	  startandpause();
	  pause10:
	  opt=getscan();
	  if(opt==31)
	   {
	   pauseandstart();
	   }
	   else
	   {
	   goto pause10;
	   }
       }
      }
      i++;
      if(i==1)
      {
      microsnd5(poly29,poly30,poly31,poly32,poly33,poly34,poly35,c1);
      microsnd6(poly36,poly37,poly38,poly39,poly40,poly41,poly42,c1);
      one6(poly37,poly38,c2);
      }
      if(i==2)
      {
      microsnd6(poly36,poly37,poly38,poly39,poly40,poly41,poly42,c1);
      two6(poly36,poly37,poly39,poly40,poly42,c2);
      }
      if(i==3)
      {
      microsnd6(poly36,poly37,poly38,poly39,poly40,poly41,poly42,c1);
      three6(poly36,poly37,poly38,poly39,poly42,c2);
      }
      if(i==4)
      {
      microsnd6(poly36,poly37,poly38,poly39,poly40,poly41,poly42,c1);
      four6(poly37,poly38,poly41,poly42,c2);
      }
      if(i==5)
      {
      microsnd6(poly36,poly37,poly38,poly39,poly40,poly41,poly42,c1);
      five6(poly36,poly38,poly39,poly41,poly42,c2);
      }
      if(i==6)
      {
      microsnd6(poly36,poly37,poly38,poly39,poly40,poly41,poly42,c1);
      six6(poly36,poly38,poly39,poly40,poly41,poly42,c2);
      }
      if(i==7)
      {
      microsnd6(poly36,poly37,poly38,poly39,poly40,poly41,poly42,c1);
      seven6(poly36,poly37,poly38,c2);
      }
      if(i==8)
      {
      microsnd6(poly36,poly37,poly38,poly39,poly40,poly41,poly42,c1);
      eight6(poly36,poly37,poly38,poly39,poly40,poly41,poly42,c2);
      }
      if(i==9)
      {
      microsnd6(poly36,poly37,poly38,poly39,poly40,poly41,poly42,c1);
      nine6(poly36,poly37,poly38,poly39,poly41,poly42,c2);
      }
      if(i==10)
      {
	microsnd5(poly29,poly30,poly31,poly32,poly33,poly34,poly35,c1);
      microsnd6(poly36,poly37,poly38,poly39,poly40,poly41,poly42,c1);
      one5(poly30,poly31,c2);
      zero6(poly36,poly37,poly38,poly39,poly40,poly41,c2);
      }
      if(i==11)
      {
	microsnd5(poly29,poly30,poly31,poly32,poly33,poly34,poly35,c1);
      microsnd6(poly36,poly37,poly38,poly39,poly40,poly41,poly42,c1);
      one5(poly30,poly31,c2);
      one6(poly37,poly38,c2);
      }
      if(i==12)
      {
	microsnd5(poly29,poly30,poly31,poly32,poly33,poly34,poly35,c1);
      microsnd6(poly36,poly37,poly38,poly39,poly40,poly41,poly42,c1);
      one5(poly30,poly31,c2);
      two6(poly36,poly37,poly39,poly40,poly42,c2);
      }
      if(i==13)
      {
	microsnd5(poly29,poly30,poly31,poly32,poly33,poly34,poly35,c1);
      microsnd6(poly36,poly37,poly38,poly39,poly40,poly41,poly42,c1);
      one5(poly30,poly31,c2);
      three6(poly36,poly37,poly38,poly39,poly42,c2);
      }
      if(i==14)
      {
	microsnd5(poly29,poly30,poly31,poly32,poly33,poly34,poly35,c1);
      microsnd6(poly36,poly37,poly38,poly39,poly40,poly41,poly42,c1);
      one5(poly30,poly31,c2);
      four6(poly37,poly38,poly41,poly42,c2);

      }
      if(i==15)
      {
	microsnd5(poly29,poly30,poly31,poly32,poly33,poly34,poly35,c1);
      microsnd6(poly36,poly37,poly38,poly39,poly40,poly41,poly42,c1);
      one5(poly30,poly31,c2);
      five6(poly36,poly38,poly39,poly41,poly42,c2);

      }
      if(i==16)
      {
	microsnd5(poly29,poly30,poly31,poly32,poly33,poly34,poly35,c1);
      microsnd6(poly36,poly37,poly38,poly39,poly40,poly41,poly42,c1);
      one5(poly30,poly31,c2);
      six6(poly36,poly38,poly39,poly40,poly41,poly42,c2);
      }
      if(i==17)
      {
	microsnd5(poly29,poly30,poly31,poly32,poly33,poly34,poly35,c1);
      microsnd6(poly36,poly37,poly38,poly39,poly40,poly41,poly42,c1);
      one5(poly30,poly31,c2);
      seven6(poly36,poly37,poly38,c2);

      }
      if(i==18)
      {
	microsnd5(poly29,poly30,poly31,poly32,poly33,poly34,poly35,c1);
      microsnd6(poly36,poly37,poly38,poly39,poly40,poly41,poly42,c1);
      one5(poly30,poly31,c2);
      eight6(poly36,poly37,poly38,poly39,poly40,poly41,poly42,c2);

      }
      if(i==19)
      {
	microsnd5(poly29,poly30,poly31,poly32,poly33,poly34,poly35,c1);
      microsnd6(poly36,poly37,poly38,poly39,poly40,poly41,poly42,c1);
      one5(poly30,poly31,c2);
      nine6(poly36,poly37,poly38,poly39,poly41,poly42,c2);
      }
      if(i==20)
      {
	microsnd5(poly29,poly30,poly31,poly32,poly33,poly34,poly35,c1);
      microsnd6(poly36,poly37,poly38,poly39,poly40,poly41,poly42,c1);
      two5(poly29,poly30,poly32,poly33,poly35,c2);
      zero6(poly36,poly37,poly38,poly39,poly40,poly41,c2);
      }
      if(i==21)
      {
      microsnd5(poly29,poly30,poly31,poly32,poly33,poly34,poly35,c1);
      microsnd6(poly36,poly37,poly38,poly39,poly40,poly41,poly42,c1);
      two5(poly29,poly30,poly32,poly33,poly35,c2);
      one6(poly37,poly38,c2);
      }
      if(i==22)
      {
      microsnd5(poly29,poly30,poly31,poly32,poly33,poly34,poly35,c1);
      microsnd6(poly36,poly37,poly38,poly39,poly40,poly41,poly42,c1);
      two5(poly29,poly30,poly32,poly33,poly35,c2);
      two6(poly36,poly37,poly39,poly40,poly42,c2);
      }
      if(i==23)
      {
      microsnd5(poly29,poly30,poly31,poly32,poly33,poly34,poly35,c1);
      microsnd6(poly36,poly37,poly38,poly39,poly40,poly41,poly42,c1);
      two5(poly29,poly30,poly32,poly33,poly35,c2);
      three6(poly36,poly37,poly38,poly39,poly42,c2);
      }
      if(i==24)
      {
      microsnd5(poly29,poly30,poly31,poly32,poly33,poly34,poly35,c1);
      microsnd6(poly36,poly37,poly38,poly39,poly40,poly41,poly42,c1);
      two5(poly29,poly30,poly32,poly33,poly35,c2);
      four6(poly37,poly38,poly41,poly42,c2);
      }
      if(i==25)
      {
      microsnd5(poly29,poly30,poly31,poly32,poly33,poly34,poly35,c1);
      microsnd6(poly36,poly37,poly38,poly39,poly40,poly41,poly42,c1);
      two5(poly29,poly30,poly32,poly33,poly35,c2);
      five6(poly36,poly38,poly39,poly41,poly42,c2);
      }
      if(i==26)
      {
      microsnd5(poly29,poly30,poly31,poly32,poly33,poly34,poly35,c1);
      microsnd6(poly36,poly37,poly38,poly39,poly40,poly41,poly42,c1);
      two5(poly29,poly30,poly32,poly33,poly35,c2);
      six6(poly36,poly38,poly39,poly40,poly41,poly42,c2);
      }
      if(i==27)
      {
      microsnd5(poly29,poly30,poly31,poly32,poly33,poly34,poly35,c1);
      microsnd6(poly36,poly37,poly38,poly39,poly40,poly41,poly42,c1);
      two5(poly29,poly30,poly32,poly33,poly35,c2);
      seven6(poly36,poly37,poly38,c2);
      }
      if(i==28)
      {
       microsnd5(poly29,poly30,poly31,poly32,poly33,poly34,poly35,c1);
       microsnd6(poly36,poly37,poly38,poly39,poly40,poly41,poly42,c1);
       two5(poly29,poly30,poly32,poly33,poly35,c2);
       eight6(poly36,poly37,poly38,poly39,poly40,poly41,poly42,c2);

      }
      if(i==29)
      {
      microsnd5(poly29,poly30,poly31,poly32,poly33,poly34,poly35,c1);
      microsnd6(poly36,poly37,poly38,poly39,poly40,poly41,poly42,c1);
      two5(poly29,poly30,poly32,poly33,poly35,c2);
      nine6(poly36,poly37,poly38,poly39,poly41,poly42,c2);
      }
      if(i==30)
      {
      microsnd5(poly29,poly30,poly31,poly32,poly33,poly34,poly35,c1);
      microsnd6(poly36,poly37,poly38,poly39,poly40,poly41,poly42,c1);
      three5(poly29,poly30,poly31,poly32,poly35,c2);
      zero6(poly36,poly37,poly38,poly39,poly40,poly41,c2);
      }
      if(i==31)
      {
      microsnd5(poly29,poly30,poly31,poly32,poly33,poly34,poly35,c1);
      microsnd6(poly36,poly37,poly38,poly39,poly40,poly41,poly42,c1);
      three5(poly29,poly30,poly31,poly32,poly35,c2);
      one6(poly37,poly38,c2);
      }
      if(i==32)
      {
      microsnd5(poly29,poly30,poly31,poly32,poly33,poly34,poly35,c1);
      microsnd6(poly36,poly37,poly38,poly39,poly40,poly41,poly42,c1);
      three5(poly29,poly30,poly31,poly32,poly35,c2);
      two6(poly36,poly37,poly39,poly40,poly42,c2);
      }
      if(i==33)
      {
      microsnd5(poly29,poly30,poly31,poly32,poly33,poly34,poly35,c1);
      microsnd6(poly36,poly37,poly38,poly39,poly40,poly41,poly42,c1);
      three5(poly29,poly30,poly31,poly32,poly35,c2);
      three6(poly36,poly37,poly38,poly39,poly42,c2);
      }
      if(i==34)
      {
      microsnd5(poly29,poly30,poly31,poly32,poly33,poly34,poly35,c1);
      microsnd6(poly36,poly37,poly38,poly39,poly40,poly41,poly42,c1);
      three5(poly29,poly30,poly31,poly32,poly35,c2);
      four6(poly37,poly38,poly41,poly42,c2);
      }
      if(i==35)
      {
      microsnd5(poly29,poly30,poly31,poly32,poly33,poly34,poly35,c1);
      microsnd6(poly36,poly37,poly38,poly39,poly40,poly41,poly42,c1);
      three5(poly29,poly30,poly31,poly32,poly35,c2);
      five6(poly36,poly38,poly39,poly41,poly42,c2);
      }
      if(i==36)
      {
      microsnd5(poly29,poly30,poly31,poly32,poly33,poly34,poly35,c1);
      microsnd6(poly36,poly37,poly38,poly39,poly40,poly41,poly42,c1);
      three5(poly29,poly30,poly31,poly32,poly35,c2);
      six6(poly36,poly38,poly39,poly40,poly41,poly42,c2);
      }
      if(i==37)
      {
      microsnd5(poly29,poly30,poly31,poly32,poly33,poly34,poly35,c1);
      microsnd6(poly36,poly37,poly38,poly39,poly40,poly41,poly42,c1);
      three5(poly29,poly30,poly31,poly32,poly35,c2);
      seven6(poly36,poly37,poly38,c2);
      }
      if(i==38)
      {
      microsnd5(poly29,poly30,poly31,poly32,poly33,poly34,poly35,c1);
      microsnd6(poly36,poly37,poly38,poly39,poly40,poly41,poly42,c1);
      three5(poly29,poly30,poly31,poly32,poly35,c2);
      eight6(poly36,poly37,poly38,poly39,poly40,poly41,poly42,c2);
      }
      if(i==39)
      {
      microsnd5(poly29,poly30,poly31,poly32,poly33,poly34,poly35,c1);
      microsnd6(poly36,poly37,poly38,poly39,poly40,poly41,poly42,c1);
      three5(poly29,poly30,poly31,poly32,poly35,c2);
      nine6(poly36,poly37,poly38,poly39,poly41,poly42,c2);
      }
      if(i==40)
      {
      microsnd5(poly29,poly30,poly31,poly32,poly33,poly34,poly35,c1);
      microsnd6(poly36,poly37,poly38,poly39,poly40,poly41,poly42,c1);
      four5(poly30,poly31,poly34,poly35,c2);
      zero6(poly36,poly37,poly38,poly39,poly40,poly41,c2);
      }
      if(i==41)
      {
       microsnd5(poly29,poly30,poly31,poly32,poly33,poly34,poly35,c1);
      microsnd6(poly36,poly37,poly38,poly39,poly40,poly41,poly42,c1);
      four5(poly30,poly31,poly34,poly35,c2);
      one6(poly37,poly38,c2);
      }
      if(i==42)
      {
       microsnd5(poly29,poly30,poly31,poly32,poly33,poly34,poly35,c1);
      microsnd6(poly36,poly37,poly38,poly39,poly40,poly41,poly42,c1);
      four5(poly30,poly31,poly34,poly35,c2);
      two6(poly36,poly37,poly39,poly40,poly42,c2);
      }
      if(i==43)
      {
       microsnd5(poly29,poly30,poly31,poly32,poly33,poly34,poly35,c1);
      microsnd6(poly36,poly37,poly38,poly39,poly40,poly41,poly42,c1);
      four5(poly30,poly31,poly34,poly35,c2);
      three6(poly36,poly37,poly38,poly39,poly42,c2);
      }
      if(i==44)
      {
       microsnd5(poly29,poly30,poly31,poly32,poly33,poly34,poly35,c1);
      microsnd6(poly36,poly37,poly38,poly39,poly40,poly41,poly42,c1);
      four5(poly30,poly31,poly34,poly35,c2);
      four6(poly37,poly38,poly41,poly42,c2);
      }
      if(i==45)
      {
       microsnd5(poly29,poly30,poly31,poly32,poly33,poly34,poly35,c1);
      microsnd6(poly36,poly37,poly38,poly39,poly40,poly41,poly42,c1);
      four5(poly30,poly31,poly34,poly35,c2);
      five6(poly36,poly38,poly39,poly41,poly42,c2);
      }
      if(i==46)
      {
       microsnd5(poly29,poly30,poly31,poly32,poly33,poly34,poly35,c1);
      microsnd6(poly36,poly37,poly38,poly39,poly40,poly41,poly42,c1);
      four5(poly30,poly31,poly34,poly35,c2);
      six6(poly36,poly38,poly39,poly40,poly41,poly42,c2);
      }
      if(i==47)
      {
       microsnd5(poly29,poly30,poly31,poly32,poly33,poly34,poly35,c1);
      microsnd6(poly36,poly37,poly38,poly39,poly40,poly41,poly42,c1);
      four5(poly30,poly31,poly34,poly35,c2);
      seven6(poly36,poly37,poly38,c2);
      }
      if(i==48)
      {
       microsnd5(poly29,poly30,poly31,poly32,poly33,poly34,poly35,c1);
      microsnd6(poly36,poly37,poly38,poly39,poly40,poly41,poly42,c1);
      four5(poly30,poly31,poly34,poly35,c2);
      eight6(poly36,poly37,poly38,poly39,poly40,poly41,poly42,c2);
      }
      if(i==49)
      {
       microsnd5(poly29,poly30,poly31,poly32,poly33,poly34,poly35,c1);
      microsnd6(poly36,poly37,poly38,poly39,poly40,poly41,poly42,c1);
      four5(poly30,poly31,poly34,poly35,c2);
      nine6(poly36,poly37,poly38,poly39,poly41,poly42,c2);
      }
      if(i==50)
      {
       microsnd5(poly29,poly30,poly31,poly32,poly33,poly34,poly35,c1);
      microsnd6(poly36,poly37,poly38,poly39,poly40,poly41,poly42,c1);
      five5(poly29,poly31,poly32,poly34,poly35,c2);
      zero6(poly36,poly37,poly38,poly39,poly40,poly41,c2);
      }
      if(i==51)
      {
       microsnd5(poly29,poly30,poly31,poly32,poly33,poly34,poly35,c1);
      microsnd6(poly36,poly37,poly38,poly39,poly40,poly41,poly42,c1);
      five5(poly29,poly31,poly32,poly34,poly35,c2);
      one6(poly37,poly38,c2);
      }
      if(i==52)
      {
       microsnd5(poly29,poly30,poly31,poly32,poly33,poly34,poly35,c1);
      microsnd6(poly36,poly37,poly38,poly39,poly40,poly41,poly42,c1);
      five5(poly29,poly31,poly32,poly34,poly35,c2);
      two6(poly36,poly37,poly39,poly40,poly42,c2);
      }
      if(i==53)
      {
       microsnd5(poly29,poly30,poly31,poly32,poly33,poly34,poly35,c1);
      microsnd6(poly36,poly37,poly38,poly39,poly40,poly41,poly42,c1);
      five5(poly29,poly31,poly32,poly34,poly35,c2);
      three6(poly36,poly37,poly38,poly39,poly42,c2);
      }
      if(i==54)
      {
       microsnd5(poly29,poly30,poly31,poly32,poly33,poly34,poly35,c1);
      microsnd6(poly36,poly37,poly38,poly39,poly40,poly41,poly42,c1);
      five5(poly29,poly31,poly32,poly34,poly35,c2);
      four6(poly37,poly38,poly41,poly42,c2);
      }
      if(i==55)
      {
       microsnd5(poly29,poly30,poly31,poly32,poly33,poly34,poly35,c1);
      microsnd6(poly36,poly37,poly38,poly39,poly40,poly41,poly42,c1);
      five5(poly29,poly31,poly32,poly34,poly35,c2);
      five6(poly36,poly38,poly39,poly41,poly42,c2);
      }
      if(i==56)
      {
       microsnd5(poly29,poly30,poly31,poly32,poly33,poly34,poly35,c1);
      microsnd6(poly36,poly37,poly38,poly39,poly40,poly41,poly42,c1);
      five5(poly29,poly31,poly32,poly34,poly35,c2);
      six6(poly36,poly38,poly39,poly40,poly41,poly42,c2);
      }
      if(i==57)
      {
       microsnd5(poly29,poly30,poly31,poly32,poly33,poly34,poly35,c1);
      microsnd6(poly36,poly37,poly38,poly39,poly40,poly41,poly42,c1);
      five5(poly29,poly31,poly32,poly34,poly35,c2);
      seven6(poly36,poly37,poly38,c2);
      }
      if(i==58)
      {
       microsnd5(poly29,poly30,poly31,poly32,poly33,poly34,poly35,c1);
      microsnd6(poly36,poly37,poly38,poly39,poly40,poly41,poly42,c1);
      five5(poly29,poly31,poly32,poly34,poly35,c2);
      eight6(poly36,poly37,poly38,poly39,poly40,poly41,poly42,c2);
      }
      if(i==59)
      {
       microsnd5(poly29,poly30,poly31,poly32,poly33,poly34,poly35,c1);
      microsnd6(poly36,poly37,poly38,poly39,poly40,poly41,poly42,c1);
      five5(poly29,poly31,poly32,poly34,poly35,c2);
      nine6(poly36,poly37,poly38,poly39,poly41,poly42,c2);
      }
      if(i==60)
      {
       microsnd5(poly29,poly30,poly31,poly32,poly33,poly34,poly35,c1);
      microsnd6(poly36,poly37,poly38,poly39,poly40,poly41,poly42,c1);
      six5(poly29,poly31,poly32,poly33,poly34,poly35,c2);
      zero6(poly36,poly37,poly38,poly39,poly40,poly41,c2);
      i=0;
      k++;
      }
      if(k==1)
      {
       microsnd4(poly22,poly23,poly24,poly25,poly26,poly27,poly28,c1);
       one4(poly23,poly24,c2);
      }
      if(k==2)
      {
       microsnd4(poly22,poly23,poly24,poly25,poly26,poly27,poly28,c1);
       two4(poly22,poly23,poly25,poly26,poly28,c2);
      }
      if(k==3)
      {
       microsnd4(poly22,poly23,poly24,poly25,poly26,poly27,poly28,c1);
       three4(poly22,poly23,poly24,poly25,poly28,c2);
      }
      if(k==4)
      {
       microsnd4(poly22,poly23,poly24,poly25,poly26,poly27,poly28,c1);
       four4(poly23,poly24,poly27,poly28,c2);
      }
      if(k==5)
      {
       microsnd4(poly22,poly23,poly24,poly25,poly26,poly27,poly28,c1);
       five4(poly22,poly24,poly25,poly27,poly28,c2);
      }
      if(k==6)
      {
       microsnd4(poly22,poly23,poly24,poly25,poly26,poly27,poly28,c1);
       six4(poly22,poly24,poly25,poly26,poly27,poly28,c2);
      }
      if(k==7)
      {
       microsnd4(poly22,poly23,poly24,poly25,poly26,poly27,poly28,c1);
       seven4(poly22,poly23,poly24,c2);
      }
      if(k==8)
      {
       microsnd4(poly22,poly23,poly24,poly25,poly26,poly27,poly28,c1);
       eight4(poly22,poly23,poly24,poly25,poly26,poly27,poly28,c2);
      }
      if(k==9)
      {
       microsnd4(poly22,poly23,poly24,poly25,poly26,poly27,poly28,c1);
       nine4(poly22,poly23,poly24,poly25,poly27,poly28,c2);
      }
    }
   }
}


//one4(poly23,poly24,c2);
//two4(poly22,poly23,poly25,poly26,poly28,c2);
//three4(poly22,poly23,poly24,poly25,poly28,c2);
//four4(poly23,poly24,poly27,poly28,c2);
//five4(poly22,poly24,poly25,poly27,poly28,c2);
//six4(poly22,poly24,poly25,poly26,poly27,poly28,c2);
//seven4(poly22,poly23,poly24,c2);
//eight4(poly22,poly23,poly24,poly25,poly26,poly27,poly28,c2);
//nine4(poly22,poly23,poly24,poly25,poly27,poly28,c2);
//zero4(poly22,poly23,poly24,poly25,poly26,poly27,c2);


//one5(poly30,poly31,c2);
//two5(poly29,poly30,poly32,poly33,poly35,c2);
//three5(poly29,poly30,poly31,poly32,poly35,c2);
//four5(poly30,poly31,poly34,poly35,c2);
//five5(poly29,poly31,poly32,poly34,poly35,c2);
//six5(poly29,poly31,poly32,poly33,poly34,poly35,c2);
//seven5(poly29,poly30,poly31,c2);
//eight5(poly29,poly30,poly31,poly32,poly33,poly34,poly35,c2);
//nine5(poly29,poly30,poly31,poly32,poly34,poly35,c2);
//zero5(poly29,poly30,poly31,poly32,poly33,poly34,c2);

//one6(poly37,poly38,c2);
//two6(poly36,poly37,poly39,poly40,poly42,c2);
//three6(poly36,poly37,poly38,poly39,poly42,c2);
//four6(poly37,poly38,poly41,poly42,c2);
//five6(poly36,poly38,poly39,poly41,poly42,c2);
//six6(poly36,poly38,poly39,poly40,poly41,poly42,c2);
//seven6(poly36,poly37,poly38,c2);
//eight6(poly36,poly37,poly38,poly39,poly40,poly41,poly42,c2);
//nine6(poly36,poly37,poly38,poly39,poly41,poly42,c2);
//zero6(poly36,poly37,poly38,poly39,poly40,poly41,c2);

//one7(poly44,poly45,c2);

//one8(poly51,poly52,c2);
//two8(poly50,poly51,poly53,poly54,poly56,c2);
//three8(poly50,poly51,poly52,poly53,poly56,c2);
//four8(poly51,poly52,poly55,poly56,c2);
//five8(poly50,poly52,poly53,poly55,poly56,c2);
//six8(poly50,poly52,poly53,poly54,poly55,poly56,c2);
//seven8(poly50,poly51,poly52,c2);
//eight8(poly50,poly51,poly52,poly53,poly54,poly55,poly56,c2);
//nine8(poly50,poly51,poly52,poly53,poly55,poly56,c2);
//zero8(poly50,poly51,poly52,poly53,poly54,poly55,c2);
getch();
}
int getscan()
{
union REGS i,o;
i.h.ah=0;
int86(22,&i,&o);
return(o.h.ah);
}
void one8(int poly51[10],int poly52[10],int c2)
{
setcolor(c2);
setfillstyle(1,c2);
fillpoly(5,poly51);
fillpoly(5,poly52);
}
void two8(int poly50[10],int poly51[10],int poly53[10],int poly54[10],int poly56[10],int c2)
{
setcolor(c2);
setfillstyle(1,c2);
fillpoly(5,poly50);
fillpoly(5,poly51);
fillpoly(5,poly53);
fillpoly(5,poly54);
fillpoly(7,poly56);
}
void three8(int poly50[10],int poly51[10],int poly52[10],int poly53[10],int poly56[10],int c2)
{
setcolor(c2);
setfillstyle(1,c2);
fillpoly(5,poly50);
fillpoly(5,poly51);
fillpoly(5,poly52);
fillpoly(5,poly53);
fillpoly(7,poly56);
}
void four8(int poly51[10],int poly52[10],int poly55[10],int poly56[10],int c2)
{
setcolor(c2);
setfillstyle(1,c2);
fillpoly(5,poly51);
fillpoly(5,poly52);
fillpoly(5,poly55);
fillpoly(7,poly56);
}
void five8(int poly50[10],int poly52[10],int poly53[10],int poly55[10],int poly56[14],int c2)
{
setcolor(c2);
setfillstyle(1,c2);
fillpoly(5,poly50);
fillpoly(5,poly52);
fillpoly(5,poly53);
fillpoly(5,poly55);
fillpoly(7,poly56);
}
void six8(int poly50[10],int poly52[10],int poly53[10],int poly54[10],int poly55[10],int poly56[10],int c2)
{
setcolor(c2);
setfillstyle(1,c2);
fillpoly(5,poly50);
fillpoly(5,poly52);
fillpoly(5,poly53);
fillpoly(5,poly54);
fillpoly(5,poly55);
fillpoly(7,poly56);
}
void seven8(int poly50[10],int poly51[10],int poly52[10],int c2)
{
setcolor(c2);
setfillstyle(1,c2);
fillpoly(5,poly50);
fillpoly(5,poly51);
fillpoly(5,poly52);
}
void eight8(int poly50[10],int poly51[10],int poly52[10],int poly53[10],int poly54[10],int poly55[10],int poly56[10],int c2)
{
setcolor(c2);
setfillstyle(1,c2);
fillpoly(5,poly50);
fillpoly(5,poly51);
fillpoly(5,poly52);
fillpoly(5,poly53);
fillpoly(5,poly54);
fillpoly(5,poly55);
fillpoly(7,poly56);
}
void nine8(int poly50[10],int poly51[10],int poly52[10],int poly53[10],int poly55[10],int poly56[10],int c2)
{
setcolor(c2);
setfillstyle(1,c2);
fillpoly(5,poly50);
fillpoly(5,poly51);
fillpoly(5,poly52);
fillpoly(5,poly53);
fillpoly(5,poly55);
fillpoly(7,poly56);
}
void zero8(int poly50[10],int poly51[10],int poly52[10],int poly53[10],int poly54[10],int poly55[10],int c2)
{
setcolor(c2);
setfillstyle(1,c2);
fillpoly(5,poly50);
fillpoly(5,poly51);
fillpoly(5,poly52);
fillpoly(5,poly53);
fillpoly(5,poly54);
fillpoly(5,poly55);
}
void one7(int poly44[10],int poly45[10],int c2)
{
setcolor(c2);
setfillstyle(1,c2);
fillpoly(5,poly44);
fillpoly(5,poly45);
}
void one6(int poly37[10],int poly38[10],int c2)
{
setcolor(c2);
setfillstyle(1,c2);
fillpoly(5,poly37);
fillpoly(5,poly38);
}
void two6(int poly36[10],int poly37[10],int poly39[10],int poly40[10],int poly42[10],int c2)
{
setcolor(c2);
setfillstyle(1,c2);
fillpoly(5,poly36);
fillpoly(5,poly37);
fillpoly(5,poly39);
fillpoly(5,poly40);
fillpoly(7,poly42);
}
void three6(int poly36[10],int poly37[10],int poly38[10],int poly39[10],int poly42[10],int c2)
{
setcolor(c2);
setfillstyle(1,c2);
fillpoly(5,poly36);
fillpoly(5,poly37);
fillpoly(5,poly38);
fillpoly(5,poly39);
fillpoly(7,poly42);
}
void four6(int poly37[10],int poly38[10],int poly41[10],int poly42[10],int c2)
{
setcolor(c2);
setfillstyle(1,c2);
fillpoly(5,poly37);
fillpoly(5,poly38);
fillpoly(5,poly41);
fillpoly(7,poly42);
}
void five6(int poly36[10],int poly38[10],int poly39[10],int poly41[10],int poly42[14],int c2)
{
setcolor(c2);
setfillstyle(1,c2);
fillpoly(5,poly36);
fillpoly(5,poly38);
fillpoly(5,poly39);
fillpoly(5,poly41);
fillpoly(7,poly42);
}
void six6(int poly36[10],int poly38[10],int poly39[10],int poly40[10],int poly41[10],int poly42[10],int c2)
{
setcolor(c2);
setfillstyle(1,c2);
fillpoly(5,poly36);
fillpoly(5,poly38);
fillpoly(5,poly39);
fillpoly(5,poly40);
fillpoly(5,poly41);
fillpoly(7,poly42);
}
void seven6(int poly36[10],int poly37[10],int poly38[10],int c2)
{
setcolor(c2);
setfillstyle(1,c2);
fillpoly(5,poly36);
fillpoly(5,poly37);
fillpoly(5,poly38);
}
void eight6(int poly36[10],int poly37[10],int poly38[10],int poly39[10],int poly40[10],int poly41[10],int poly42[10],int c2)
{
setcolor(c2);
setfillstyle(1,c2);
fillpoly(5,poly36);
fillpoly(5,poly37);
fillpoly(5,poly38);
fillpoly(5,poly39);
fillpoly(5,poly40);
fillpoly(5,poly41);
fillpoly(7,poly42);
}
void nine6(int poly36[10],int poly37[10],int poly38[10],int poly39[10],int poly41[10],int poly42[10],int c2)
{
setcolor(c2);
setfillstyle(1,c2);
fillpoly(5,poly36);
fillpoly(5,poly37);
fillpoly(5,poly38);
fillpoly(5,poly39);
fillpoly(5,poly41);
fillpoly(7,poly42);
}
void zero6(int poly36[10],int poly37[10],int poly38[10],int poly39[10],int poly40[10],int poly41[10],int c2)
{
setcolor(c2);
setfillstyle(1,c2);
fillpoly(5,poly36);
fillpoly(5,poly37);
fillpoly(5,poly38);
fillpoly(5,poly39);
fillpoly(5,poly40);
fillpoly(5,poly41);
}
void one5(int poly30[10],int poly31[10],int c2)
{
setcolor(c2);
setfillstyle(1,c2);
fillpoly(5,poly30);
fillpoly(5,poly31);
}
void two5(int poly29[10],int poly30[10],int poly32[10],int poly33[10],int poly35[10],int c2)
{
setcolor(c2);
setfillstyle(1,c2);
fillpoly(5,poly29);
fillpoly(5,poly30);
fillpoly(5,poly32);
fillpoly(5,poly33);
fillpoly(7,poly35);
}
void three5(int poly29[10],int poly30[10],int poly31[10],int poly32[10],int poly35[10],int c2)
{
setcolor(c2);
setfillstyle(1,c2);
fillpoly(5,poly29);
fillpoly(5,poly30);
fillpoly(5,poly31);
fillpoly(5,poly32);
fillpoly(7,poly35);
}
void four5(int poly30[10],int poly31[10],int poly34[10],int poly35[10],int c2)
{
setcolor(c2);
setfillstyle(1,c2);
fillpoly(5,poly30);
fillpoly(5,poly31);
fillpoly(5,poly34);
fillpoly(7,poly35);
}
void five5(int poly29[10],int poly31[10],int poly32[10],int poly34[10],int poly35[14],int c2)
{
setcolor(c2);
setfillstyle(1,c2);
fillpoly(5,poly29);
fillpoly(5,poly31);
fillpoly(5,poly32);
fillpoly(5,poly34);
fillpoly(7,poly35);
}
void six5(int poly29[10],int poly31[10],int poly32[10],int poly33[10],int poly34[10],int poly35[10],int c2)
{
setcolor(c2);
setfillstyle(1,c2);
fillpoly(5,poly29);
fillpoly(5,poly31);
fillpoly(5,poly32);
fillpoly(5,poly33);
fillpoly(5,poly34);
fillpoly(7,poly35);
}
void seven5(int poly29[10],int poly30[10],int poly31[10],int c2)
{
setcolor(c2);
setfillstyle(1,c2);
fillpoly(5,poly29);
fillpoly(5,poly30);
fillpoly(5,poly31);
}
void eight5(int poly29[10],int poly30[10],int poly31[10],int poly32[10],int poly33[10],int poly34[10],int poly35[10],int c2)
{
setcolor(c2);
setfillstyle(1,c2);
fillpoly(5,poly29);
fillpoly(5,poly30);
fillpoly(5,poly31);
fillpoly(5,poly32);
fillpoly(5,poly33);
fillpoly(5,poly34);
fillpoly(7,poly35);
}
void nine5(int poly29[10],int poly30[10],int poly31[10],int poly32[10],int poly34[10],int poly35[10],int c2)
{
setcolor(c2);
setfillstyle(1,c2);
fillpoly(5,poly29);
fillpoly(5,poly30);
fillpoly(5,poly31);
fillpoly(5,poly32);
fillpoly(5,poly34);
fillpoly(7,poly35);
}
void zero5(int poly29[10],int poly30[10],int poly31[10],int poly32[10],int poly33[10],int poly34[10],int c2)
{
setcolor(c2);
setfillstyle(1,c2);
fillpoly(5,poly29);
fillpoly(5,poly30);
fillpoly(5,poly31);
fillpoly(5,poly32);
fillpoly(5,poly33);
fillpoly(5,poly34);
}

void one4(int poly23[10],int poly24[10],int c2)
{
setcolor(c2);
setfillstyle(1,c2);
fillpoly(5,poly23);
fillpoly(5,poly24);
}
void two4(int poly22[10],int poly23[10],int poly25[10],int poly26[10],int poly27[10],int c2)
{
setcolor(c2);
setfillstyle(1,c2);
fillpoly(5,poly22);
fillpoly(5,poly23);
fillpoly(5,poly25);
fillpoly(5,poly26);
fillpoly(7,poly27);
}
void three4(int poly22[10],int poly23[10],int poly24[10],int poly25[10],int poly28[10],int c2)
{
setcolor(c2);
setfillstyle(1,c2);
fillpoly(5,poly22);
fillpoly(5,poly23);
fillpoly(5,poly24);
fillpoly(5,poly25);
fillpoly(7,poly28);
}
void four4(int poly23[10],int poly24[10],int poly27[10],int poly28[10],int c2)
{
setcolor(c2);
setfillstyle(1,c2);
fillpoly(5,poly23);
fillpoly(5,poly24);
fillpoly(5,poly27);
fillpoly(7,poly28);
}
void five4(int poly22[10],int poly24[10],int poly25[10],int poly27[10],int poly28[14],int c2)
{
setcolor(c2);
setfillstyle(1,c2);
fillpoly(5,poly22);
fillpoly(5,poly24);
fillpoly(5,poly25);
fillpoly(5,poly27);
fillpoly(7,poly28);
}
void six4(int poly22[10],int poly24[10],int poly25[10],int poly26[10],int poly27[10],int poly28[10],int c2)
{
setcolor(c2);
setfillstyle(1,c2);
fillpoly(5,poly22);
fillpoly(5,poly24);
fillpoly(5,poly25);
fillpoly(5,poly26);
fillpoly(5,poly27);
fillpoly(7,poly28);
}
void seven4(int poly22[10],int poly23[10],int poly24[10],int c2)
{
setcolor(c2);
setfillstyle(1,c2);
fillpoly(5,poly22);
fillpoly(5,poly23);
fillpoly(5,poly24);
}
void eight4(int poly22[10],int poly23[10],int poly24[10],int poly25[10],int poly26[10],int poly27[10],int poly28[10],int c2)
{
setcolor(c2);
setfillstyle(1,c2);
fillpoly(5,poly22);
fillpoly(5,poly23);
fillpoly(5,poly24);
fillpoly(5,poly25);
fillpoly(5,poly26);
fillpoly(5,poly27);
fillpoly(7,poly28);
}
void nine4(int poly22[10],int poly23[10],int poly24[10],int poly25[10],int poly27[10],int poly28[10],int c2)
{
setcolor(c2);
setfillstyle(1,c2);
fillpoly(5,poly22);
fillpoly(5,poly23);
fillpoly(5,poly24);
fillpoly(5,poly25);
fillpoly(5,poly27);
fillpoly(7,poly28);
}
void zero4(int poly22[10],int poly23[10],int poly24[10],int poly25[10],int poly26[10],int poly27[10],int c2)
{
setcolor(c2);
setfillstyle(1,c2);
fillpoly(5,poly22);
fillpoly(5,poly23);
fillpoly(5,poly24);
fillpoly(5,poly25);
fillpoly(5,poly26);
fillpoly(5,poly27);
}


void microsnd1(int poly1[10],int poly2[10],int poly3[10],int poly4[10],int poly5[10],int poly6[10],int poly7[10],int c1)
{
 setcolor(c1);
 setfillstyle(1,c1);
 drawpoly(5,poly1);             /* 1-poly  */
 drawpoly(5,poly2);
 drawpoly(5,poly3);
 drawpoly(5,poly4);
 drawpoly(5,poly5);
 drawpoly(5,poly6);
 drawpoly(7,poly7);
 fillpoly(5,poly1);
 fillpoly(5,poly2);
 fillpoly(5,poly3);
 fillpoly(5,poly4);
 fillpoly(5,poly5);
 fillpoly(5,poly6);
 fillpoly(7,poly7);
}
void microsnd2(int poly8[10],int poly9[10],int poly10[10],int poly11[10],int poly12[10],int poly13[10],int poly14[10],int c1)
{
 setcolor(c1);
 setfillstyle(1,c1);
 drawpoly(5,poly8);             /* 2-poly  */
 drawpoly(5,poly9);
 drawpoly(5,poly10);
 drawpoly(5,poly11);
 drawpoly(5,poly12);
 drawpoly(5,poly13);
 drawpoly(7,poly14);
 fillpoly(5,poly8);
 fillpoly(5,poly9);
 fillpoly(5,poly10);
 fillpoly(5,poly11);
 fillpoly(5,poly12);
 fillpoly(5,poly13);
 fillpoly(7,poly14);
}
void microsnd3(int poly15[10],int poly16[10],int poly17[10],int poly18[10],int poly19[10],int poly20[10],int poly21[10],int c1)
{
 setcolor(c1);
 setfillstyle(1,c1);
 drawpoly(5,poly15);            /* 3-poly  */
 drawpoly(5,poly16);
 drawpoly(5,poly17);
 drawpoly(5,poly18);
 drawpoly(5,poly19);
 drawpoly(5,poly20);
 drawpoly(7,poly21);
 fillpoly(5,poly15);
 fillpoly(5,poly16);
 fillpoly(5,poly17);
 fillpoly(5,poly18);
 fillpoly(5,poly19);
 fillpoly(5,poly20);
 fillpoly(7,poly21);
}
void microsnd4(int poly22[10],int poly23[10],int poly24[10],int poly25[10],int poly26[10],int poly27[10],int poly28[10],int c1)
{
 setcolor(c1);
 setfillstyle(1,c1);
 drawpoly(5,poly22);            /*  4-poly  */
 drawpoly(5,poly23);
 drawpoly(5,poly24);
 drawpoly(5,poly25);
 drawpoly(5,poly26);
 drawpoly(5,poly27);
 drawpoly(7,poly28);
 fillpoly(5,poly22);
 fillpoly(5,poly23);
 fillpoly(5,poly24);
 fillpoly(5,poly25);
 fillpoly(5,poly26);
 fillpoly(5,poly27);
 fillpoly(7,poly28);
}
void microsnd5(int poly29[10],int poly30[10],int poly31[10],int poly32[10],int poly33[10],int poly34[10],int poly35[14],int c1)
{
 setcolor(c1);
 setfillstyle(1,c1);
 drawpoly(5,poly29);            /*  5-poly  */
 drawpoly(5,poly30);
 drawpoly(5,poly31);
 drawpoly(5,poly32);
 drawpoly(5,poly33);
 drawpoly(5,poly34);
 drawpoly(7,poly35);
 fillpoly(5,poly29);
 fillpoly(5,poly30);
 fillpoly(5,poly31);
 fillpoly(5,poly32);
 fillpoly(5,poly33);
 fillpoly(5,poly34);
 fillpoly(7,poly35);
}
void microsnd6(int poly36[10],int poly37[10],int poly38[10],int poly39[10],int poly40[10],int poly41[10],int poly42[14],int c1)
{
 setcolor(c1);
 setfillstyle(1,c1);
 drawpoly(5,poly36);            /*  6-poly  */
 drawpoly(5,poly37);
 drawpoly(5,poly38);
 drawpoly(5,poly39);
 drawpoly(5,poly40);
 drawpoly(5,poly41);
 drawpoly(7,poly42);
 fillpoly(5,poly36);
 fillpoly(5,poly37);
 fillpoly(5,poly38);
 fillpoly(5,poly39);
 fillpoly(5,poly40);
 fillpoly(5,poly41);
 fillpoly(7,poly42);

}
void microsnd7(int poly43[10],int poly44[10],int poly45[10],int poly46[10],int poly47[10],int poly48[10],int poly49[14],int c1)
{
 setcolor(c1);                       /*  7-poly  */
 setfillstyle(1,c1);
 drawpoly(5,poly43);
 drawpoly(5,poly44);
 drawpoly(5,poly45);
 drawpoly(5,poly46);
 drawpoly(5,poly47);
 drawpoly(5,poly48);
 drawpoly(7,poly49);
 fillpoly(5,poly43);
 fillpoly(5,poly44);
 fillpoly(5,poly45);
 fillpoly(5,poly46);
 fillpoly(5,poly47);
 fillpoly(5,poly48);
 fillpoly(7,poly49);
}
void microsnd8(int poly50[10],int poly51[10],int poly52[10],int poly53[10],int poly54[10],int poly55[10],int poly56[14],int c1)
{
 setcolor(c1);
 setfillstyle(1,c1);
 drawpoly(5,poly50);
 drawpoly(5,poly51);
 drawpoly(5,poly52);
 drawpoly(5,poly53);
 drawpoly(5,poly54);
 drawpoly(5,poly55);
 drawpoly(7,poly56);
 fillpoly(5,poly50);
 fillpoly(5,poly51);
 fillpoly(5,poly52);
 fillpoly(5,poly53);
 fillpoly(5,poly54);
 fillpoly(5,poly55);
 fillpoly(7,poly56);
}
void startandpause()
{
setcolor(7);
outtextxy(195,350,"S");
setcolor(4);
outtextxy(413,350,"P");
}
void pauseandstart()
{
setcolor(4);
outtextxy(195,350,"S");
setcolor(7);
outtextxy(413,350,"P");
}