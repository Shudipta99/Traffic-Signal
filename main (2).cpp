#include<windows.h>

#include<GL/gl.h>

#include<GL/glu.h>

#include<GL/glut.h>
float x_position = 0.0;

void moon()
{
     //Stars

    glPushMatrix();
    glTranslatef( -7.8, 7.8,0);
   glColor3f(0.80,0.77,0.82);

   glutSolidSphere(0.08,70,20);

    glPopMatrix();
    glEnd();
    glPushMatrix();
    glTranslatef( 7.0, 6.0,0);
   glColor3f(0.80,0.77,0.82);

   glutSolidSphere(0.08,70,20);

    glPopMatrix();
    glEnd();
    glPushMatrix();
    glTranslatef( -5.0, 9.0,0);
   glColor3f(0.80,0.77,0.82);

   glutSolidSphere(0.08,70,20);

    glPopMatrix();
    glEnd();
     glPushMatrix();
    glTranslatef( -2.0, 6.0,0);
   glColor3f(0.80,0.77,0.82);

   glutSolidSphere(0.08,70,20);

    glPopMatrix();
    glEnd();
    glPushMatrix();
    glTranslatef( 2.0, 7.8,0);
   glColor3f(0.80,0.77,0.82);

   glutSolidSphere(0.08,70,20);

    glPopMatrix();
    glEnd();

    glPushMatrix();
    glTranslatef( 5.0, 9.2,0);
   glColor3f(0.80,0.77,0.82);

   glutSolidSphere(0.08,70,20);

    glPopMatrix();
    glEnd();

    glPushMatrix();
    glTranslatef( -11.0, 5.0,0);
   glColor3f(0.80,0.77,0.82);

   glutSolidSphere(0.08,70,20);

    glPopMatrix();
    glEnd();

     glPushMatrix();
    glTranslatef( -7.0, 5.4,0);
   glColor3f(0.80,0.77,0.82);

   glutSolidSphere(0.08,70,20);

    glPopMatrix();
    glEnd();
    glPushMatrix();
    glTranslatef( 4.0, 5.4,0);
   glColor3f(0.80,0.77,0.82);

   glutSolidSphere(0.08,70,20);

    glPopMatrix();
    glEnd();

    glPushMatrix();
    glTranslatef( -1.4, 8.5,0);
   glColor3f(0.80,0.77,0.82);

   glutSolidSphere(0.08,70,20);

    glPopMatrix();
    glEnd();

    glPushMatrix();
    glTranslatef( 1.0, 4.5,0);
   glColor3f(0.80,0.77,0.82);

   glutSolidSphere(0.07,70,20);

    glPopMatrix();
    glEnd();

    glPushMatrix();
    glTranslatef( -4.5, 4.5,0);
   glColor3f(0.80,0.77,0.82);

   glutSolidSphere(0.07,70,20);

    glPopMatrix();
    glEnd();

    glPushMatrix();
    glTranslatef( -9.5, 4.0,0);
   glColor3f(0.80,0.77,0.82);

   glutSolidSphere(0.07,70,20);

    glPopMatrix();
    glEnd();

    //Star ends



}









void circle()
{

      //MOON STARTS

      glPushMatrix();
    glTranslatef( -8.0, 8.0,0);
   glColor3f(0.92,0.92,0.92);

   glutSolidSphere(1.4,50,20);

    glPopMatrix();
    glEnd();

    glPushMatrix();
    glTranslatef( -8.5, 8.8,0);
   glColor3f(0.81,0.81,0.81);

   glutSolidSphere(0.4,50,20);

    glPopMatrix();
    glEnd();

    glPushMatrix();
    glTranslatef( -7.8, 7.0,0);
   glColor3f(0.81,0.81,0.81);

   glutSolidSphere(0.2,50,20);

    glPopMatrix();
    glEnd();

     glPushMatrix();
    glTranslatef( -7.0, 8.0,0);
   glColor3f(0.81,0.81,0.81);


    glPopMatrix();
    glEnd();
    glPushMatrix();
    glTranslatef( -9.0, 7.5,0);
   glColor3f(0.81,0.81,0.81);

   glutSolidSphere(0.3,50,20);

    glPopMatrix();
    glEnd();

        //MOON ENDS



     glPushMatrix();
    glTranslatef( x_position+3.0, -7.8,0);
   glColor3f(0.0,0.0,0.0);


    glutSolidSphere(0.4,50,20);

    glPopMatrix();
    glEnd();

    glPushMatrix();
    glTranslatef( x_position+3.0, -7.8,0);
   glColor3f(1.0,1.0,1.0);


    glutSolidSphere(0.2,50,20);

    glPopMatrix();
    glEnd();

    glPushMatrix();
    glTranslatef( x_position+6.0, -7.8,0);
   glColor3f(0.0,0.0,0.0);


    glutSolidSphere(0.4,50,20);

    glPopMatrix();
    glEnd();

    glPushMatrix();
    glTranslatef( x_position+6.0, -7.8,0);
   glColor3f(1.0,1.0,1.0);


    glutSolidSphere(0.2,50,20);

    glPopMatrix();
    glEnd();


}

void car(float x, float y){

    glPushMatrix();
    glTranslatef(x, y, 0);

     glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,1.0);

    glVertex3f(x_position+2.0 ,-7.0,  0.0);

    glVertex3f(x_position+7.0,-7.0,  0.0);

    glVertex3f(x_position+7.0,-7.8,  0.0);

    glVertex3f(x_position+2.0, -7.8,  0.0);

    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,1.0);

    glVertex3f(x_position+2.5 ,-7.0,  0.0);

    glVertex3f(x_position+3.0,-6.3,  0.0);

    glVertex3f(x_position+6.0,-6.3,  0.0);

    glVertex3f(x_position+6.5, -7.0,  0.0);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.41,0.41,0.41);

    glVertex3f(x_position+3.0 ,-6.6,  0.0);

    glVertex3f(x_position+4.0,-6.6,  0.0);

    glVertex3f(x_position+4.0,-7.0,  0.0);

    glVertex3f(x_position+3.0, -7.0,  0.0);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.41,0.41,0.41);

    glVertex3f(x_position+5.0 ,-6.6,  0.0);

    glVertex3f(x_position+6.0,-6.6,  0.0);

    glVertex3f(x_position+6.0,-7.0,  0.0);

    glVertex3f(x_position+5.0, -7.0,  0.0);

    glEnd();

    //glPushMatrix();
    circle();
    glPopMatrix();
}

void display();

void reshape(int,int);

void timer(int);

void init()

{

    glClearColor(0.0,0.0,0.0,1.0);

}

int main(int argc, char **argv)

{

    glutInit(&argc,argv);
   //8 glutInitDisplayMode(GLUT_RGB || GLUT_DOUBLE);

    glutInitWindowPosition(200,100);

    glutInitWindowSize(500,500);

    glutCreateWindow("Traffic signal");

    glutDisplayFunc(display);

    glutReshapeFunc(reshape);

    glutTimerFunc(1000,timer,0);

    init();

    glutMainLoop();

}



int state=1;

float red_signal_speed = 0;
float yellow_signal_speed = 0.05;
float green_signal_speed = 0.2;

float x_position_1 = 5;
float x_position_2 = 5;
float x_position_3 = 5;

int road_1_state = 1;
float road_1_green = 0;
float road_1_yellow = 0;
float road_1_red = 1;

void display()

{

    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

      glBegin(GL_POLYGON);//background
      glColor3f(0.13,0.03,0.23);



    glVertex3f(-10.0 ,-10.0,  0.0);
    glColor3f(0.0,0.0,0.0);

    glVertex3f(10.0,-10.0,  0.0);
    glColor3f(0.13,0.03,0.23);
    glVertex3f(10.0,10.0,  0.0);
    glColor3f(0.0,0.0,0.0);

    glVertex3f(-10.0, 10.0,  0.0);

    glEnd();




      glBegin(GL_POLYGON);//road1
    glColor3f(0.39,0.40,0.38);

    glVertex3f(-10.0 ,-9.0,  0.0);

    glVertex3f(10.0,-9.0,  0.0);

    glVertex3f(10.0,-5.0,  0.0);

    glVertex3f(-10.0, -5.0,  0.0);

    glEnd();
    glBegin(GL_POLYGON);//stripe
    glColor3f(1.0,1.0,1.0);

    glVertex3f(10.0 ,-7.0,  0.0);
    glVertex3f(9.0,-7.0,  0.0);
    glVertex3f(9.0,-7.2,  0.0);
    glVertex3f(10.0, -7.2,  0.0);
    glEnd();

    glBegin(GL_POLYGON);//stripe
    glColor3f(1.0,1.0,1.0);

    glVertex3f(8.0 ,-7.0,  0.0);

    glVertex3f(7.0,-7.0,  0.0);

    glVertex3f(7.0,-7.2,  0.0);

    glVertex3f(8.0, -7.2,  0.0);

    glEnd();
    glBegin(GL_POLYGON);//stripe
    glColor3f(1.0,1.0,1.0);

    glVertex3f(6.0 ,-7.0,  0.0);

    glVertex3f(5.0,-7.0,  0.0);

    glVertex3f(5.0,-7.2,  0.0);

    glVertex3f(6.0, -7.2,  0.0);

    glEnd();
    glBegin(GL_POLYGON);//stripe
    glColor3f(1.0,1.0,1.0);

    glVertex3f(4.0 ,-7.0,  0.0);

    glVertex3f(3.0,-7.0,  0.0);

    glVertex3f(3.0,-7.2,  0.0);

    glVertex3f(4.0, -7.2,  0.0);

    glEnd();
    glBegin(GL_POLYGON);//stripe
    glColor3f(1.0,1.0,1.0);

    glVertex3f(2.0 ,-7.0,  0.0);

    glVertex3f(1.0,-7.0,  0.0);

    glVertex3f(1.0,-7.2,  0.0);

    glVertex3f(2.0, -7.2,  0.0);

    glEnd();
    glBegin(GL_POLYGON);//stripe
    glColor3f(1.0,1.0,1.0);

    glVertex3f(0.0 ,-7.0,  0.0);

    glVertex3f(-1.0,-7.0,  0.0);

    glVertex3f(-1.0,-7.2,  0.0);

    glVertex3f(0.0, -7.2,  0.0);

    glEnd();
    glBegin(GL_POLYGON);//stripe
    glColor3f(1.0,1.0,1.0);

    glVertex3f(-2.0 ,-7.0,  0.0);

    glVertex3f(-3.0,-7.0,  0.0);

    glVertex3f(-3.0,-7.2,  0.0);

    glVertex3f(-2.0, -7.2,  0.0);

    glEnd();
    glBegin(GL_POLYGON);//stripe
    glColor3f(1.0,1.0,1.0);

    glVertex3f(-4.0 ,-7.0,  0.0);

    glVertex3f(-5.0,-7.0,  0.0);

    glVertex3f(-5.0,-7.2,  0.0);

    glVertex3f(-4.0, -7.2,  0.0);

    glEnd();
    glBegin(GL_POLYGON);//stripe
    glColor3f(1.0,1.0,1.0);

    glVertex3f(-6.0 ,-7.0,  0.0);

    glVertex3f(-7.0,-7.0,  0.0);

    glVertex3f(-7.0,-7.2,  0.0);

    glVertex3f(-6.0, -7.2,  0.0);

    glEnd();
    glBegin(GL_POLYGON);//stripe
    glColor3f(1.0,1.0,1.0);

    glVertex3f(-8.0 ,-7.0,  0.0);

    glVertex3f(-9.0,-7.0,  0.0);

    glVertex3f(-9.0,-7.2,  0.0);

    glVertex3f(-8.0, -7.2,  0.0);

    glEnd();

    car(x_position_1, 0);




    glBegin(GL_POLYGON);//signal1
    glColor3f(0.0,0.0,0.0);

    glVertex3f(-9.0 ,-8.8,  0.0);

    glVertex3f(-9.9,-8.8,  0.0);

    glVertex3f(-9.9,-9.0,  0.0);

    glVertex3f(-9.0, -9.0,  0.0);

    glEnd();

    glBegin(GL_POLYGON);//signal1
    glColor3f(0.0,0.0,0.0);

    glVertex3f(-9.3 ,-8.8,  0.0);

    glVertex3f(-9.6,-8.8,  0.0);

    glVertex3f(-9.6,-5.2,  0.0);

    glVertex3f(-9.3, -5.2,  0.0);

    glEnd();

    glBegin(GL_POLYGON);//signal1
    glColor3f(0.0,0.0,0.0);

    glVertex3f(-9.9 ,-5.2,  0.0);

    glVertex3f(-9.0,-5.2,  0.0);

    glVertex3f(-9.0,-8.0,  0.0);

    glVertex3f(-9.9, -8.0,  0.0);

    glEnd();

    glBegin(GL_POLYGON);//red
    if(road_1_red==1){
       glColor3f(1.0,0.0,0.0);
    }
    else{
        glColor3f(0.41,0.41,0.41);
    }

    glVertex3f(-9.8 ,-5.5,  0.0);

    glVertex3f(-9.2,-5.5,  0.0);

    glVertex3f(-9.2,-5.7,  0.0);

    glVertex3f(-9.8, -5.7,  0.0);

    glEnd();

    glBegin(GL_POLYGON);//2nd light // yellow

    if(road_1_yellow==1){
       glColor3f(1.0,1.0,0.0);
    }
    else{
        glColor3f(0.41,0.41,0.41);
    }

    glVertex3f(-9.8 ,-6.1,  0.0);

    glVertex3f(-9.2,-6.1,  0.0);

    glVertex3f(-9.2,-6.3,  0.0);

    glVertex3f(-9.8, -6.3,  0.0);

    glEnd();

    glBegin(GL_POLYGON);//3rd light // green
    if(road_1_green==1){
        glColor3f(0.0,1.0,0.0);
    }
    else{
        glColor3f(0.41,0.41,0.41);
    }


    glVertex3f(-9.8 ,-6.7,  0.0);

    glVertex3f(-9.2,-6.7,  0.0);

    glVertex3f(-9.2,-6.9,  0.0);

    glVertex3f(-9.8, -6.9,  0.0);

    glEnd();

     glPushMatrix();
    glTranslatef(2,0,0);
    moon();
    glPopMatrix();


    //LAMPPOST 1
     glBegin(GL_POLYGON);//stand
    glColor3f(0.0,0.0,0.0);

    glVertex3f(-8.0 ,-5.0,  0.0);

    glVertex3f(-8.2,-5.0,  0.0);

    glVertex3f(-8.2,-1.0,  0.0);

    glVertex3f(-8.0, -1.0,  0.0);

    glEnd();

    glBegin(GL_POLYGON);//light

     glColor3f(0.92,0.74,0.23);



    glVertex3f(-7.8 ,-1.0,  0.0);

    glVertex3f(-8.4,-1.0,  0.0);
    glVertex3f(-8.6,-0.5,  0.0);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(-7.6, -0.5,  0.0);

    glEnd();

    //LAMPPOST 2
     glBegin(GL_POLYGON);//stand
    glColor3f(0.0,0.0,0.0);

    glVertex3f(0.0 ,-5.0,  0.0);

    glVertex3f(0.2,-5.0,  0.0);

    glVertex3f(0.2,-1.0,  0.0);

    glVertex3f(0.0, -1.0,  0.0);

    glEnd();

    glBegin(GL_POLYGON);//light

     glColor3f(0.92,0.74,0.23);



    glVertex3f(0.4 ,-1.0,  0.0);

    glVertex3f(-0.2,-1.0,  0.0);
    glVertex3f(-0.4,-0.5,  0.0);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(0.6, -0.5,  0.0);

    glEnd();

    //LAMPPOST 3
     glBegin(GL_POLYGON);//stand
    glColor3f(0.0,0.0,0.0);

    glVertex3f(8.0 ,-5.0,  0.0);

    glVertex3f(8.2,-5.0,  0.0);

    glVertex3f(8.2,-1.0,  0.0);

    glVertex3f(8.0, -1.0,  0.0);

    glEnd();

    glBegin(GL_POLYGON);//light

     glColor3f(0.92,0.74,0.23);



    glVertex3f(7.8 ,-1.0,  0.0);

    glVertex3f(8.4,-1.0,  0.0);
    glVertex3f(8.6,-0.5,  0.0);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(7.6, -0.5,  0.0);

    glEnd();





















    glFlush();

    glutSwapBuffers();

}

void reshape(int w,int h)

{

    glViewport(0,0,(GLsizei)w, (GLsizei)h);

    glMatrixMode(GL_PROJECTION);

    glLoadIdentity();

    glOrtho(-10,10,-10,10,-10,10);

    glMatrixMode(GL_MODELVIEW);

}

int road_1_wait = 0;


void timer(int)

{

    glutPostRedisplay();

    glutTimerFunc(6000/60,timer,0);


///----------Road 1------------
    switch(road_1_state){
    case 1:
        if(road_1_wait>100){
            road_1_state = 2;
            road_1_wait = 0;
            road_1_red = 0;
            road_1_yellow = 1;
        }
        else{
            road_1_wait++;
        }
        break;
    case 2:
        if(road_1_wait>30){
            road_1_state = 3;
            road_1_wait = 0;
            road_1_yellow = 0;
            road_1_green = 1;
        }
        else{
            road_1_wait++;
            x_position_1-= yellow_signal_speed;
        }
        break;
    case 3:
        if(road_1_wait>100){
            road_1_state = 4;
            road_1_wait = 0;
            road_1_green = 0;
            road_1_yellow = 1;
        }
        else{
            road_1_wait++;
            x_position_1-= green_signal_speed;
        }
        break;
    case 4:
        if(road_1_wait>30){
            road_1_state = 1;
            road_1_wait = 0;
            road_1_red = 1;
            road_1_yellow = 0;
        }
        else{
            road_1_wait++;
            x_position_1-= yellow_signal_speed;
        }
        break;
    }

    if(x_position_1 < -20){
        x_position_1 = 8;
    }




}
