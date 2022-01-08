#include<simplecpp>
int flag=0;

void level1()
{

Text g1(400,90,"LEVEL 1");
g1.setColor(COLOR(0,0,255));
g1.setFill();

Text t20(400,200,"Some months have 31 days some have 30 days! ");
Text t21(400,230,"How many months have 28 days ? ");
Text t22(400,270,"a) 7");
Text t23(400,300,"b) 12");
Text t24(400,330,"c) 1");

XEvent e;

while(1)
{
  nextEvent(e);

if(keyPressEvent(e))
{
   if(charFromEvent(e)==98||charFromEvent(e)==66)
   {
     Text t2(400,360,"CORRECT ANSWER");
     t2.setColor(COLOR(128, 0, 0));
    t2.setFill();
     wait(2);
     flag=0;
     flag++;
     break;
   }
  else
   {
      Text t2(400,360,"WRONG ANSWER");
      Text t21(400,390,"RETRY");
      t2.setColor(COLOR(128, 0, 0));
    t2.setFill();
      wait(2);

   }
}
}

 }

void level2()
{

Text g2(400,40,"LEVEL 2");
g2.setColor(COLOR(0,0,255));
g2.setFill();

Circle c(300,100,30);
c.setColor(COLOR(255, 250, 60));
    c.setFill();
Rectangle r(400,100,50,50);
r.setColor(COLOR(212, 50, 60));
    r.setFill();
Text t(500,100,"3");
Text t1(250,180,"X");
Text t2(500,150,"2");
Line l(200,200,600,200);
Text t4(500,220,"6");
Text t5(400,220,"0");
Text t6(300,220,"9");
Circle c1(400,300,30);
c1.setColor(COLOR(255, 250, 60));
    c1.setFill();
Text t7(450,300,"=  A");
Rectangle i(400,400,50,50);
i.setColor(COLOR(212, 50, 60));
    i.setFill();
Text t8(450,400,"=  B");
Text t9(400,450,"Choose the correct values for A and B");
Text i1(400,490," a)  A=4, B=5" );
Text i2(400,520," b)  A=1, B=3");
Text i3(400,550,"c)  A=1, B=3");
Text i4(400,580,"Type in the correct option:");
XEvent e;

while(1)
{
  nextEvent(e);

if(keyPressEvent(e))
{
   if(charFromEvent(e)==97||charFromEvent(e)==65)
   {
     Text i5(400,600,"CORRECT ANSWER");
     i5.setColor(COLOR(128, 0, 0));
    i5.setFill();
     wait(2);
     flag++;
     break;

   }
  else
   {
      Text i5(400,600,"WRONG ANSWER");
      Text i51(400,630,"RETRY");
   i5.setColor(COLOR(128, 0, 0));
    i5.setFill();
      wait(2);

   }
}
}

}


void level3()
{
Text g3(400,90,"LEVEL 3");
g3.setColor(COLOR(0,0,255));
g3.setFill();

Text y(400,200," ____  ____  ____  ____  ____ ");
Text t12(400,260,"A  B  C  D  E  F  G  H  I  J  K  L  M");
Text t13(400,290,"N  O  P  Q  R  S  T  U  V  W  X  Y  Z ");
Text t14(400,340,"What five letter word becomes shorter?");
t14.setColor(COLOR(250, 128, 114));
    t14.setFill();
Text t15(400,370,"When you add two letters to it?");
t15.setColor(COLOR(250, 128, 114));
    t15.setFill();
 Text t16(400,490," a) OTHER" );
Text t18(400,520," b) SHORT ");
Text t17(400,550,"c) SHARP ");
Text t19(400,580,"Type in the correct option:");

XEvent e1;
while(1)
{
  nextEvent(e1);

if(keyPressEvent(e1))
{
   if(charFromEvent(e1)==98||charFromEvent(e1)==66)
   {
     Text i6(400,600,"CORRECT ANSWER");
     i6.setColor(COLOR(128, 0, 0));
   i6.setFill();
     wait(2);
     flag++;
     break;

   }
  else
   {
      Text i6(400,600,"WRONG ANSWER");
       Text i61(400,630,"RETRY");
      i6.setColor(COLOR(128, 0, 0));
    i6.setFill();
      wait(2);

   }
}
}
}

void level4()
{
Text g4(400,50,"LEVEL 4");
g4.setColor(COLOR(0,0,255));
g4.setFill();

Line l1(300,100,300,300);
Line l2(300,300,500,300);
Line l3(500,100,500,300);
Line l4(300,100,500,100);
Line l5(300,200,500,200);
Line l6(400,100,400,300);
Line l7(300,100,500,300);
Line l8(300,300,500,100);

Text Tt(400,450,"How many Triangles are present in the figure?");
Tt.setColor(COLOR(0, 255, 0));
Tt.setFill();
Text a(400,490," a)  12" );
Text b(400,520," b)  14");
Text c(400,550,"c)  16");
Text t(400,580,"Type in the correct option:");
XEvent e;

while(1)
{
  nextEvent(e);

if(keyPressEvent(e))
{
   if(charFromEvent(e)==99||charFromEvent(e)==67)
   {
     Text t2(400,600,"CORRECT ANSWER");
     t2.setColor(COLOR(128, 0, 0));
    t2.setFill();
     wait(2);
     flag++;
     break;


   }
  else
   {
      Text t2(400,600,"WRONG ANSWER");
      Text t21(400,630,"TRY AGAIN");
      t2.setColor(COLOR(128, 0, 0));
    t2.setFill();
      wait(2);

   }
}
}

}


void level5()
{

Text g5(400,90,"LEVEL 5");
g5.setColor(COLOR(0,0,255));
g5.setFill();

Text t(400,320,"In a certain Country 1/2 of 5=3.");
t.setColor(COLOR(255, 0, 255));
    t.setFill();
    Text T(400,350,"If the same propotion holds, what is th Value of 1/3 of 10?");
T.setColor(COLOR(255, 0, 255));
    T.setFill();
Text t99(400,490," a) 3.2 " );
Text t6(400,520," b) 4.0 ");
Text t7(400,550,"c) 2.5 ");
Text t8(400,580,"Type in the correct option:");

XEvent e;
while(1)
{
  nextEvent(e);

if(keyPressEvent(e))
{
   if(charFromEvent(e)==98||charFromEvent(e)==66)
   {
     Text t11(400,600,"CORRECT ANSWER");
     t11.setColor(COLOR(128, 0, 0));
    t11.setFill();
     wait(2);
     flag++;
     break;

   }
  else
   {
      Text t11(400,600,"WRONG ANSWER");
      Text t111(400,630,"RETRY");
      t11.setColor(COLOR(128, 0, 0));
    t11.setFill();
      wait(2);

   }
}
}
}

void level6()
{
Text g6(400,40,"LEVEL 6");
g6.setColor(COLOR(0, 0, 255));
g6.setFill();

Text t(280,100,"WHICH NUMBER IS NEEDED TO COMPLETE THE PYRAMID?");
t.setColor(COLOR(0, 128, 0));
t.setFill();
Rectangle r(500,500,90,80);

Rectangle l(590,500,90,80);
Rectangle m(682,500,90,80);
Rectangle i(410,500,90,80);
Rectangle ss(550,420,90,80);
Rectangle s(460,420,90,80);
Rectangle dp(638,420,90,80);
Rectangle dg(510,340,90,80);
Rectangle du(598,340,90,80);
Rectangle ds(550,260,90,80);
Text tG(500,500,"8");
Text f(590,500,"2");
Text gg(682,500,"3");
Text ll(410,500,"7");Text aa(550,420,"1");
Text nm(460,420,"?");
Text dssd(638,420,"6");
Text jk(510,340,"5");
Text lkj(598,340,"3");
Text dr(550,260,"2");
//Text bb(550,550,"8");
Text fg(280,140,"a) 2");
Text uj(282,180,"b) 4");
Text io(281,220,"c) 6");
  XEvent e;

while(1)
{
  nextEvent(e);

if(keyPressEvent(e))
{
   if(charFromEvent(e)==97||charFromEvent(e)==65)
   {
     Text hn(250,600,"CORRECT ANSWER");
     hn.setColor(COLOR(128, 0, 0));
    hn.setFill();
     wait(2);
    flag++;
     break;

   }
  else
   {
      Text hn(250,600,"WRONG ANSWER");
      Text hn1(250,630,"RETRY");
   hn.setColor(COLOR(128, 0, 0));
    hn.setFill();
      wait(2);
   }
}
}

}


void level7()
{
Text g7(400,40,"LEVEL 7");
g7.setColor(COLOR(0,0,255));
g7.setFill();

Text t(280,100,"Count the number of white circles on the board");
t.setColor(COLOR(0, 128, 128));
t.setFill();
t.scale(10);
//const char escapekey='\97';
   Line l(313,313,750,313);
    Line k(750,313,750,680);

Line n(750,680,312,680);
Line p(312,680,313,313);
//Line g();//
Circle c(352,352,25);c.setFill("red");
Circle j(350,402,25);
//j.setFill("red");
Circle aw(350,450,25);aw.setFill("red");
Circle ls(349,496,25);

Circle ps(347.5,545,25);ps.setFill("red");
Circle aq(347,596,25);
Circle aax(346,642,25);aax.setFill("red");

//ps.setFill("red");
Circle vs(400,352,25);//vs.setFill("red");
Circle ss(400,402,25);ss.setFill("red");
//ss.setFill("red");
Circle acc(400.5,449,25);



Circle sd(400.5,498,25);sd.setFill("red");

Circle sk(401,550,25);



Circle cd(398,598,25);cd.setFill("red");
//cd.setFill("red");
Circle gk(398,645,25);


Circle fk(450,352,25);fk.setFill("red");
Circle fd(451,400,25);
Circle fh(452,450,25);fh.setFill("red");
Circle pp(452,500,25);
Circle jj(452,548,25);jj.setFill("red");
Circle aa(450,596,25);
Circle fgg(450,646,25);fgg.setFill("red");


Circle ws(498,352,25);
Circle sh(498,400,25);sh.setFill("red");
//Circle fb(502,480,25);
//Circle vv(450,416,25);
//Circle zz(450,424,25);
//Circle cc(451,438,25);



//sh.setFill("red");
Circle q(498.5,450,25);
Circle qp(499,496,25);qp.setFill("red");


Circle f(499.5,546,25);

Circle uu(499.5,594,25);uu.setFill("red");

Circle uk(499.5,644,25);
Circle lf(546,352,25);
lf.setFill("red");
Circle pt(550,400,25);






Circle kl(548,450,25);
kl.setFill("red");
Circle aab(549,498,25);//aab.setFill("red");
Circle aad(549,548,25);aad.setFill("red");
Circle ef(549,598,25);
Circle as(549,645,25);as.setFill("red");
//Circle pf(549,640,25);

//aad.setFill("red");


Circle lp(600,645,25);
Circle auu(600,598,25);auu.setFill("red");
Circle ae(600,552,25);
Circle ad(600,500,25);ad.setFill("red");
Circle aj(600,450,25);
Circle ax(600,400,25);ax.setFill("red");
Circle an(600,350,25);



Circle gh(652,350,25);gh.setFill("red");
Circle dd(652,400,25);
Circle tt(652,450,25);tt.setFill("red");
Circle bb(652,498,25);

//gh.setFill("red");
//Circle ij(637,490,25);
Circle mn(652,548,25);mn.setFill("red");
mn.setFill("red");
Circle qw(652,600,25);Circle lb(652,650,25);
Circle nm(704,352,25);nm.setFill("red");
Circle nb(704,400,25);
//Circle op(704,420,25);//op.setFill("red");
Circle po(704,450,25);po.setFill("red");
Circle nr(704,500,25);//qr.setFill("red");
Circle pr(704,550,25);pr.setFill("red");
Circle cr(704,600,25);
Circle lr(704,650,25);lr.setFill("red");

//j.move(352,356);
//Circle a(447,447,36);
Text fg(280,140,"a) 24");
Text uj(282,180,"b) 45");
Text io(281,220,"c) 28");

  XEvent e;

while(1)
{
  nextEvent(e);

if(keyPressEvent(e))
{cout<<e.xkey.x;
   if(charFromEvent(e)==99||charFromEvent(e)==67)
   {
     Text bk(210,600,"CORRECT ANSWER");
     bk.setColor(COLOR(128, 0, 0));
    bk.setFill();
     wait(2);
     flag++;
     break;

   }
  else
   {
      Text bk(210,600,"WRONG ANSWER");
      Text bk1(210,630,"RETRY");
   bk.setColor(COLOR(128, 0, 0));
    bk.setFill();
    wait(2);
   }
}
}

}

void level8()
{
Text g8(400,40,"LEVEL 8");
g8.setColor(COLOR(0,0,255));
g8.setFill();

Text t(400,100,"WHICH BALLS SHOULD YOU PUT IN THE HOLES, INORDER TO GET THE TOTAL 30?");
Circle css(253,180,25);
Text pw(300,180,"+");
Circle oas(340,180,25);
Text qwo(390,180,"+");
Circle orgs(440,180,25);
Text qswo(480,180,"=");
Circle hwo(520,180,25);Text lfgd(520,180,"30");
hwo.setColor(COLOR(255,255,0));
hwo.setFill();
Circle c(253,253,25);Text osf(253,253,"1");
c.setColor(COLOR(300,258,0));
c.setFill();
Circle l(320,253,25);Text odgs(320,253,"3");
l.setColor(COLOR(128,128,0));
l.setFill();
Circle o(390,253,25);Text oaef(390,253,"5");
o.setColor(COLOR(290,258,0));
o.setFill();
Circle org(460,253,25);Text orgsre(460,253,"7");
org.setColor(COLOR(280,255,0));
org.setFill();
Circle cs(253,330,25);Text csdf(253,330,"9");
cs.setColor(COLOR(255,165,0));
cs.setFill();
Circle cds(320,330,25);Text cdsaw(320,330,"11");
cds.setColor(COLOR(255,255,0));
cds.setFill();
Circle ofd(390,330,25);Text ofdwsf(390,330,"13");ofd.setColor(COLOR(255,0,0));
ofd.setFill();
Circle ordgordg(460,330,25);
ordgordg.setColor(COLOR(128,0,0));
ordgordg.setFill();
Text ordg(460,330,"15");

//Circle g(253,250,25);

//Circle cd(260,250,25);
Text fg(400,400,"a) 4,24,12 ");
Text uj(400,440,"b) 11,13,6");
Text io(400,480,"c) 6,10,12");
Text ighfho(400,520,"Type in correct option");
  XEvent e;

while(1)
{
  nextEvent(e);

if(keyPressEvent(e))
{
   if(charFromEvent(e)==98||charFromEvent(e)==66)
   {
     Text hn(400,600,"CORRECT ANSWER");
     hn.setColor(COLOR(128, 0, 0));
    hn.setFill();
     wait(2);
     flag++;
     break;

   }
  else
   {
      Text hn(400,600,"WRONG ANSWER");
      Text hn1(400,630,"RETRY");
   hn.setColor(COLOR(128, 0, 0));
    hn.setFill();
      wait(2);
   }
}
}

}


void level9()
{
Text g9(400,30,"LEVEL 9");
g9.setColor(COLOR(0,0,255));
g9.setFill();

  Circle c1(100,100,30);
c1.setColor(COLOR(0,255,255));
c1.setFill();
Circle c2(200,100,50);
c2.setColor(COLOR(0,128,128));
c2.setFill();
Circle c3(300,100,30);
c3.setColor(COLOR(0,128,128));
c3.setFill();
Circle c4(400,100,50);
c4.setColor(COLOR(0,128,128));
c4.setFill();
Circle c5(500,100,30);
c5.setColor(COLOR(0,255,255));
c5.setFill();
Circle c6(600,100,50);
c6.setColor(COLOR(0,255,255));
c6.setFill();

Text T(400,300,"What comes next?");
Text a(300,400," a) " );
Circle C1(370,400,30);
C1.setColor(COLOR(0,255,255));
C1.setFill();
Circle C2(470,400,50);
C2.setColor(COLOR(0,128,128));
C2.setFill();

Text b(300,500," b)  ");
Circle C3(370,500,50);
C3.setColor(COLOR(0,128,128));
C3.setFill();
Circle C4(470,500,30);
C4.setColor(COLOR(0,128,128));
C4.setFill();

Text c(300,610,"c)  ");
Circle C5(370,610,50);
C5.setColor(COLOR(0,255,255));
C5.setFill();
Circle C6(470,610,30);
C6.setColor(COLOR(0,255,255));
C6.setFill();

Text t(350,690,"Type in the correct option:");
XEvent e;

while(1)
{
  nextEvent(e);

if(keyPressEvent(e))
{
   if(charFromEvent(e)==97||charFromEvent(e)==65)
   {
     Text t2(500,690,"CORRECT ANSWER");
     t2.setColor(COLOR(128, 0, 0));
    t2.setFill();
     wait(2);
     flag++;
     break;


   }
  else
   {
      Text t21(250,600,"WRONG ANSWER");
      Text t211(250,630,"RETRY");
      t21.setColor(COLOR(128, 0, 0));
    t21.setFill();
      wait(2);

   }
}
}

}


void level10()
{
Text g10(400,90,"LEVEL 10");
g10.setColor(COLOR(0,0,255));
g10.setFill();

Text t(400,320,"Fill in the missing blank");
t.setColor(COLOR(128, 0, 128));
    t.setFill();
    Text T(400,350,"2,32,332,____ ,33332");
T.setColor(COLOR(128, 0, 128));
    T.setFill();
Text t9(400,490," a) 3232 " );
Text t6(400,520," b) 3322 ");
Text t7(400,550,"c) 3332 ");
Text t8(400,580,"Type in the correct option:");

XEvent e;
while(1)
{
  nextEvent(e);

if(keyPressEvent(e))
{
   if(charFromEvent(e)==99||charFromEvent(e)==67)
   {
     Text t11(400,600,"CORRECT ANSWER");
     t11.setColor(COLOR(128, 0, 0));
    t11.setFill();

     wait(2);
     flag++;
     break;

   }
  else
   {
      Text t11(400,600,"WRONG ANSWER");
       Text t111(400,630,"RETRY");
      t11.setColor(COLOR(128, 0, 0));
    t11.setFill();
      wait(2);

   }
}
}
}


void level11()
{
Text gbl(400,40,"BONUS LEVEL");
gbl.setColor(COLOR(0,0,255));
gbl.setFill();

   Turtle t;
   Text ra(500,500,"You get only one try to complete the Maze ");
   ra.setColor(COLOR(128, 0, 0));
   ra.setFill();
   Text rb(500,550,"Drag the black cursor to begin, (the one inside the Maze).");
   rb.setColor(COLOR(128, 0, 0));
   rb.setFill();
   Text rC(500,570," You cannot lift your finger once you begin.");
   rC.setColor(COLOR(128, 0, 0));
   rC.setFill();
 t.forward(300);
 // t.right(90);
   t.left(90);
  t.forward(300);
  t.left(90);
  t.forward(350);
 // t.penDown();
  t.left(90);
  t.forward(280);
t.left(90);
 t.forward(230);
 t.left(90);
 t.penUp();
 t.forward(40);
t.right(90);
t.penDown();
t.forward(60);
t.right(90);
t.forward(40);
t.left(90);
t.forward(40);
t.left(90);
t.forward(60);
t.left(90);
t.forward(60);
t.penUp();
 t.forward(40);
 t.penDown();
t.forward(160);
t.penUp();
 t.forward(40);
 t.penDown();
 t.right(90);
t.forward(40);
t.right(90);
t.forward(40);
t.penUp();
 t.forward(40);
 t.penDown();
 t.forward(80);
t.penUp();
 t.forward(30);
 t.penDown();
 t.forward(100);
 t.left(90);
  t.forward(50);
  t.left(90);
t.forward(30);
t.penUp();
 t.forward(30);
 t.penUp();
 t.forward(30);
  t.penDown();
 t.forward(80);
 t.penUp();
 t.forward(30);
 t.penDown();
 t.forward(90);
 t.right(90);
 t.forward(40);
 t.right(90);
 t.forward(40);
 t.penUp();
 t.forward(30);

t.penDown();
 t.forward(90);

 t.penUp();
 t.forward(30);

t.penDown();
 t.forward(90);
t.left(90);
 t.forward(40);

 t.left(90);
 t.forward(40);

 t.penUp();
 t.forward(30);
t.penDown();
 t.forward(90);
  t.penUp();
 t.forward(30);
t.penDown();
 t.forward(90);


Circle c(437,437,7.5);
     c.setFill("RED");
Circle d(600,180,7.5);
     d.setFill("RED");
      XEvent e;int x1,y1;

 while(1)
 {
  nextEvent(e);

if(mouseDragEvent(e))
 {
 imprintLine(x1,y1,e.xmotion.x,e.xmotion.y);
x1=e.xmotion.x;
y1=e.xmotion.y;
}
if(mouseButtonPressEvent(e))
  {x1=e.xbutton.x;
  y1=e.xbutton.y;
  c.move(x1,x1);
  }

  if(mouseButtonReleaseEvent(e))
   {

    int d=getClick();
    {Text t(200,100,"GOOD TRY!");
    wait(2);
      flag++;
      break;
      }

     }
}

}




void menu()
{

   Rectangle bg(0,0,5000,5000);
   bg.setColor(COLOR(192, 192, 192));
   bg.setFill();
    XEvent e3;

        Text t(400, 100, "B R A I N   T E A S E R S");
        t.setColor(COLOR(255, 0, 0));

        Text t12(400, 220, "H O M E:");
        Text t13(400, 300, "1: Start Game");

        Text t15(400, 340, "2: Credits");
        Text t16(400, 380, "3: Exit");

        nextEvent(e3);
        char ch = charFromEvent(e3);


        if(ch==49)
        {
        if(ch)
        {
        t12.~Text();
        t13.~Text();
         t.~Text();
        t15.~Text();
        t16.~Text();
        }
         level1();
        }
        if(ch==50)
        {
        if(ch)
        {
        t12.~Text();
        t13.~Text();
         t.~Text();
        t15.~Text();
        t16.~Text();
        }
        XEvent e4;
            Text t1(400, 220, "CREDITS:");
            t1.setColor(COLOR(0, 255, 0));
            t1.setFill();
            Text t2(400, 260, "Project Members: Flancy Fernandes,  Marisa Gilda Baretto,  Mariza Rodrigues,  Yadnya Phadke");
            t2.setColor(COLOR(0, 0, 255));
            t2.setFill();
            Text t3(400, 380, "Press enter any key to go back!");
            nextEvent(e4);
            int an = charFromEvent(e4);
            if (an) {
                t1.~Text();
                t2.~Text();
                t3.~Text();
                menu();
            }
        }
        if(ch==51)
        {
        closeCanvas();


        }




}

 void finish()
 {
 Rectangle r(0,0,5000,5000);
 r.setColor(COLOR(250, 128, 114));
   r.setFill();
 Text t(400,400,"G A M E  O V E R");
 wait(10);
t.~Text();
r.~Rectangle();
 menu();

 }


main_program
{
initCanvas("WELCOME",800,800);
menu();

   if(flag==1)
   {
       level2();

   }
 if(flag==2)
   {

   level3();
   }
   if(flag==3);
   {   level4();    }

   if(flag==4)
   {level5();}

   if(flag==5)
   {level6();}

   if(flag==6)
   { level7();}

   if(flag==7)
   { level8();

   }
    if(flag==8)
    {level9();}

    if(flag==9)
    {level10();}

    if(flag==10)
    {level11();
    finish();}
   }
