
#include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>

void init()
{
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glOrtho(-50,50,-40,40,-50,40);
}
float count = 48;
float kite = 40;
float p=50.0;
float ballon = -38;
float birds = 50;
float cloud = -50;


void circle(GLfloat rx,GLfloat ry,GLfloat x,GLfloat y)//radius_x,radius_y,certre_position_x,centre_position_y
{
    int i=0;
    float angle;
    GLfloat PI = 3.1416;
    glBegin(GL_POLYGON);
    glVertex2f(x,y);
    for(i=0;i<361;i++)
    {
        angle = i * (PI/180); //conversion from degree to radian
        glVertex2f(x+(cos(angle)*rx),y+(sin(angle)*ry));
    }
    glEnd();
}
void circleb(GLfloat rx,GLfloat ry,GLfloat x,GLfloat y)//radius_x,radius_y,certre_position_x,centre_position_y
{
    int i=0;
    float angle;
    GLfloat PI = 3.1416;
    glBegin(GL_POLYGON);
    glVertex2f(x,y);
    for(i=180;i<361;i++)
    {
        angle = i * (PI/180); //conversion from degree to radian
        glVertex2f(x+(cos(angle)*rx),y+(sin(angle)*ry));
    }
    glEnd();
}
void circlebb(GLfloat rx,GLfloat ry,GLfloat x,GLfloat y)//radius_x,radius_y,certre_position_x,centre_position_y
{
    int i=0;
    float angle;
    GLfloat PI = 3.1416;
    glBegin(GL_POLYGON);
    glVertex2f(x,y);
    for(i=0;i<181;i++)
    {
        angle = i * (PI/180); //conversion from degree to radian
        glVertex2f(x+(cos(angle)*rx),y+(sin(angle)*ry));
    }
    glEnd();
}
void kites ()
{


     ///kite//kite//kite//kite//kite
    glPushMatrix();
    glTranslatef(4,30,0);

    glBegin(GL_TRIANGLES); //green
    glColor3f(0,1,0);
    glVertex2d(kite-3,-2);
    glVertex2d(kite,-0);
    glVertex2d(kite,-2);
    glEnd();

    glBegin(GL_TRIANGLES); //green
    glColor3f(0,0,1);
    glVertex2d(kite,-2);
    glVertex2d(kite,0);
    glVertex2d(kite+3,-2);
    glEnd();

    glBegin(GL_TRIANGLES); //green
    glColor3f(1,0,0);
    glVertex2d(kite,-2);
    glVertex2d(kite+3,-2);
    glVertex2d(kite,-5);
    glEnd();
    glBegin(GL_TRIANGLES); //green
    glColor3f(1,1,0);
    glVertex2d(kite,-2);
    glVertex2d(kite,-5);
    glVertex2d(kite-3,-2);
    glEnd();
    //tail
    glBegin(GL_TRIANGLES); //green
    glColor3f(1,1,0);
    glVertex2d(kite+1,-9);
    glVertex2d(kite-1,-9);
    glColor3f(1,0,0);
    glVertex2d(kite,-4.5);
    glEnd();
    glPopMatrix();







        /// //////////////////////////Person////////////////////
    glPushMatrix();
    glTranslatef(1,-15,0);


    glColor3f(0,0,0);
    circle(1.65,1.5, 43, 10.4);
    //face
    glColor3f(0.75,0.49,0.22);
    circle(1.65,1.5, 43, 10);

    //left eye br shadow
    glColor3f(0,0,0);
    circle(.359,.259, 42.3, 10.4);
    //left eye br
    glColor3f(0.75,0.49,0.22);
    circle(.359,.259, 42.3, 10.2);

    //eye  left
    glColor3f(0,0,0);
    circle(.159,.159, 42.25, 10.2);

    //right eye br shadow
    glColor3f(0,0,0);
    circle(.359,.259, 43.8, 10.4);
    //right eye br
    glColor3f(0.75,0.49,0.22);
    circle(.359,.259, 43.8, 10.2);
    //eye right
    glColor3f(0,0,0);
    circle(.159,.159, 43.75, 10.2);

    //motth
    glColor3f(0.61,0.06,0.0);
    circle(.459,.359, 43, 9.4);

    glColor3f(0.75,0.49,0.22);
    circle(.459,.359, 43, 9.6);


    // nose lower
    glColor3f(0.6,0.32,0.09);
    circle(.219,.219, 43, 9.8);
    //nose upper
    circle(.209,.299, 43, 9.89);


    //belly
    glBegin(GL_POLYGON);
    glColor3f(0.89,0.75,0.0);
    glVertex2d(41, 5);
    glVertex2d(41,8.5);
    glVertex2d(45, 8.5);
    glVertex2d(45, 5);
    glEnd();

    //belt
    glBegin(GL_POLYGON);
    glColor3f(0,0,0.0);
    glVertex2d(41, 4.5);
    glVertex2d(41,5);
    glVertex2d(45, 5);
    glVertex2d(45, 4.5);
    glEnd();

    //left pant
    glBegin(GL_POLYGON);
    glColor3f(0,0,1);
    glVertex2d(41, 4.5);
    glVertex2d(43,4.5);
    glVertex2d(43, 3);
    glVertex2d(42, 1);
    glVertex2d(41, 1);
    glEnd();
    //right pant
    glBegin(GL_POLYGON);
    glColor3f(0,0,1);
    glVertex2d(43, 3);
    glVertex2d(43,4.5);
    glVertex2d(45, 4.5);
    glVertex2d(45, 1);
    glVertex2d(44, 1);
    glEnd();
    //thang left
    glBegin(GL_POLYGON);
    glColor3f(0.75,0.49,0.22);
    glVertex2d(41.2, 1);
    glVertex2d(41.2,-1);
    glVertex2d(42, -1);
    glVertex2d(42, 1);
    glEnd();

    //leg right
    glBegin(GL_POLYGON);
    glColor3f(0.75,0.49,0.22);
    glVertex2d(44, 1);
    glVertex2d(44,-1);
    glVertex2d(44.76, -1);
    glVertex2d(44.8, 1);
    glEnd();

     //hand down
    glBegin(GL_POLYGON);
    glColor3f(0.75,0.49,0.22);
    glVertex2d(39.28, 3.6);
    glVertex2d(39.8,3.6);
    glVertex2d(39.8, 6.6);
    glVertex2d(39.28, 6.6);

    glEnd();

    //left  hand hata
    glBegin(GL_POLYGON);
    glColor3f(0.99,0.75,0.0);
    glVertex2d(41, 8.5);
    glVertex2d(39,7);
    glVertex2d(40, 6);
    glVertex2d(41, 7);
    glEnd();
    //hat hand
    glBegin(GL_POLYGON);
    glColor3f(0.99,0.75,0.0);
    glVertex2d(45, 8.5);
    glVertex2d(47,7);
    glVertex2d(46, 6);
    glVertex2d(45, 7);
    glEnd();

//hand
    glBegin(GL_POLYGON);
    glColor3f(0.75,0.49,0.22);
    glVertex2d(46.8, 6.8);
    glVertex2d(47.5,6.6);
    glVertex2d(47.5, 5.7);
    glVertex2d(46, 6.2);
    glEnd();

//hand up
    glBegin(GL_POLYGON);
    glColor3f(0.75,0.49,0.22);
    glVertex2d(47, 6);
    glVertex2d(47.5,6);
    glVertex2d(47.5, 9);
    glVertex2d(47, 9);

    glEnd();


    glBegin(GL_LINES);
    glColor3f(1,.5,.5);
    glVertex2d(47.28,9);
    glColor3f(0,0,0);
    glVertex2d(kite+3,43.3);
    glEnd();

    glPopMatrix();









}

void myDisplay() ////plane
{

    if(p>=-50)   //moving limit with the display measurement
       p=p-0.05; //changing the object position for redisplaying

       else
       p=70;    // For backing the object continuously
       if (kite <=count-6)
     {
         kite += 0.01;
     }

     else if(kite >= 35)
     {
         count = -50;
         kite -= 0.01;

     }

     else
     {
         count = 48;
     }

if(birds>=-50) ////birds
birds = birds - 0.03;
else birds = 60;




//////////////////////////////balloon//////////////////////////////////////////////////////////


if(ballon <=38)
{
    ballon += 0.05;
}

else
ballon =-38;



///////////////////////////////////cloud condition//////////////////////////////////////////////
if(cloud <=50)
{
    cloud += 0.007;
}
else
cloud =-130;



   ///////////////////////////// //sky background
     glColor3f( 0.53, 0.81,0.92);
        glBegin(GL_POLYGON);
        glColor3d(1,0.5,0.58);

        glVertex3d(-50,-15,0);
        glColor3f( 0.53, 0.81,0.92);

        glVertex3d(-50,40,0);
             glColor3f( 0.53, 0.81,0.92);

        glVertex3d(50.0, 40, 0);
        glColor3d(0.6,0.5,0.58);
        glVertex3d(50,15,0);

 glEnd();



 ///////////////////////////Sun//////////////////////////////////////////


glBegin(GL_LINES);
glColor3f(1.0,0.4,0.0);
glVertex2d(-44.5,35);
glVertex2d(-45,38.3);
glEnd();


glBegin(GL_LINES);
glColor3f(1.0,0.4,0.0);
glVertex2d(-46,35);
glVertex2d(-47,38);
glEnd();


glBegin(GL_LINES);
glColor3f(1.0,0.4,0.0);
glVertex2d(-47,34);
glVertex2d(-48.5,37);
glEnd();


glBegin(GL_LINES);
glColor3f(1.0,0.4,0.0);
glVertex2d(-43.4,34);
glVertex2d(-42.9,37.5);
glEnd();

glBegin(GL_LINES);
glColor3f(1.0,0.4,0.0);
glVertex2d(-42.3,33.5);
glVertex2d(-41,35.8);
glEnd();

glColor3f(1.0,0.4,0.0);
circle(3,3.8,-45,32);

//////////////////////////////// cloud/////////////////////////////////
glColor3f(1,1,1);
circle(3,2,cloud+20,35);

glColor3f(1,1,1);
circle(3,2,cloud+23,35);


glColor3f(1,1,1);
circle(3,2,cloud+21,37);

glColor3f(1,1,1);
circle(2,2,cloud+21,33.5);



glColor3f(1,1,1);
circle(3,2,cloud+15,35);

glColor3f(1,1,1);
circle(3,2,cloud+18,35);


glColor3f(1,1,1);
circle(3,2,cloud+16,37);

glColor3f(1,1,1);
circle(2,2,cloud+18,33.5);


////2nd cloud
glColor3f(1,1,1);
circle(3,1.5,cloud+40,35);

glColor3f(1,1,1);
circle(2,1.5,cloud+43,35);


glColor3f(1,1,1);
circle(2,1,cloud+41,36.4);
//upper right
glColor3f(1,1,1);
circle(5,1,cloud+41,34);
//upper right

glColor3f(1,1,1);
circle(2,.9,cloud+41,33);

////cloud 3
glColor3f(1,1,1);
circle(3,1.5,cloud+60,35);

glColor3f(1,1,1);
circle(2,1.5,cloud+57,35);


glColor3f(1,1,1);
circle(2,1,cloud+59,36.4);
//upper right
glColor3f(1,1,1);
circle(5,1,cloud+59,34);
//upper right



glColor3f(1,1,1);
circle(2,.9,cloud+59,33);


////cloud 4
glColor3f(1,1,1);
circle(3,1.5,cloud+80,35);

glColor3f(1,1,1);
circle(2,1.5,cloud+77,35);


glColor3f(1,1,1);
circle(2,1,cloud+79,36.4);
//upper right
glColor3f(1,1,1);
circle(5,1,cloud+79,34);
//upper right



glColor3f(1,1,1);
circle(2,.9,cloud+79,33);


/////////////////////////////{PLANE}//////////////////////////////////


glColor3f(0.16,0.84,0.95); // plane body
        glBegin(GL_POLYGON);
        glVertex3d(p-32,33,0);
        glVertex3d(p-32,36.5,0);
        glVertex3d(p-20,36.5, 0);

        //glColor3f(0.5,0.55,0.59);
        glVertex3d(p-20,33,0);
        //glVertex3d(20,38,0);
glEnd();
circle(2.3,1.7,p-32,34.7);

glColor3f(0.16,0.45,0.65);
//circle(1.1,0.75,p-33.2,35.1);
//circle(0.5,0.5,p-33.9,34.8);
glBegin(GL_POLYGON);
glVertex2f(p-34,34.2);
glVertex2f(p-32.5,34.2);
glVertex2f(p-32.5,35.7);
glVertex2f(p-34,35.7);
glEnd();
circle(0.5,0.6,p-33.9,34.9);

glColor3f(0.16,0.84,0.95);// hand
        glBegin(GL_POLYGON);
        glVertex3d(p-26.5,36.5,0);
        glVertex3d(p-23.5,39,0);
        glColor3f(0.17,0.24,0.31);
        glVertex3d(p-22,39, 0);
        glVertex3d(p-23.3,36.5,0);

glEnd();


glColor3f(0.16,0.84,0.95); // down hand 0.56,,0.27,0.68
        glBegin(GL_POLYGON);
        glVertex3d(p-23.1,30,0);
        glVertex3d(p-26.5,33,0);
        glColor3f(0.17,0.24,0.31);
        glVertex3d(p-23.3,33, 0);
        glColor3f(0.97,0.98,0.98);
        glVertex3d(p-21.5,30,0);

glEnd();

glColor3f(0.16,0.84,0.95); ///////back circle
circle(2.3,1.7,p-20,34.7);
/*
glColor3f(1,1,1); // down back hand
        glBegin(GL_POLYGON);
        glVertex3d(p-20,34,0);
        glVertex3d(p-19,31,0);
        glColor3f(0,0,0);
        glVertex3d(p-18,31.5, 0);
        glVertex3d(p-18,34,0);

glEnd();
*/

glColor3f(0.16,0.84,0.95); // leg
        glBegin(GL_POLYGON);
        glVertex3d(p-23,34,0);
        glVertex3d(p-17.8,34,0);
        glColor3f(0.17,0.24,0.31);
        glVertex3d(p-15,39, 0);
        glVertex3d(p-16.5,39,0);

glEnd();

glColor3f(0.16,0.84,0.95); // leg
        glBegin(GL_POLYGON);
        glVertex3d(p-16.2,34.5,0);
        glVertex3d(p-14.8,34.5,0);
        glVertex3d(p-16.5,36.5, 0);
        glColor3f(0.17,0.24,0.31);
        glVertex3d(p-17.2,35.2,0);

glEnd();


//window
glColor3f(0,0,0);
circle(0.5,0.5,p-30,35);
circle(0.5,0.5,p-28,35);
circle(0.5,0.5,p-26,35);
circle(0.5,0.5,p-24,35);
circle(0.5,0.5,p-22,35);




 ///////////////////////////////////////////birds///////////////////
        glColor3f(0,0.8,0.13);//1st
        circleb(2,2,birds-7,35);
        glColor3f(1,1,0);
        circleb(2.3,.5,birds-5,34.2);

        glColor3f(0,0.8,0.13);
        circlebb(1,1.5,birds-9,35);

        glColor3f(1,1,1);
        circle(.3,.3,birds -9.2,35.5); //40
        glColor3f(0,0,0);
        circle(.2,.2,birds-9.2,35.5); //40

        glColor3f(0,0.8,0.13);//2nd
        circleb(2,2,birds-17,33);
        glColor3f(1,1,0);
        circleb(2.3,.5,birds-15,32.2);

        glColor3f(0,0.8,0.13);
        circlebb(1,1.5,birds-19,33);

        glColor3f(1,1,1);
        circle(.3,.3,birds-19.2,33.5); // 30
        glColor3f(0,0,0);
        circle(.2,.2,birds-19.2,33.5); //30

       glColor3f(0,0.8,0.13);//3rd
        circleb(2,2,birds-7,30);
        glColor3f(1,1,0);
        circleb(2.3,.5,birds-5,29.2);

        glColor3f(0,0.8,0.13);
        circlebb(1,1.5,birds-9,30);

        glColor3f(1,1,1);
        circle(.3,.3,birds-9.2,30.5); //40
        glColor3f(0,0,0);
        circle(.2,.2,birds-9.2,30.5); //40

        glBegin(GL_TRIANGLES);
        glColor3f(0,1,0);
        glVertex3d(birds-5,35,0);
        glColor3f(1,1,1);
        glVertex3d(birds-3,36,0);
        glColor3f(1,0,0);
        glVertex3d(birds-3,34,0);

        glColor3f(0,1,0);
        glVertex3d(birds-15,33,0);
        glColor3f(1,1,1);
        glVertex3d(birds-13,34,0);
        glColor3f(1,0,0);
        glVertex3d(birds-13,32,0);

        glColor3f(0,1,0);
        glVertex3d(birds-5,30,0);
        glColor3f(1,1,1);
        glVertex3d(birds-3,31,0);
        glColor3f(1,0,0);
        glVertex3d(birds-3,29,0);

 glEnd();




/////////////////////////round//////////////////////////



glColor3f(0,0.6,0);
        circle(2,2,-50,15);
        circle(2,3,-48,15);
        circle(2,2,-45,15);
        circle(2,2,-42,15);
        circle(2,3,-39,15);
        circle(2,2,-36,15);
        circle(2,3,-33,15);
        circle(2,2,-30,15);
        circle(2,2,-27,15);
        circle(2,2,-24,15);
        circle(2,3,-21,15);
        circle(2,2,-18,15);
        circle(2,3,-15,15);

glColor3f(0,0.6,0);
        circle(2,2,50,15);
        circle(2,2,48,15);
        circle(2,2,45,15);
        circle(2,2,42,15);
        circle(2,3,39,15);
        circle(2,2,36,15);
        circle(2,3,33,15);
        circle(2,2,30,15);
        circle(2,2,27,15);
        circle(2,2,24,15);
        circle(2,3,21,15);
        circle(2,2,18,15);
        circle(2,2,15,15);

    //down background
    glColor3f( 0,0.7,0.12);

        glBegin(GL_POLYGON);
        glVertex3d(-50,-40,0);
         glColor3f(.52,.9,.43);
        glVertex3d(-50,15,0);
        glColor3f(.52,.9,.43);
        glVertex3d(50.0, 15, 0);
        glColor3f(0,0.7,0.12);
        glVertex3d(50,-40,0);

 glEnd();


///////////////////////////////////////////Mahal//////////////////////////////////

 //mahal down stand
  glColor3f(0.92,0.8,0.4);
        glBegin(GL_POLYGON);
        glVertex3d(-35,0,0);
        glVertex3d(-35,3,0);
        glVertex3d(35.0, 3, 0);
        glVertex3d(35,0,0);

 glEnd();

 //middle part

 glColor3f(0.92,0.8,0.4);
        glBegin(GL_POLYGON);
        glVertex3d(-7,3,0);
        glVertex3d(-7,28,0);
        glVertex3d(7, 28, 0);
        glVertex3d(7,3,0);
        glEnd();
//middle head circle
glColor3f(0.92,0.8,0.4);
circle(4,6,0,30);

//middle circle head

 glColor3f(0.92,0.8,0.4);
        glBegin(GL_TRIANGLES);
        glVertex3d(-1,33,0);
        glVertex3d(0,39,0);
        glVertex3d(1, 33, 0);
        glEnd();


//middle part middle

glColor3f(.90,.90,.90);
        glBegin(GL_POLYGON);
        glVertex3d(-5,3,0);
        glVertex3d(-5,23,0);
        glVertex3d(5, 23, 0);
        glVertex3d(5,3,0);
        glEnd();

    //glColor3f(.75,.75,0.75);
    //circle(3.5,5,0,25

glColor3f(.90,.90,.90); //middle part middle sowkat
        glBegin(GL_POLYGON);
        glVertex3d(-4,23,0);
        glVertex3d(-3,26,0);
        glVertex3d(0, 29, 0);
        glVertex3d(3,26,0);
        glVertex3d(4,23,0);
        glEnd();


        //middle door bottom

        glColor3f(0.8,0.64,0.05);
        glBegin(GL_POLYGON);
        glVertex3d(-2.5,3,0);
        glVertex3d(-2.5,8,0);
        glVertex3d(0, 12, 0);
        glVertex3d(2.5,8,0);
        glVertex3d(2.5,3,0);
        glEnd();

        //middle door top
          glColor3f(0.8,0.64,0.05);
        glBegin(GL_POLYGON);
        glVertex3d(-2.5,15,0);
        glVertex3d(-2.5,20,0);
        glVertex3d(0, 25, 0);
        glVertex3d(2.5,20,0);
        glVertex3d(2.5,15,0);
        glEnd();


//middle door top door base
        glColor3f(.85,.85,.85);
        glBegin(GL_POLYGON);
        glVertex3d(-5,14.5,0);
        glVertex3d(-5,15.5,0);
        glVertex3d(5, 15.5, 0);
        glVertex3d(5,14.5,0);
        glEnd();



//left side
glColor3f(0.92,0.8,0.4); //1st left room
        glBegin(GL_POLYGON);
        glVertex3d(-15,3,0); //4
        glVertex3d(-15,25,0);
        glVertex3d(-7, 25, 0);
        glVertex3d(-7,3,0);
        glEnd();

        glColor3f(0.92,0.8,0.4); //1st left room head circle
        circle(3,5,-11.5,25);

//1st left room circle head
 glColor3f(0.92,0.8,0.4);
        glBegin(GL_TRIANGLES);
        glVertex3d(-11.9,29.5,0);
        glVertex3d(-11.4,33,0);
        glVertex3d(-11,29.5, 0);
        glEnd();


//1st left room middle down door
   glColor3f(0.8,0.64,0.05);
        glBegin(GL_POLYGON);
        glVertex3d(-14,3,0);
        glVertex3d(-14,8,0);
        glVertex3d(-12.5,9.5, 0);
        glVertex3d(-11.5,11.5,0);
        glVertex3d(-10.5,9.5,0);
        glVertex3d(-9,8,0);
        glVertex3d(-9,3,0);
        glEnd();

//1st left room middle top door base

 glColor3f(.85,.85,.85);
        glBegin(GL_POLYGON);
        glVertex3d(-15,14.5,0);
        glVertex3d(-15,15,0);
        glVertex3d(-7,15, 0);
        glVertex3d(-7,14.5,0);

        glEnd();


//1st left room middle top door
 glColor3f(0.8,0.64,0.05);
        glBegin(GL_POLYGON);
        glVertex3d(-13.7,15,0);
        glVertex3d(-13.7,20,0);
        glVertex3d(-12.5,21.5,0);
        glVertex3d(-11.5,23.5, 0);
        glVertex3d(-10.3,21.5,0);
        glVertex3d(-9,20,0);
        glVertex3d(-9,15,0);
        glEnd();



glColor3f(.85,.85,.85);//left stand
        glBegin(GL_POLYGON);
        glVertex3d(-7.5,3,0);
        glVertex3d(-7.5,30,0);
        glVertex3d(-7, 30, 0);
        glVertex3d(-7,3,0);
        glEnd();



   glColor3f(.85,.85,.85); //left stand head
    circle(0.6,0.6,-7.3,30);

glColor3f(0.92,0.8,0.4); //2nd left room
        glBegin(GL_POLYGON);
        glVertex3d(-22,3,0); //5
        glVertex3d(-22,25,0);
        glVertex3d(-15, 25, 0);
        glVertex3d(-15,3,0); //4
        glEnd();


glColor3f(.85,.85,.85); //2nd left stand
        glBegin(GL_POLYGON);
        glVertex3d(-15.5,3,0); //4
        glVertex3d(-15.5,30,0);
        glVertex3d(-15, 30, 0);
        glVertex3d(-15,3,0); //4
        glEnd();

   glColor3f(.85,.85,.85); //2nd left stand head
    circle(0.6,0.6,-15.3,30);

glColor3f(0.92,0.8,0.4); //2nd left room head circle
        circle(2.5,4,-18.5,25);

//2nd left room circle head
glColor3f(0.92,0.8,0.4);
        glBegin(GL_TRIANGLES);
        glVertex3d(-18.9,28.5,0);
        glVertex3d(-18.4,32,0);
        glVertex3d(-18,28.5, 0);
        glEnd();




//2nd left room middle down door
   glColor3f(0.8,0.64,0.05);
        glBegin(GL_POLYGON);
        glVertex3d(-21,3,0);
        glVertex3d(-21,8,0);
        glVertex3d(-19.8,9.5, 0);
        glVertex3d(-18.8,11.5,0);
        glVertex3d(-17.8,9.5,0);
        glVertex3d(-16.5,8,0);
        glVertex3d(-16.5,3,0);
        glEnd();

//2nd left room middle top door base

 glColor3f(.85,.85,.85);
        glBegin(GL_POLYGON);
        glVertex3d(-22,14.5,0);
        glVertex3d(-22,15,0);
        glVertex3d(-15.6,15, 0);
        glVertex3d(-15.6,14.5,0);

        glEnd();


//2nd left room middle top door
 glColor3f(0.8,0.64,0.05);
        glBegin(GL_POLYGON);
        glVertex3d(-20.8,15,0);
        glVertex3d(-20.8,20,0);
        glVertex3d(-19.5,21.5,0);
        glVertex3d(-18.5,23.5, 0);
        glVertex3d(-17.3,21.5,0);
        glVertex3d(-16.2,20,0);
        glVertex3d(-16.2,15,0);
        glEnd();




   glColor3f(.85,.85,.85); //3rd left stand
        glBegin(GL_POLYGON);
        glVertex3d(-22.5,3,0); //5
        glVertex3d(-22.5,30,0);
        glVertex3d(-22, 30, 0);
        glVertex3d(-22,3,0); //5
        glEnd();

glColor3f(.85,.85,.85); //3rd left stand head
    circle(0.6,0.6,-22.3,30);










////////////////////////////////////////////////Right side//////////////////////////////////////////

glColor3f(0.92,0.8,0.4); //1st right room
        glBegin(GL_POLYGON);
        glVertex3d(15,3,0); //4
        glVertex3d(15,25,0);
        glVertex3d(7, 25, 0);
        glVertex3d(7,3,0); //3
        glEnd();

        glColor3f(0.92,0.8,0.4); //1st right room head circle
        circle(3,5,11.5,25);

        //1st right room circle head
 glColor3f(0.92,0.8,0.4);
        glBegin(GL_TRIANGLES);
        glVertex3d(11.9,29.5,0);
        glVertex3d(11.4,33,0);
        glVertex3d(11,29.5, 0);
        glEnd();

   glColor3f(.85,.85,.85); //right stand
        glBegin(GL_POLYGON);
        glVertex3d(7.5,3,0);
        glVertex3d(7.5,30,0);
        glVertex3d(7, 30, 0);
        glVertex3d(7,3,0);
        glEnd();

   glColor3f(.85,.85,.85); //right stand head
    circle(0.6,0.6,7.3,30);


//1st right room middle down door
   glColor3f(0.8,0.64,0.05);
        glBegin(GL_POLYGON);
        glVertex3d(14,3,0);
        glVertex3d(14,8,0);
        glVertex3d(12.5,9.5, 0);
        glVertex3d(11.5,11.5,0);
        glVertex3d(10.5,9.5,0);
        glVertex3d(9,8,0);
        glVertex3d(9,3,0);
        glEnd();

//1st right room middle top door base

 glColor3f(.85,.85,.85);
        glBegin(GL_POLYGON);
        glVertex3d(15,14.5,0);
        glVertex3d(15,15,0);
        glVertex3d(7,15, 0);
        glVertex3d(7,14.5,0);

        glEnd();


//1st right room middle top door
 glColor3f(0.8,0.64,0.05);
        glBegin(GL_POLYGON);
        glVertex3d(13.7,15,0);
        glVertex3d(13.7,20,0);
        glVertex3d(12.5,21.5,0);
        glVertex3d(11.5,23.5, 0);
        glVertex3d(10.3,21.5,0);
        glVertex3d(9,20,0);
        glVertex3d(9,15,0);
        glEnd();







glColor3f(0.92,0.8,0.4); //2nd right room
        glBegin(GL_POLYGON);
        glVertex3d(22,3,0); //5
        glVertex3d(22,25,0);
        glVertex3d(15, 25, 0);
        glVertex3d(15,3,0); //4
        glEnd();


   glColor3f(.85,.85,.85); //2nd right stand
        glBegin(GL_POLYGON);
        glVertex3d(15.5,3,0); //4
        glVertex3d(15.5,30,0);
        glVertex3d(15, 30, 0);
        glVertex3d(15,3,0); //4
        glEnd();

glColor3f(.85,.85,.85);//2nd right stand head
    circle(0.6,0.6,15.3,30);

glColor3f(0.92,0.8,0.4); //2nd right room head circle
        circle(2.5,4,18.5,25);

//2nd right room circle head
glColor3f(0.92,0.8,0.4);
        glBegin(GL_TRIANGLES);
        glVertex3d(18.9,28.5,0);
        glVertex3d(18.4,32,0);
        glVertex3d(18,28.5, 0);
        glEnd();




//2nd right room middle down door
   glColor3f(0.8,0.64,0.05);
        glBegin(GL_POLYGON);
        glVertex3d(21,3,0);
        glVertex3d(21,8,0);
        glVertex3d(19.8,9.5, 0);
        glVertex3d(18.8,11.5,0);
        glVertex3d(17.8,9.5,0);
        glVertex3d(16.5,8,0);
        glVertex3d(16.5,3,0);
        glEnd();

//2nd right room middle top door base

 glColor3f(.85,.85,.85);
        glBegin(GL_POLYGON);
        glVertex3d(22,14.5,0);
        glVertex3d(22,15,0);
        glVertex3d(15.6,15, 0);
        glVertex3d(15.6,14.5,0);

        glEnd();


//2nd right room middle top door
 glColor3f(0.8,0.64,0.05);
        glBegin(GL_POLYGON);
        glVertex3d(20.8,15,0);
        glVertex3d(20.8,20,0);
        glVertex3d(19.5,21.5,0);
        glVertex3d(18.5,23.5, 0);
        glVertex3d(17.3,21.5,0);
        glVertex3d(16.2,20,0);
        glVertex3d(16.2,15,0);
        glEnd();




    glColor3f(.85,.85,.85); //3rd right stand
        glBegin(GL_POLYGON);
        glVertex3d(22.5,3,0); //5
        glVertex3d(22.5,30,0);
        glVertex3d(22, 30, 0);
        glVertex3d(22,3,0); //5
        glEnd();

    glColor3f(.85,.85,.85); //3rd right stand head
    circle(0.6,0.6,22.3,30);




////////////////////////////////////////////////////BASE STAND///////////////////////////////////////////


//mahal base left stand
  glColor3f(0.92,0.8,0.4);
        glBegin(GL_POLYGON);
        glVertex3d(-35,3,0);
        glVertex3d(-34.6,32,0);
        glVertex3d(-33.8,32, 0);
        glVertex3d(-33.5,0,0);

 glEnd();

//mahal base left stand head
glColor3f(0.92,0.8,0.4);
        glBegin(GL_TRIANGLES);
        glVertex3d(-35,30,0);
        glVertex3d(-34.2,35,0);
        glVertex3d(-33.3,30, 0);

 glEnd();

 //stand circle

 glColor3f(0.92,0.8,0.4);
circle(1.3,0.7,-34.2,15.5);
//circle(1.5,1,-34.1,15.2);

circle(1.2,0.7,-34.2,23.5);





//mahal base right stand
  glColor3f(0.92,0.8,0.4);
        glBegin(GL_POLYGON);
        glVertex3d(35,3,0);
        glVertex3d(34.6,32,0);
        glVertex3d(33.8,32, 0);
        glVertex3d(33.5,0,0);

 glEnd();

//mahal base right stand head
glColor3f(0.92,0.8,0.4);
        glBegin(GL_TRIANGLES);
        glVertex3d(35,30,0);
        glVertex3d(34.2,35,0);
        glVertex3d(33.3,30, 0);

 glEnd();

 //stand circle

 glColor3f(0.92,0.8,0.4);
circle(1.3,0.7,34.27,15.5);
//circle(1.5,1,-34.1,15.2);

circle(1.2,0.7,34.27,23.5);


////////////////////////////////////down side////////////////////////////////////////////////

//road
  glColor3f( 0.9,1,1);
        glBegin(GL_POLYGON);
        glVertex3d(-15,-40,0);
        glVertex3d(-15,0,0);
        glVertex3d(15,0, 0);
        glVertex3d(15,-40,0);

 glEnd();

 //inner road
 glColor3f(0,0.91,0.9);
        glBegin(GL_POLYGON);
        glVertex3d(-11,-40,0);
        glVertex3d(-11,0,0);
        glVertex3d(11,0, 0);
        glVertex3d(11,-40,0);

 glEnd();

 ////////////////////////////////////////////////TREE???///////////////////////////////////////

 glColor3f(0.29,0.05,0.3); // tree left 1
        glBegin(GL_POLYGON);
        glVertex3d(-20,-35,0);
        glVertex3d(-20,-31,0);
        glVertex3d(-19,-31, 0);
        glVertex3d(-19,-35,0);

 glEnd();


glColor3f(0.29,0.51,0.4);
        glBegin(GL_TRIANGLES);
        glVertex3d(-22,-31,0);
        glVertex3d(-19.5,-28.5,0);
        glVertex3d(-17,-31, 0);

 glEnd();


  glColor3f(0.29,0.51,0.4);
        glBegin(GL_TRIANGLES);
        glVertex3d(-22,-30,0);
        glVertex3d(-19.5,-27.5,0);
        glVertex3d(-17,-30, 0);

 glEnd();

    glColor3f(0.29,0.51,0.4);
        glBegin(GL_TRIANGLES);
        glVertex3d(-22,-29,0);
        glVertex3d(-19.5,-25.5,0);
        glVertex3d(-17,-29, 0);

 glEnd();



  glColor3f(0.29,0.05,0.3); ///////// tree left 2
          glBegin(GL_POLYGON);
        glVertex3d(-20.5,-25,0);
        glVertex3d(-20,-21,0);
        glVertex3d(-19,-21, 0);
        glVertex3d(-18.5,-25,0);

 glEnd();


glColor3f(0.29,0.51,0.4);
        glBegin(GL_TRIANGLES);
        glVertex3d(-22,-21,0);
        glVertex3d(-19.5,-18.5,0);
        glVertex3d(-17,-21, 0);

 glEnd();


  glColor3f(0.29,0.51,0.4);
        glBegin(GL_TRIANGLES);
        glVertex3d(-22,-20,0);
        glVertex3d(-19.5,-17.5,0);
        glVertex3d(-17,-20, 0);

 glEnd();

    glColor3f(0.29,0.51,0.4);
        glBegin(GL_TRIANGLES);
        glVertex3d(-22,-19,0);
        glVertex3d(-19.5,-15.5,0);
        glVertex3d(-17,-19, 0);

 glEnd();



  glColor3f(0.29,0.05,0.3); ///////// tree left 3
          glBegin(GL_POLYGON);
        glVertex3d(-20,-15,0);
        glVertex3d(-20,-11,0);
        glVertex3d(-19,-11, 0);
        glVertex3d(-19,-15,0);

 glEnd();


glColor3f(0.29,0.51,0.4);
        glBegin(GL_TRIANGLES);
        glVertex3d(-22,-11,0);
        glVertex3d(-19.5,-8.5,0);
        glVertex3d(-17,-11, 0);

 glEnd();


  glColor3f(0.29,0.51,0.4);
        glBegin(GL_TRIANGLES);
        glVertex3d(-22,-10,0);
        glVertex3d(-19.5,-7.5,0);
        glVertex3d(-17,-10, 0);

 glEnd();

    glColor3f(0.29,0.51,0.4);
        glBegin(GL_TRIANGLES);
        glVertex3d(-22,-9,0);
        glVertex3d(-19.5,-5.5,0);
        glVertex3d(-17,-9, 0);

 glEnd();


////////////////////////TREE Right////////////////////////////////////////////////

glColor3f(0.29,0.05,0.3); // tree right 1
        glBegin(GL_POLYGON);
        glVertex3d(20,-35,0);
        glVertex3d(20,-31,0);
        glVertex3d(19,-31, 0);
        glVertex3d(19,-35,0);

 glEnd();


glColor3f(0.29,0.51,0.4);
        glBegin(GL_TRIANGLES);
        glVertex3d(22,-31,0);
        glVertex3d(19.5,-28.5,0);
        glVertex3d(17,-31, 0);

 glEnd();


  glColor3f(0.29,0.51,0.4);
        glBegin(GL_TRIANGLES);
        glVertex3d(22,-30,0);
        glVertex3d(19.5,-27.5,0);
        glVertex3d(17,-30, 0);

 glEnd();

    glColor3f(0.29,0.51,0.4);
        glBegin(GL_TRIANGLES);
        glVertex3d(22,-29,0);
        glVertex3d(19.5,-25.5,0);
        glVertex3d(17,-29, 0);

 glEnd();



  glColor3f(0.29,0.05,0.3); ///////// tree right 2
          glBegin(GL_POLYGON);
        glVertex3d(20,-25,0);
        glVertex3d(20,-21,0);
        glVertex3d(19,-21, 0);
        glVertex3d(19,-25,0);

 glEnd();


glColor3f(0.29,0.51,0.4);
        glBegin(GL_TRIANGLES);
        glVertex3d(22,-21,0);
        glVertex3d(19.5,-18.5,0);
        glVertex3d(17,-21, 0);

 glEnd();


  glColor3f(0.29,0.51,0.4);
        glBegin(GL_TRIANGLES);
        glVertex3d(22,-20,0);
        glVertex3d(19.5,-17.5,0);
        glVertex3d(17,-20, 0);

 glEnd();

    glColor3f(0.29,0.51,0.4);
        glBegin(GL_TRIANGLES);
        glVertex3d(22,-19,0);
        glVertex3d(19.5,-15.5,0);
        glVertex3d(17,-19, 0);

 glEnd();



  glColor3f(0.29,0.05,0.3); ///////// tree right 3
          glBegin(GL_POLYGON);
        glVertex3d(20,-15,0);
        glVertex3d(20,-11,0);
        glVertex3d(19,-11, 0);
        glVertex3d(19,-15,0);

 glEnd();


glColor3f(0.29,0.51,0.4);
        glBegin(GL_TRIANGLES);
        glVertex3d(22,-11,0);
        glVertex3d(19.5,-8.5,0);
        glVertex3d(17,-11, 0);

 glEnd();


  glColor3f(0.29,0.51,0.4);
        glBegin(GL_TRIANGLES);
        glVertex3d(22,-10,0);
        glVertex3d(19.5,-7.5,0);
        glVertex3d(17,-10, 0);

 glEnd();

    glColor3f(0.29,0.51,0.4);
        glBegin(GL_TRIANGLES);
        glVertex3d(22,-9,0);
        glVertex3d(19.5,-5.5,0);
        glVertex3d(17,-9, 0);

 glEnd();




//////////////////////////birds//////////////////////////////////////////////






//////////////////////////Human left//////////////////////////////

glColor3f(0,0,1); // body
        glBegin(GL_POLYGON);
        glVertex3d(-28,-10,0);
        glVertex3d(-28,-7,0);
        glVertex3d(-26,-7, 0);
        glVertex3d(-26,-10,0);

glEnd();

glColor3f(0,0.3,0);
circle(0.7,0.7,-27,-6.4);


glColor3f( 0.3,0.88,1); // leg
        glBegin(GL_POLYGON);
        glVertex3d(-27.9,-10,0);
        glVertex3d(-27.8,-12,0);
        glVertex3d(-27.5,-12, 0);
        glVertex3d(-27,-10,0);

glEnd();


glColor3f( 0.3,0.88,1); // leg
        glBegin(GL_POLYGON);
        glVertex3d(-26.9,-10,0);
        glVertex3d(-26.6,-12,0);
        glVertex3d(-26.3,-12, 0);
        glVertex3d(-26.1,-10,0);

glEnd();

glColor3f(0.75,0.49,0.22); // hand
        glBegin(GL_POLYGON);
        glVertex3d(-28.4,-7,0);
        glVertex3d(-28.3,-5,0);
        glVertex3d(-28,-5, 0);
        glVertex3d(-27.8,-7,0);



glEnd();



////middle left

glColor3f( 0.83,1,0); // body
        glBegin(GL_POLYGON);
        glVertex3d(-28,-20,0);
        glVertex3d(-28,-17,0);
        glVertex3d(-26,-17, 0);
        glVertex3d(-26,-20,0);

glEnd();

glColor3f(0,0.3,0);
circle(0.7,0.7,-27,-16.4);


glColor3f( 0.4,0.4,1); // leg
        glBegin(GL_POLYGON);
        glVertex3d(-27.9,-20,0);
        glVertex3d(-27.8,-22,0);
        glVertex3d(-27.5,-22, 0);
        glVertex3d(-27,-20,0);

glEnd();


glColor3f( 0.4,0.4,1); // leg
        glBegin(GL_POLYGON);
        glVertex3d(-26.9,-20,0);
        glVertex3d(-26.6,-22,0);
        glVertex3d(-26.3,-22, 0);
        glVertex3d(-26.1,-20,0);

glEnd();



glColor3f(0.75,0.49,0.22); // hand
        glBegin(GL_POLYGON);
        glVertex3d(-28.4,-17,0);
        glVertex3d(-28.3,-15,0);
        glVertex3d(-28,-15, 0);
        glVertex3d(-27.8,-17,0);



glEnd();

 //down last human

glColor3f( 1,0.5,0.84); // body
        glBegin(GL_POLYGON);
        glVertex3d(-28,-30,0);
        glVertex3d(-28,-27,0);

        glVertex3d(-26,-27, 0);

        glVertex3d(-26,-30,0);

glEnd();

glColor3f(0,0.3,0);
circle(0.7,0.7,-27,-26.4);


glColor3f( 0.2,0.07,07); // leg
        glBegin(GL_POLYGON);
        glVertex3d(-27.9,-30,0);
        glVertex3d(-27.8,-32,0);
        glVertex3d(-27.5,-32, 0);
        glVertex3d(-27,-30,0);

glEnd();


glColor3f( 0.2,0.07,07); // leg
        glBegin(GL_POLYGON);
        glVertex3d(-26.9,-30,0);
        glVertex3d(-26.6,-32,0);
        glVertex3d(-26.3,-32, 0);
        glVertex3d(-26.1,-30,0);

glEnd();


////////////// left left /////////////////////


glColor3f(.8,0,0.27); // body
        glBegin(GL_POLYGON);
        glVertex3d(-38,-10,0);
        glVertex3d(-38,-7,0);
        glVertex3d(-36,-7, 0);
        glVertex3d(-36,-10,0);

glEnd();

glColor3f(0,0.3,0);
circle(0.7,0.7,-37,-6.4);


glColor3f(0.9,0,0.6); // leg
        glBegin(GL_POLYGON);
        glVertex3d(-37.9,-10,0);
        glVertex3d(-37.8,-12,0);
        glVertex3d(-37.5,-12, 0);
        glVertex3d(-37,-10,0);

glEnd();


glColor3f(0.9,0,0.6); // leg
        glBegin(GL_POLYGON);
        glVertex3d(-36.9,-10,0);
        glVertex3d(-36.6,-12,0);
        glVertex3d(-36.3,-12, 0);
        glVertex3d(-36.1,-10,0);

glEnd();



glColor3f(0.75,0.49,0.22); // hand
        glBegin(GL_POLYGON);
        glVertex3d(-38.4,-7,0);
        glVertex3d(-38.3,-5,0);
        glVertex3d(-38,-5, 0);
        glVertex3d(-37.8,-7,0);



glEnd();



//////////////////////////////////////////////////////////////////////////////////////////////






glColor3f(0,0,0);//middle balloon line  ///left left person
glBegin(GL_LINES);
glVertex2f(-38,ballon+38.4);
glVertex2f(-38.1,ballon + 32.5);
glEnd();


glColor3f(1,0.3,0); //middle belun
circle(0.5,1,-38, ballon+38.4);


glColor3f(0,0,0);//right balloon line
glBegin(GL_LINES);
glVertex2f(-37,ballon+38);
glVertex2f(-38.1,ballon + 32.5);
glEnd();


glColor3f(0,0,1);//left balloon
circle(0.5,1,-37,ballon+38);


glColor3f(0,0,0);//left balloon line
glBegin(GL_LINES);
glVertex2f(-39,ballon+38);
glVertex2f(-38.1,ballon+32.5);
glEnd();

glColor3f(1,1,0);
circle(0.5,1,-39,ballon+38);


/////////////////////ballon of left person/////////////////////

glColor3f(0,0,0);//middle balloon line
glBegin(GL_LINES);
glVertex2f(-28,ballon+38.4);
glVertex2f(-28.1,ballon + 32.5);
glEnd();


glColor3f(1,0.3,0); //middle belun
circle(0.5,1,-28, ballon+38.4);


glColor3f(0,0,0);//right balloon line
glBegin(GL_LINES);
glVertex2f(-27,ballon+38);
glVertex2f(-28.1,ballon + 32.5);
glEnd();


glColor3f(0.5,1,1);//left balloon
circle(0.5,1,-27,ballon+38);


glColor3f(0,0,0);//left balloon line
glBegin(GL_LINES);
glVertex2f(-29,ballon+38);
glVertex2f(-28.1,ballon+32.5);
glEnd();


glColor3f(1,1,0.9);
circle(0.5,1,-29,ballon+38);

glColor3f(0,0,0);//middle balloon line  ///right right person
glBegin(GL_LINES);
glVertex2f(38,ballon+38.4);
glVertex2f(38.1,ballon + 32.5);
glEnd();


glColor3f(1,0.3,0); //middle belun
circle(0.5,1,38, ballon+38.4);


glColor3f(0,0,0);//right balloon line
glBegin(GL_LINES);
glVertex2f(37,ballon+38);
glVertex2f(38.1,ballon + 32.5);
glEnd();


glColor3f(0,0,1);//left balloon
circle(0.5,1,37,ballon+38);


glColor3f(0,0,0);//left balloon line
glBegin(GL_LINES);
glVertex2f(39,ballon+38);
glVertex2f(38.1,ballon+32.5);
glEnd();

glColor3f(1,1,0);
circle(0.5,1,39,ballon+38);



//middle left person

glColor3f(0,0,0);

glBegin(GL_LINES);
glVertex2f(-28,ballon+28.4);
glVertex2f(-28.1,ballon + 22.5);
glEnd();


glColor3f(1,0.3,0); //middle belun
circle(0.5,1,-28, ballon+28.4);


glColor3f(0,0,0);//right balloon line
glBegin(GL_LINES);
glVertex2f(-27,ballon+28);
glVertex2f(-28.1,ballon + 22.5);
glEnd();


glColor3f(0,0,1);//left balloon
circle(0.5,1,-27,ballon+28);


glColor3f(0,0,0);//left balloon line
glBegin(GL_LINES);
glVertex2f(-29,ballon+28);
glVertex2f(-28.1,ballon+22.5);
glEnd();

glColor3f(1,1,0);
circle(0.5,1,-29,ballon+28);


////////////////////////////////////middle balloon line
//middle left person

glColor3f(0,0,0);

glBegin(GL_LINES);
glVertex2f(-38,ballon+28.4);
glVertex2f(-38.1,ballon + 22.5);
glEnd();


glColor3f(1,0.3,0); //middle belun
circle(0.5,1,-38, ballon+28.4);


glColor3f(0,0,0);//right balloon line
glBegin(GL_LINES);
glVertex2f(-37,ballon+28);
glVertex2f(-38.1,ballon + 22.5);
glEnd();


glColor3f(0,0,1);//left balloon
circle(0.5,1,-37,ballon+28);


glColor3f(0,0,0);//left balloon line
glBegin(GL_LINES);
glVertex2f(-39,ballon+28);
glVertex2f(-38.1,ballon+22.5);
glEnd();

glColor3f(1,1,0);
circle(0.5,1,-39,ballon+28);




/////////////////////ballon of right person/////////////////////

glColor3f(0,0,0);//middle balloon line
glBegin(GL_LINES);
glVertex2f(28,ballon+38.4);
glVertex2f(28.1,ballon + 32.5);
glEnd();


glColor3f(1,0.3,0); //middle belun
circle(0.5,1,28, ballon+38.4);


glColor3f(0,0,0);//right balloon line
glBegin(GL_LINES);
glVertex2f(27,ballon+38);
glVertex2f(28.1,ballon + 32.5);
glEnd();


glColor3f(0.5,1,1);//left balloon
circle(0.5,1,27,ballon+38);


glColor3f(0,0,0);//left balloon line
glBegin(GL_LINES);
glVertex2f(29,ballon+38);
glVertex2f(28.1,ballon+32.5);
glEnd();

glColor3f(1,1,0.9);
circle(0.5,1,29,ballon+38);

////////////////////////human body another ///////////////////////////////////////




////middle left left

glColor3f(0.9,0,1); // body
        glBegin(GL_POLYGON);
        glVertex3d(-38,-20,0);
        glVertex3d(-38,-17,0);
        glVertex3d(-36,-17, 0);
        glVertex3d(-36,-20,0);

glEnd();

glColor3f(0,0.3,0);
circle(0.7,0.7,-37,-16.4);


glColor3f(1,0.7,0.8); // leg
        glBegin(GL_POLYGON);
        glVertex3d(-37.9,-20,0);
        glVertex3d(-37.8,-22,0);
        glVertex3d(-37.5,-22, 0);
        glVertex3d(-37,-20,0);

glEnd();


glColor3f(1,0.7,0.8); // leg
        glBegin(GL_POLYGON);
        glVertex3d(-36.9,-20,0);
        glVertex3d(-36.6,-22,0);
        glVertex3d(-36.3,-22, 0);
        glVertex3d(-36.1,-20,0);

glEnd();



glColor3f(0.75,0.49,0.22); // hand
        glBegin(GL_POLYGON);
        glVertex3d(-38.4,-17,0);
        glVertex3d(-38.3,-15,0);
        glVertex3d(-38,-15, 0);
        glVertex3d(-37.8,-17,0);



glEnd();

/*glColor3f(0.9,0,1); // hand
        glBegin(GL_POLYGON);
        glVertex3d(-28.4,-17,0);
        glVertex3d(-28.3,-15,0);
        glVertex3d(-28,-15, 0);
        glVertex3d(-27.8,-17,0);



glEnd(); */

 //down last human

glColor3f( 0.2,0.73,1); // body
        glBegin(GL_POLYGON);
        glVertex3d(-38,-30,0);
        glVertex3d(-38,-27,0);
        glVertex3d(-36,-27, 0);
        glVertex3d(-36,-30,0);

glEnd();

glColor3f(0,0.3,0);
circle(0.7,0.7,-37,-26.4);


glColor3f( 0.5,0.4,1); // leg
        glBegin(GL_POLYGON);
        glVertex3d(-37.9,-30,0);
        glVertex3d(-37.8,-32,0);
        glVertex3d(-37.5,-32, 0);
        glVertex3d(-37,-30,0);

glEnd();


glColor3f( 0.5,0.4,1); // leg
        glBegin(GL_POLYGON);
        glVertex3d(-36.9,-30,0);
        glVertex3d(-36.6,-32,0);
        glVertex3d(-36.3,-32, 0);
        glVertex3d(-36.1,-30,0);

glEnd();


///////////////////////////////////Right side human////////////////////////////////////



glColor3f(1,0.7,0.95);// body
        glBegin(GL_POLYGON);
        glVertex3d(28,-10,0);
        glVertex3d(28,-7,0);
        glVertex3d(26,-7, 0);
        glVertex3d(26,-10,0);

glEnd();

glColor3f(0,0.3,0);
circle(0.7,0.7,27,-6.4);


glColor3f(1,0.95,0.9); // leg
        glBegin(GL_POLYGON);
        glVertex3d(27.9,-10,0);
        glVertex3d(27.8,-12,0);
        glVertex3d(27.5,-12, 0);
        glVertex3d(27,-10,0);

glEnd();


glColor3f(1,0.95,0.9); // leg
        glBegin(GL_POLYGON);
        glVertex3d(26.9,-10,0);
        glVertex3d(26.6,-12,0);
        glVertex3d(26.3,-12, 0);
        glVertex3d(26.1,-10,0);

glEnd();

glColor3f(0.75,0.49,0.22); // hand
        glBegin(GL_POLYGON);
        glVertex3d(28.4,-7,0);
        glVertex3d(28.3,-5,0);
        glVertex3d(28,-5, 0);
        glVertex3d(27.8,-7,0);



glEnd();



////middle left

glColor3f( 0.42,0.3,1); // body
        glBegin(GL_POLYGON);
        glVertex3d(28,-20,0);
        glVertex3d(28,-17,0);
        glVertex3d(26,-17, 0);
        glVertex3d(26,-20,0);

glEnd();

glColor3f(0,0.3,0);
circle(0.7,0.7,27,-16.4);


glColor3f(0.2,0.2,1); // leg
        glBegin(GL_POLYGON);
        glVertex3d(27.9,-20,0);
        glVertex3d(27.8,-22,0);
        glVertex3d(27.5,-22, 0);
        glVertex3d(27,-20,0);

glEnd();


glColor3f(0.2,0.2,1); // leg
        glBegin(GL_POLYGON);
        glVertex3d(26.9,-20,0);
        glVertex3d(26.6,-22,0);
        glVertex3d(26.3,-22, 0);
        glVertex3d(26.1,-20,0);

glEnd();




glColor3f(0.75,0.49,0.22); // hand
        glBegin(GL_POLYGON);
        glVertex3d(28.4,-17,0);
        glVertex3d(28.3,-15,0);
        glVertex3d(28,-15, 0);
        glVertex3d(27.8,-17,0);



glEnd();

 //down last human

glColor3f(0.5,0.2,1); // body
        glBegin(GL_POLYGON);
        glVertex3d(28,-30,0);
        glVertex3d(28,-27,0);
        glVertex3d(26,-27, 0);
        glVertex3d(26,-30,0);

glEnd();

glColor3f(0,0.3,0);
circle(0.7,0.7,27,-26.4);


glColor3f( 1,0.16,0.8); // leg
        glBegin(GL_POLYGON);
        glVertex3d(27.9,-30,0);
        glVertex3d(27.8,-32,0);
        glVertex3d(27.5,-32, 0);
        glVertex3d(27,-30,0);

glEnd();


glColor3f( 1,0.16,0.8); // leg
        glBegin(GL_POLYGON);
        glVertex3d(26.9,-30,0);
        glVertex3d(26.6,-32,0);
        glVertex3d(26.3,-32, 0);
        glVertex3d(26.1,-30,0);

glEnd();


////////////// right right /////////////////////


glColor3f(0,0.6,0.6); // body
        glBegin(GL_POLYGON);
        glVertex3d(38,-10,0);
        glVertex3d(38,-7,0);
        glVertex3d(36,-7, 0);
        glVertex3d(36,-10,0);

glEnd();

glColor3f(0,0.3,0);
circle(0.7,0.7,37,-6.4);


glColor3f( 0.1,0.7,1); // leg
        glBegin(GL_POLYGON);
        glVertex3d(37.9,-10,0);
        glVertex3d(37.8,-12,0);
        glVertex3d(37.5,-12, 0);
        glVertex3d(37,-10,0);

glEnd();


glColor3f( 0.1,0.7,1); // leg
        glBegin(GL_POLYGON);
        glVertex3d(36.9,-10,0);
        glVertex3d(36.6,-12,0);
        glVertex3d(36.3,-12, 0);
        glVertex3d(36.1,-10,0);

glEnd();

glColor3f(0.75,0.49,0.22); // hand
        glBegin(GL_POLYGON);
        glVertex3d(38.4,-7,0);
        glVertex3d(38.3,-5,0);
        glVertex3d(38,-5, 0);
        glVertex3d(37.8,-7,0);



glEnd();



////middle right right

glColor3f( 1,0.7,0.1); // body
        glBegin(GL_POLYGON);
        glVertex3d(38,-20,0);
        glVertex3d(38,-17,0);
        glVertex3d(36,-17, 0);
        glVertex3d(36,-20,0);

glEnd();

glColor3f(0,0.3,0);
circle(0.7,0.7,37,-16.4);


glColor3f( 0.25,0.5,0); // leg
        glBegin(GL_POLYGON);
        glVertex3d(37.9,-20,0);
        glVertex3d(37.8,-22,0);
        glVertex3d(37.5,-22, 0);
        glVertex3d(37,-20,0);

glEnd();


glColor3f( 0.25,0.5,0); // leg
        glBegin(GL_POLYGON);
        glVertex3d(36.9,-20,0);
        glVertex3d(36.6,-22,0);
        glVertex3d(36.3,-22, 0);
        glVertex3d(36.1,-20,0);

glEnd();


glColor3f(0.75,0.49,0.22); // hand
        glBegin(GL_POLYGON);
        glVertex3d(38.4,-17,0);
        glVertex3d(38.3,-15,0);
        glVertex3d(38,-15, 0);
        glVertex3d(37.8,-17,0);



glEnd();

/*glColor3f(0.9,0,1); // hand
        glBegin(GL_POLYGON);
        glVertex3d(-28.4,-17,0);
        glVertex3d(-28.3,-15,0);
        glVertex3d(-28,-15, 0);
        glVertex3d(-27.8,-17,0);



glEnd(); */

 //down last human

glColor3f( 1,0.5,0.67); // body
        glBegin(GL_POLYGON);
        glVertex3d(38,-30,0);
        glVertex3d(38,-27,0);
        glVertex3d(36,-27, 0);
        glVertex3d(36,-30,0);

glEnd();

glColor3f(0,0.3,0);
circle(0.7,0.7,37,-26.4);


glColor3f( 1,0.8,0.84); // leg
        glBegin(GL_POLYGON);
        glVertex3d(37.9,-30,0);
        glVertex3d(37.8,-32,0);
        glVertex3d(37.5,-32, 0);
        glVertex3d(37,-30,0);

glEnd();


glColor3f( 1,0.8,0.84); // leg
        glBegin(GL_POLYGON);
        glVertex3d(36.9,-30,0);
        glVertex3d(36.6,-32,0);
        glVertex3d(36.3,-32, 0);
        glVertex3d(36.1,-30,0);

glEnd();


////////////////////////////////////middle balloon line
//middle Right person

glColor3f(0,0,0);

glBegin(GL_LINES);
glVertex2f(38,ballon+28.4);
glVertex2f(38.1,ballon + 22.5);
glEnd();


glColor3f(1,0.3,0); //middle belun
circle(0.5,1,38, ballon+28.4);


glColor3f(0,0,0);//right balloon line
glBegin(GL_LINES);
glVertex2f(37,ballon+28);
glVertex2f(38.1,ballon + 22.5);
glEnd();


glColor3f(0,0,1);//left balloon
circle(0.5,1,37,ballon+28);


glColor3f(0,0,0);//left balloon line
glBegin(GL_LINES);
glVertex2f(39,ballon+28);
glVertex2f(38.1,ballon+22.5);
glEnd();

glColor3f(1,1,0);
circle(0.5,1,39,ballon+28);



//middle left person

glColor3f(0,0,0);

glBegin(GL_LINES);
glVertex2f(28,ballon+28.4);
glVertex2f(28.1,ballon + 22.5);
glEnd();


glColor3f(1,0.3,0); //middle belun
circle(0.5,1,28, ballon+28.4);


glColor3f(0,0,0);//right balloon line
glBegin(GL_LINES);
glVertex2f(27,ballon+28);
glVertex2f(28.1,ballon + 22.5);
glEnd();


glColor3f(0,0,1);//left balloon
circle(0.5,1,27,ballon+28);


glColor3f(0,0,0);//left balloon line
glBegin(GL_LINES);
glVertex2f(29,ballon+28);
glVertex2f(28.1,ballon+22.5);
glEnd();

glColor3f(1,1,0);
circle(0.5,1,29,ballon+28);


///////////////////////Grasss///////////////////////////////////////////////////////////////

        glBegin(GL_TRIANGLES);
        glColor3f(0.5,0.86,0.11);
        glVertex3d(-47, -40, 0);
        glColor3f(0.75,0.95,0.14);

        glVertex3d(-50,-38,0);
        glColor3f(0.5,0.86,0.11);
        glVertex3d(-43,-40,0.14);
        glEnd();


           glBegin(GL_TRIANGLES);
        glColor3f(0.5,0.86,0.11);
        glVertex3d(-47, -40, 0);
        glColor3f(0.75,0.95,0.14);

        glVertex3d(-48,-36,0);
        glColor3f(0.5,0.86,0.11);
        glVertex3d(-43,-40,0.14);
        glEnd();


   glBegin(GL_TRIANGLES);
        glColor3f(0.5,0.86,0.11);
        glVertex3d(-47, -40, 0);
        glColor3f(0.75,0.95,0.14);

        glVertex3d(-45,-35,0);
        glColor3f(0.5,0.86,0.11);
        glVertex3d(-43,-40,0.14);
        glEnd();


   glBegin(GL_TRIANGLES);
        glColor3f(0.5,0.86,0.11);
        glVertex3d(-47, -40, 0);
        glColor3f(0.75,0.95,0.14);

        glVertex3d(-42,-36,0);
        glColor3f(0.5,0.86,0.11);
        glVertex3d(-43,-40,0.14);
        glEnd();


           glBegin(GL_TRIANGLES);
        glColor3f(0.5,0.86,0.11);
        glVertex3d(-47, -40, 0);
        glColor3f(0.75,0.95,0.14);

        glVertex3d(-40,-38,0);
        glColor3f(0.5,0.86,0.11);
        glVertex3d(-43,-40,0.14);
        glEnd();

////grass from left 2

    glBegin(GL_TRIANGLES);
        glColor3f(0.5,0.86,0.11);
        glVertex3d(-47+10, -40, 0);
        glColor3f(0.75,0.95,0.14);

        glVertex3d(-50+10,-38,0);
        glColor3f(0.5,0.86,0.11);
        glVertex3d(-43+10,-40,0.14);
        glEnd();


           glBegin(GL_TRIANGLES);
        glColor3f(0.5,0.86,0.11);
        glVertex3d(-47+10, -40, 0);
        glColor3f(0.75,0.95,0.14);

        glVertex3d(-48+10,-36,0);
        glColor3f(0.5,0.86,0.11);
        glVertex3d(-43+10,-40,0.14);
        glEnd();


   glBegin(GL_TRIANGLES);
        glColor3f(0.5,0.86,0.11);
        glVertex3d(-47+10, -40, 0);
        glColor3f(0.75,0.95,0.14);

        glVertex3d(-45+10,-35,0);
        glColor3f(0.5,0.86,0.11);
        glVertex3d(-43+10,-40,0.14);
        glEnd();


   glBegin(GL_TRIANGLES);
        glColor3f(0.5,0.86,0.11);
        glVertex3d(-47+10, -40, 0);
        glColor3f(0.75,0.95,0.14);

        glVertex3d(-42+10,-36,0);
        glColor3f(0.5,0.86,0.11);
        glVertex3d(-43+10,-40,0.14);
        glEnd();


           glBegin(GL_TRIANGLES);
        glColor3f(0.5,0.86,0.11);
        glVertex3d(-47+10, -40, 0);
        glColor3f(0.75,0.95,0.14);

        glVertex3d(-40+10,-38,0);
        glColor3f(0.5,0.86,0.11);
        glVertex3d(-43+10,-40,0.14);
        glEnd();

//grass from left 3

    glBegin(GL_TRIANGLES);
        glColor3f(0.5,0.86,0.11);
        glVertex3d(-47+20, -40, 0);
        glColor3f(0.75,0.95,0.14);

        glVertex3d(-50+20,-38,0);
        glColor3f(0.5,0.86,0.11);
        glVertex3d(-43+20,-40,0.14);
        glEnd();


           glBegin(GL_TRIANGLES);
        glColor3f(0.5,0.86,0.11);
        glVertex3d(-47+20, -40, 0);
        glColor3f(0.75,0.95,0.14);

        glVertex3d(-48+20,-36,0);
        glColor3f(0.5,0.86,0.11);
        glVertex3d(-43+20,-40,0.14);
        glEnd();


   glBegin(GL_TRIANGLES);
        glColor3f(0.5,0.86,0.11);
        glVertex3d(-47+20, -40, 0);
        glColor3f(0.75,0.95,0.14);

        glVertex3d(-45+20,-35,0);
        glColor3f(0.5,0.86,0.11);
        glVertex3d(-43+20,-40,0.14);
        glEnd();


   glBegin(GL_TRIANGLES);
        glColor3f(0.5,0.86,0.11);
        glVertex3d(-47+20, -40, 0);
        glColor3f(0.75,0.95,0.14);

        glVertex3d(-42+20,-36,0);
        glColor3f(0.5,0.86,0.11);
        glVertex3d(-43+20,-40,0.14);
        glEnd();


           glBegin(GL_TRIANGLES);
        glColor3f(0.5,0.86,0.11);
        glVertex3d(-47+20, -40, 0);
        glColor3f(0.75,0.95,0.14);

        glVertex3d(-40+20,-38,0);
        glColor3f(0.5,0.86,0.11);
        glVertex3d(-43+20,-40,0.14);
        glEnd();

    //grass from left 4

    glBegin(GL_TRIANGLES);
        glColor3f(0.5,0.86,0.11);
        glVertex3d(-47+30, -40, 0);
        glColor3f(0.75,0.95,0.14);

        glVertex3d(-50+30,-38,0);
        glColor3f(0.5,0.86,0.11);
        glVertex3d(-43+30,-40,0.14);
        glEnd();


           glBegin(GL_TRIANGLES);
        glColor3f(0.5,0.86,0.11);
        glVertex3d(-47+30, -40, 0);
        glColor3f(0.75,0.95,0.14);

        glVertex3d(-48+30,-36,0);
        glColor3f(0.5,0.86,0.11);
        glVertex3d(-43+30,-40,0.14);
        glEnd();


   glBegin(GL_TRIANGLES);
        glColor3f(0.5,0.86,0.11);
        glVertex3d(-47+30, -40, 0);
        glColor3f(0.75,0.95,0.14);

        glVertex3d(-45+30,-35,0);
        glColor3f(0.5,0.86,0.11);
        glVertex3d(-43+30,-40,0.14);
        glEnd();


   glBegin(GL_TRIANGLES);
        glColor3f(0.5,0.86,0.11);
        glVertex3d(-47+30, -40, 0);
        glColor3f(0.75,0.95,0.14);

        glVertex3d(-42+30,-36,0);
        glColor3f(0.5,0.86,0.11);
        glVertex3d(-43+30,-40,0.14);
        glEnd();


           glBegin(GL_TRIANGLES);
        glColor3f(0.5,0.86,0.11);
        glVertex3d(-47+30, -40, 0);
        glColor3f(0.75,0.95,0.14);

        glVertex3d(-40+30,-38,0);
        glColor3f(0.5,0.86,0.11);
        glVertex3d(-43+30,-40,0.14);
        glEnd();

//////grass right//////////////////////////

      glBegin(GL_TRIANGLES);
        glColor3f(0.5,0.86,0.11);
        glVertex3d(47, -40, 0);
        glColor3f(0.75,0.95,0.14);

        glVertex3d(50,-38,0);
        glColor3f(0.5,0.86,0.11);
        glVertex3d(43,-40,0.14);
        glEnd();


           glBegin(GL_TRIANGLES);
        glColor3f(0.5,0.86,0.11);
        glVertex3d(47, -40, 0);
        glColor3f(0.75,0.95,0.14);

        glVertex3d(48,-36,0);
        glColor3f(0.5,0.86,0.11);
        glVertex3d(43,-40,0.14);
        glEnd();


   glBegin(GL_TRIANGLES);
        glColor3f(0.5,0.86,0.11);
        glVertex3d(47, -40, 0);
        glColor3f(0.75,0.95,0.14);

        glVertex3d(45,-35,0);
        glColor3f(0.5,0.86,0.11);
        glVertex3d(43,-40,0.14);
        glEnd();


   glBegin(GL_TRIANGLES);
        glColor3f(0.5,0.86,0.11);
        glVertex3d(47, -40, 0);
        glColor3f(0.75,0.95,0.14);

        glVertex3d(42,-36,0);
        glColor3f(0.5,0.86,0.11);
        glVertex3d(43,-40,0.14);
        glEnd();


           glBegin(GL_TRIANGLES);
        glColor3f(0.5,0.86,0.11);
        glVertex3d(47, -40, 0);
        glColor3f(0.75,0.95,0.14);

        glVertex3d(40,-38,0);
        glColor3f(0.5,0.86,0.11);
        glVertex3d(43,-40,0.14);
        glEnd();

////grass from left 2

    glBegin(GL_TRIANGLES);
        glColor3f(0.5,0.86,0.11);
        glVertex3d(37, -40, 0);
        glColor3f(0.75,0.95,0.14);

        glVertex3d(40,-38,0);
        glColor3f(0.5,0.86,0.11);
        glVertex3d(33,-40,0.14);
        glEnd();


           glBegin(GL_TRIANGLES);
        glColor3f(0.5,0.86,0.11);
        glVertex3d(37, -40, 0);
        glColor3f(0.75,0.95,0.14);

        glVertex3d(38,-36,0);
        glColor3f(0.5,0.86,0.11);
        glVertex3d(33,-40,0.14);
        glEnd();


   glBegin(GL_TRIANGLES);
        glColor3f(0.5,0.86,0.11);
        glVertex3d(37, -40, 0);
        glColor3f(0.75,0.95,0.14);

        glVertex3d(35,-35,0);
        glColor3f(0.5,0.86,0.11);
        glVertex3d(33,-40,0.14);
        glEnd();


   glBegin(GL_TRIANGLES);
        glColor3f(0.5,0.86,0.11);
        glVertex3d(37, -40, 0);
        glColor3f(0.75,0.95,0.14);

        glVertex3d(32,-36,0);
        glColor3f(0.5,0.86,0.11);
        glVertex3d(33,-40,0.14);
        glEnd();


           glBegin(GL_TRIANGLES);
        glColor3f(0.5,0.86,0.11);
        glVertex3d(37, -40, 0);
        glColor3f(0.75,0.95,0.14);

        glVertex3d(30,-38,0);
        glColor3f(0.5,0.86,0.11);
        glVertex3d(33,-40,0.14);
        glEnd();

//grass from left 3

    glBegin(GL_TRIANGLES);
        glColor3f(0.5,0.86,0.11);
        glVertex3d(27, -40, 0);
        glColor3f(0.75,0.95,0.14);

        glVertex3d(30,-38,0);
        glColor3f(0.5,0.86,0.11);
        glVertex3d(23,-40,0.14);
        glEnd();


           glBegin(GL_TRIANGLES);
        glColor3f(0.5,0.86,0.11);
        glVertex3d(27, -40, 0);
        glColor3f(0.75,0.95,0.14);

        glVertex3d(28,-36,0);
        glColor3f(0.5,0.86,0.11);
        glVertex3d(23,-40,0.14);
        glEnd();


   glBegin(GL_TRIANGLES);
        glColor3f(0.5,0.86,0.11);
        glVertex3d(27, -40, 0);
        glColor3f(0.75,0.95,0.14);

        glVertex3d(25,-35,0);
        glColor3f(0.5,0.86,0.11);
        glVertex3d(23,-40,0.14);
        glEnd();


   glBegin(GL_TRIANGLES);
        glColor3f(0.5,0.86,0.11);
        glVertex3d(27, -40, 0);
        glColor3f(0.75,0.95,0.14);

        glVertex3d(22,-36,0);
        glColor3f(0.5,0.86,0.11);
        glVertex3d(23,-40,0.14);
        glEnd();


           glBegin(GL_TRIANGLES);
        glColor3f(0.5,0.86,0.11);
        glVertex3d(27, -40, 0);
        glColor3f(0.75,0.95,0.14);

        glVertex3d(20,-38,0);
        glColor3f(0.5,0.86,0.11);
        glVertex3d(23,-40,0.14);
        glEnd();

    //grass from left 4

    glBegin(GL_TRIANGLES);
        glColor3f(0.5,0.86,0.11);
        glVertex3d(17, -40, 0);
        glColor3f(0.75,0.95,0.14);

        glVertex3d(20,-38,0);
        glColor3f(0.5,0.86,0.11);
        glVertex3d(13,-40,0.14);
        glEnd();


           glBegin(GL_TRIANGLES);
        glColor3f(0.5,0.86,0.11);
        glVertex3d(17, -40, 0);
        glColor3f(0.75,0.95,0.14);

        glVertex3d(18,-36,0);
        glColor3f(0.5,0.86,0.11);
        glVertex3d(13,-40,0.14);
        glEnd();


   glBegin(GL_TRIANGLES);
        glColor3f(0.5,0.86,0.11);
        glVertex3d(17, -40, 0);
        glColor3f(0.75,0.95,0.14);

        glVertex3d(15,-35,0);
        glColor3f(0.5,0.86,0.11);
        glVertex3d(13,-40,0.14);
        glEnd();


   glBegin(GL_TRIANGLES);
        glColor3f(0.5,0.86,0.11);
        glVertex3d(17, -40, 0);
        glColor3f(0.75,0.95,0.14);

        glVertex3d(12,-36,0);
        glColor3f(0.5,0.86,0.11);
        glVertex3d(13,-40,0.14);
        glEnd();


           glBegin(GL_TRIANGLES);
        glColor3f(0.5,0.86,0.11);
        glVertex3d(17, -40, 0);
        glColor3f(0.75,0.95,0.14);

        glVertex3d(10,-38,0);
        glColor3f(0.5,0.86,0.11);
        glVertex3d(13,-40,0.14);
        glEnd();

     //kite
     kites();


    glFlush();
    glutPostRedisplay();// To redraw the object in the display
}

int main()
{
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(1200, 1000);
    glutInitWindowPosition(0,0);
    glutCreateWindow("Project Tajmahal");
    init();
    glutDisplayFunc(myDisplay);
    glutMainLoop();
    return 0;
}
