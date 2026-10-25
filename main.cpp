#include <windows.h>
#ifdef __APPLE__
#else
#include <GL/glut.h>
#endif
#include <stdlib.h>
#include <math.h>

void init(void);
void display(void);

int main (int argc, char **argv)
{
 glutInit(&argc, argv);
 glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
 glutInitWindowSize(1800, 900);
 glutInitWindowPosition(250, 250);
 glutCreateWindow("TTS_672021187");
 init();
 glutDisplayFunc(display);
 glutMainLoop();
 return 0;
}

void init(void)
{
 glClearColor(1.0, 1.0, 1.0, 1.0);
 //glColor3f(0.0, 0.0, 1.0);
 glMatrixMode(GL_PROJECTION);
 glLoadIdentity();
 glOrtho(-100.0, 100.0, -100.0, 100.0, -100.0, 100.0);
}

void langit_tanah(){
    glLineWidth(5);

     //langit
    glBegin(GL_QUADS);
    glColor3f(0.5f, 1.0f, 1.0f);
    glVertex2i(-100, 100);
    glVertex2i(100, 100);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2i(100, -100);
    glVertex2i(-100, -100);
    glEnd();

    //tanah
    glColor3f(0.6, 0.5, 0.3);
    glBegin(GL_QUADS);
    glVertex2i(-100, -100);
    glVertex2i(-100, -60);
    glVertex2i(100, -60);
    glVertex2i(100, -100);
    glEnd();

    glColor3f(0.7, 0.6, 0.6);
    glBegin(GL_QUADS);
    glVertex2i(-100, -100);
    glVertex2i(-100, -70);
    glVertex2i(100, -70);
    glVertex2i(100, -100);
    glEnd();

    glColor3f(0.5, 0.5, 0.5);
    glBegin(GL_POLYGON);
    glVertex2i(-100, -68);
    glVertex2i(-100, -72);
    glVertex2i(-32, -72);
    glVertex2i(-30, -68);
    glEnd();

    glColor3f(0.5, 0.5, 0.5);
    glBegin(GL_POLYGON);
    glVertex2i(100, -68);
    glVertex2i(100, -72);
    glVertex2i(32, -72);
    glVertex2i(30, -68);
    glEnd();
    glColor3f(0.3, 0.3, 0.3);
    glBegin(GL_LINE_LOOP);
    glVertex2i(-100, -68);
    glVertex2i(-100, -72);
    glVertex2i(-32, -72);
    glVertex2i(-30, -68);
    glEnd();

    glColor3f(0.3, 0.3, 0.3);
    glBegin(GL_LINE_LOOP);
    glVertex2i(100, -68);
    glVertex2i(100, -72);
    glVertex2i(32, -72);
    glVertex2i(30, -68);
    glEnd();

    glColor3f(0.2, 0.2, 0.2);
    glBegin(GL_LINES);
    glVertex2f(-43, -100);
    glVertex2f(-32, -72);
    glVertex2f(43, -100);
    glVertex2f(32, -72);
    glEnd();


}

void luaran_pintu_depan(){
    glLineWidth(15);


    glColor3f(0.6, 0.6, 0.7);
    glBegin(GL_LINES);
    glVertex2i(-15, -18);
    glVertex2i(15, -18);
    glEnd();

    glColor3f(0.6, 0.6, 0.7);
    glBegin(GL_LINES);
    glVertex2i(-15, -17);
    glVertex2i(15, -17);
    glEnd();

    glColor3f(0.6, 0.6, 0.7);
    glBegin(GL_LINES);
    glVertex2i(-15, 21);
    glVertex2i(15, 21);
    glEnd();

    glColor3f(0.6, 0.6, 0.7);
    glBegin(GL_LINES);
    glVertex2i(-75, 55);
    glVertex2i(75, 55);
    glEnd();

    glColor3f(0.9, 0.9, 0.9);
    glBegin(GL_LINES);
    glVertex2i(-20, 66);
    glVertex2i(20, 66);
    glEnd();


    glColor3f(0.7, 0.7, 0.7);
    glBegin(GL_QUADS);
    glVertex2i(-20, 65);
    glVertex2i(20, 65);
    glVertex2i(18, 55);
    glVertex2i(-18, 55);
    glEnd();

    glColor3f(0.9, 0.9, 0.9);
    glBegin(GL_LINES);
    glVertex2i(-27, 36);
    glVertex2i(27, 36);
    glEnd();

    glColor3f(0.7, 0.7, 0.7);
    glBegin(GL_QUADS);
    glVertex2i(-27, 35);
    glVertex2i(27, 35);
    glVertex2i(25, 20);
    glVertex2i(-25, 20);
    glEnd();

    glColor3f(0.9, 0.9, 0.9);
    glBegin(GL_LINES);
    glVertex2i(-30, -11);
    glVertex2i(30, -11);
    glEnd();

    glColor3f(0.7, 0.7, 0.7);
    glBegin(GL_QUADS);
    glVertex2i(-30, -12);
    glVertex2i(30, -12);
    glVertex2i(25, -20);
    glVertex2i(-25, -20);
    glEnd();

    glColor3f(0.6, 0.6, 0.7);
    glBegin(GL_QUADS);
    glVertex2i(-18, 62);
    glVertex2i(-16, 62);
    glVertex2i(-16, 37);
    glVertex2i(-18, 37);
    glEnd();

        glColor3f(0.9, 0.9, 0.9);
    glBegin(GL_LINES);
    glVertex2i(-20, 55);
    glVertex2i(-79, 55);
    glEnd();

    glColor3f(0.7, 0.7, 0.7);
    glBegin(GL_QUADS);
    glVertex2i(-18, 54);
    glVertex2i(-79, 54);
    glVertex2i(-75, 50);
    glVertex2i(-18, 50);
    glEnd();

    glColor3f(0.6, 0.6, 0.7);
    glBegin(GL_QUADS);
    glVertex2i(18, 62);
    glVertex2i(16, 62);
    glVertex2i(16, 37);
    glVertex2i(18, 37);
    glEnd();

    glColor3f(0.6, 0.6, 0.7);
    glBegin(GL_QUADS);
    glVertex2i(-18, 32);
    glVertex2i(-16, 32);
    glVertex2i(-16, -10);
    glVertex2i(-18, -10);
    glEnd();

    glColor3f(0.6, 0.6, 0.7);
    glBegin(GL_QUADS);
    glVertex2i(18, 32);
    glVertex2i(16, 32);
    glVertex2i(16, -10);
    glVertex2i(18, -10);
    glEnd();

    glColor3f(0.6, 0.6, 0.7);
    glBegin(GL_QUADS);
    glVertex2i(-18, -15);
    glVertex2i(-16, -15);
    glVertex2i(-16, -58);
    glVertex2i(-18, -58);
    glEnd();

    glColor3f(0.6, 0.6, 0.7);
    glBegin(GL_QUADS);
    glVertex2i(18, -15);
    glVertex2i(16, -15);
    glVertex2i(16, -58);
    glVertex2i(18, -58);
    glEnd();

    glColor3f(0.6, 0.6, 0.7);
    glBegin(GL_QUADS);
    glVertex2i(-18, -15);
    glVertex2i(18, -15);
    glVertex2i(16, -20);
    glVertex2i(-16, -20);
    glEnd();

    glColor3f(0.6, 0.6, 0.7);
    glBegin(GL_QUADS);
    glVertex2i(-18, 32);
    glVertex2i(18, 32);
    glVertex2i(16, 27);
    glVertex2i(-16, 27);
    glEnd();

    glColor3f(0.6, 0.6, 0.7);
    glBegin(GL_QUADS);
    glVertex2i(-18, 62);
    glVertex2i(18, 62);
    glVertex2i(16, 57);
    glVertex2i(-16, 57);
    glEnd();

}

void rangka_dasar(){

    glLineWidth(20);
    //bangunan dasar
    glColor3f(0.9, 1.0, 1.0);
    glBegin(GL_QUADS);
    glVertex2i(-89, -60);
    glVertex2i(89, -60);
    glVertex2i(89, 60);
    glVertex2i(-89, 60);
    glEnd();

    //jendela besar kiri kanan
    glColor3f(0.0, 0.0, 0.7);
    glBegin(GL_QUADS);
    glVertex2i(89, -60);
    glVertex2i(89, 60);
    glVertex2i(75, 60);
    glVertex2i(75, -60);
    glEnd();

    glColor3f(0.0, 0.0, 0.7);
    glBegin(GL_QUADS);
    glVertex2i(-89, -60);
    glVertex2i(-89, 60);
    glVertex2i(-75, 60);
    glVertex2i(-75, -60);
    glEnd();


    //garis tepi kiri kanan
    glColor3f(0.6, 0.6, 0.7);
    glBegin(GL_LINES);
    glVertex2i(-89, -60);
    glVertex2i(-89, 60);
    glEnd();

    glColor3f(0.6, 0.6, 0.7);
    glBegin(GL_LINES);
    glVertex2i(89, -60);
    glVertex2i(89, 60);
    glEnd();

    glColor3f(0.6, 0.6, 0.7);
    glBegin(GL_LINES);
    glVertex2i(-75, -60);
    glVertex2i(-75, 60);
    glEnd();

    glColor3f(0.6, 0.6, 0.7);
    glBegin(GL_LINES);
    glVertex2i(75, -60);
    glVertex2i(75, 60);
    glEnd();

    glColor3f(0.6, 0.6, 0.7);
    glBegin(GL_LINES);
    glVertex2i(35, -60);
    glVertex2i(35, 60);
    glEnd();

    glColor3f(0.6, 0.6, 0.7);
    glBegin(GL_LINES);
    glVertex2i(55, -60);
    glVertex2i(55, 60);
    glEnd();

    glColor3f(0.6, 0.6, 0.7);
    glBegin(GL_LINES);
    glVertex2i(-35, -60);
    glVertex2i(-35, 60);
    glEnd();

    glColor3f(0.6, 0.6, 0.7);
    glBegin(GL_LINES);
    glVertex2i(-55, -60);
    glVertex2i(-55, 60);
    glEnd();

    //garis horizontal
    glColor3f(0.6, 0.6, 0.7);
    glBegin(GL_LINES);
    glVertex2i(75, -20);
    glVertex2i(-75, -20);
    glEnd();

    glColor3f(0.6, 0.6, 0.7);
    glBegin(GL_LINES);
    glVertex2i(75, 20);
    glVertex2i(-75, 20);
    glEnd();

    //atap
    glColor3f(0.8, 0.8, 0.8);
    glBegin(GL_QUADS);
    glVertex2i(-90, 60);
    glVertex2i(-96, 66);
    glVertex2i(96, 66);
    glVertex2i(90, 60);
    glEnd();



    glColor3f(0.8, 0.8, 0.8);
    glBegin(GL_QUADS);
    glVertex2i(-15, 69);
    glVertex2i(-15, 77);
    glVertex2i(-19, 75);
    glVertex2i(-19, 69);
    glEnd();

    glColor3f(0.8, 0.8, 0.8);
    glBegin(GL_QUADS);
    glVertex2i(15, 69);
    glVertex2i(15, 77);
    glVertex2i(19, 75);
    glVertex2i(19, 69);
    glEnd();

    glColor3f(0.8, 0.8, 0.8);
    glBegin(GL_QUADS);
    glVertex2i(0, 83);
    glVertex2i(0, 90);
    glColor3f(0.9, 0.9, 0.9);
    glVertex2i(-20, 82);
    glVertex2i(-20, 75);
    glEnd();

    glColor3f(0.8, 0.8, 0.8);
    glBegin(GL_QUADS);
    glVertex2i(0, 83);
    glVertex2i(0, 90);
    glColor3f(0.9, 0.9, 0.9);
    glVertex2i(20, 82);
    glVertex2i(20, 75);
    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINES);
    glVertex2i(-96, 66);
    glVertex2i(96, 66);
    glEnd();

    glColor3f(0.6, 0.6, 0.7);
    glBegin(GL_LINES);
    glVertex2i(-20, 65);
    glVertex2i(20, 65);
    glEnd();

    glColor3f(0.9, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-20, 67);
    glVertex2i(20, 67);
    glEnd();

    glColor3f(0.6, 0.6, 0.7);
    glBegin(GL_LINES);
    glVertex2i(-15, 67);
    glVertex2i(-15, 77);
    glEnd();

    glColor3f(0.6, 0.6, 0.7);
    glBegin(GL_LINES);
    glVertex2i(15, 67);
    glVertex2i(15, 77);
    glEnd();

    glColor3f(0.9, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2i(-15, 67);
    glVertex2i(-15, 77);
    glVertex2i(0, 83);
    glVertex2i(15, 77);
    glVertex2i(15, 67);
    glEnd();

    //pintu depan
    glColor3f(0.6, 0.6, 0.7);
    glBegin(GL_LINES);
    glVertex2i(-15, -60);
    glVertex2i(-15, 60);
    glEnd();

    glColor3f(0.6, 0.6, 0.7);
    glBegin(GL_LINES);
    glVertex2i(15, -60);
    glVertex2i(15, 60);
    glEnd();

    //garis hitam bawah gedung
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINES);
    glVertex2f(-89.5, -60);
    glVertex2f(89.5, -60);
    glEnd();



}

void bingkai_atap(){
    glLineWidth(10);

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINES);
    glVertex2i(-20, 82);
    glVertex2i(-19, 69);
    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINES);
    glVertex2i(20, 82);
    glVertex2i(19, 69);
    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINES);
    glVertex2i(20, 82);
    glVertex2i(0, 90);
    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINES);
    glVertex2i(-20, 82);
    glVertex2i(0, 90);
    glEnd();

    glColor3f(0.9, 0.9, 0.9);
    glBegin(GL_LINES);
    glVertex2i(-18, 55);
    glVertex2i(-79, 55);
    glEnd();

    glColor3f(0.7, 0.7, 0.7);
    glBegin(GL_QUADS);
    glVertex2i(-18, 54);
    glVertex2i(-79, 54);
    glVertex2i(-75, 50);
    glVertex2i(-18, 50);
    glEnd();

    glColor3f(0.9, 0.9, 0.9);
    glBegin(GL_LINES);
    glVertex2i(18, 55);
    glVertex2i(79, 55);
    glEnd();

    glColor3f(0.7, 0.7, 0.7);
    glBegin(GL_QUADS);
    glVertex2i(18, 54);
    glVertex2i(79, 54);
    glVertex2i(75, 50);
    glVertex2i(18, 50);
    glEnd();
}
void interior_pintudepan(){
    glLineWidth(5);

    //pintu dan jendela depan lantai 1
    glColor3f(0.3, 0.4, 0.5);
    glBegin(GL_QUADS);
    glVertex2i(-13, -57);
    glVertex2i(13, -57);
    glVertex2i(13, -27);
    glVertex2i(-13, -27);
    glEnd();

    //kerangka pintu jendela depan lantai 1
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-13, -57);
    glVertex2i(13, -57);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-13, -50);
    glVertex2i(-6, -50);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(13, -50);
    glVertex2i(6, -50);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-13, -27);
    glVertex2i(13, -27);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-13, -30);
    glVertex2i(13, -30);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-6, -27);
    glVertex2i(-6, -57);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-13, -57);
    glVertex2i(-13, -27);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(13, -57);
    glVertex2i(13, -27);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(6, -27);
    glVertex2i(6, -57);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2f(9.5, -27.0);
    glVertex2f(9.5, -57.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2f(-9.5, -27.0);
    glVertex2f(-9.5, -57.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(0, -27);
    glVertex2i(0, -57);
    glEnd();

    //pintu dan jendela depan lantai 2
    glColor3f(0.3, 0.4, 0.5);
    glBegin(GL_QUADS);
    glVertex2i(-13, -15);
    glVertex2i(13, -15);
    glVertex2i(13, 15);
    glVertex2i(-13, 15);
    glEnd();

    //kerangka pintu jendela depan lantai 2
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-13, -15);
    glVertex2i(13, -15);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-13, -8);
    glVertex2i(-6, -8);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(13, -8);
    glVertex2i(6, -8);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-13, 15);
    glVertex2i(13, 15);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-13, 12);
    glVertex2i(13, 12);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-6, 15);
    glVertex2i(-6, -15);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-13, -15);
    glVertex2i(-13, 15);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(13, -15);
    glVertex2i(13, 15);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(6, 15);
    glVertex2i(6, -15);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2f(9.5, 15.0);
    glVertex2f(9.5, -15.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2f(-9.5, 15.0);
    glVertex2f(-9.5, -15.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(0, 15);
    glVertex2i(0, -15);
    glEnd();

    //pintu dan jendela depan lantai 3
    glColor3f(0.3, 0.4, 0.5);
    glBegin(GL_QUADS);
    glVertex2i(-13, 23);
    glVertex2i(13, 23);
    glVertex2i(13, 53);
    glVertex2i(-13, 53);
    glEnd();

    //kerangka pintu jendela depan lantai 3
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-13, 23);
    glVertex2i(13, 23);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-13, 30);
    glVertex2i(-6, 30);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(13, 30);
    glVertex2i(6, 30);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-13, 53);
    glVertex2i(13, 53);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-13, 50);
    glVertex2i(13, 50);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-6, 53);
    glVertex2i(-6, 23);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-13, 23);
    glVertex2i(-13, 53);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(13, 23);
    glVertex2i(13, 53);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(6, 53);
    glVertex2i(6, 23);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2f(9.5, 53.0);
    glVertex2f(9.5, 23.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2f(-9.5, 53.0);
    glVertex2f(-9.5, 23.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(0, 53);
    glVertex2i(0, 23);
    glEnd();




}

void interior_gedungkiri(){
    glLineWidth(5);

    //jendela kiri no 1 lantai 1
    glColor3f(0.3, 0.4, 0.5);
    glBegin(GL_QUADS);
    glVertex2i(-16, -57);
    glVertex2i(-16, -27);
    glVertex2i(-34, -27);
    glVertex2i(-34, -57);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-16, -27);
    glVertex2i(-34, -27);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-16, -57);
    glVertex2i(-34, -57);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-16, -30);
    glVertex2i(-34, -30);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-16, -50);
    glVertex2i(-34, -50);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-28, -27);
    glVertex2i(-28, -57);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-22, -27);
    glVertex2i(-22, -57);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-19, -27);
    glVertex2i(-19, -50);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-31, -27);
    glVertex2i(-31, -50);
    glEnd();

    //kamar tengah lantai 1

    //jendela
    glColor3f(0.3, 0.4, 0.5);
    glBegin(GL_QUADS);
    glVertex2i(-36, -41);
    glVertex2i(-36, -27);
    glVertex2i(-40, -27);
    glVertex2i(-40, -41);
    glEnd();

    //bingkai jendela
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-36, -41);
    glVertex2i(-36, -27);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-36, -27);
    glVertex2i(-40, -27);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-40, -27);
    glVertex2i(-40, -41);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-40, -41);
    glVertex2i(-36, -41);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-40, -30);
    glVertex2i(-36, -30);
    glEnd();

    //pintu
    glColor3f(0.8, 0.2, 0.3);
    glBegin(GL_QUADS);
    glVertex2i(-41, -59);
    glVertex2i(-41, -27);
    glVertex2i(-45, -27);
    glVertex2i(-45, -59);
    glEnd();

    //jendela
    glColor3f(0.3, 0.4, 0.5);
    glBegin(GL_QUADS);
    glVertex2i(-41, -30);
    glVertex2i(-41, -27);
    glVertex2i(-45, -27);
    glVertex2i(-45, -30);
    glEnd();

    //bingkai jendela
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-41, -30);
    glVertex2i(-41, -27);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-41, -27);
    glVertex2i(-45, -27);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-45, -27);
    glVertex2i(-45, -30);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-45, -30);
    glVertex2i(-41, -30);
    glEnd();

    glColor3f(0.3, 0.4, 0.5);
    glBegin(GL_QUADS);
    glVertex2i(-46, -49);
    glVertex2i(-46, -27);
    glVertex2i(-52, -27);
    glVertex2i(-52, -49);
    glEnd();

    //bingkai jendela
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-46, -49);
    glVertex2i(-46, -27);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-46, -27);
    glVertex2i(-52, -27);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-52, -27);
    glVertex2i(-52, -49);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-52, -49);
    glVertex2i(-46, -49);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-52, -30);
    glVertex2i(-46, -30);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-49, -49);
    glVertex2i(-49, -27);
    glEnd();

    //kamar tengah lantai 2
    //jendela
    glColor3f(0.3, 0.4, 0.5);
    glBegin(GL_QUADS);
    glVertex2i(-36, 2);
    glVertex2i(-36, 15);
    glVertex2i(-40, 15);
    glVertex2i(-40, 2);
    glEnd();

    //bingkai jendela
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-36, 2);
    glVertex2i(-36, 15);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-36, 15);
    glVertex2i(-40, 15);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-40, 15);
    glVertex2i(-40, 2);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-40, 2);
    glVertex2i(-36, 2);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-40, 12);
    glVertex2i(-36, 12);
    glEnd();

    //pintu
    glColor3f(0.8, 0.2, 0.3);
    glBegin(GL_QUADS);
    glVertex2i(-41, 15);
    glVertex2i(-41, -19);
    glVertex2i(-45, -19);
    glVertex2i(-45, 15);
    glEnd();

    //jendela
    glColor3f(0.3, 0.4, 0.5);
    glBegin(GL_QUADS);
    glVertex2i(-41, 15);
    glVertex2i(-41, 12);
    glVertex2i(-45, 12);
    glVertex2i(-45, 15);
    glEnd();

    //bingkai jendela
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-41, 12);
    glVertex2i(-41, 15);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-41, 15);
    glVertex2i(-45, 15);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-45, 15);
    glVertex2i(-45, 12);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-45, 12);
    glVertex2i(-41, 12);
    glEnd();

    glColor3f(0.3, 0.4, 0.5);
    glBegin(GL_QUADS);
    glVertex2i(-46, -7);
    glVertex2i(-46, 15);
    glVertex2i(-52, 15);
    glVertex2i(-52, -7);
    glEnd();

    //bingkai jendela
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-46, -7);
    glVertex2i(-46, 15);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-46, 15);
    glVertex2i(-52, 15);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-52, 15);
    glVertex2i(-52, -7);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-52, -7);
    glVertex2i(-46, -7);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-52, 12);
    glVertex2i(-46, 12);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-49, -7);
    glVertex2i(-49, 15);
    glEnd();

    //lantai 3
    //jendela
    glColor3f(0.3, 0.4, 0.5);
    glBegin(GL_QUADS);
    glVertex2i(-36, 34);
    glVertex2i(-36, 47);
    glVertex2i(-40, 47);
    glVertex2i(-40, 34);
    glEnd();

    //bingkai jendela
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-36, 34);
    glVertex2i(-36, 47);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-36, 47);
    glVertex2i(-40, 47);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-40, 47);
    glVertex2i(-40, 34);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-40, 34);
    glVertex2i(-36, 34);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-40, 44);
    glVertex2i(-36, 44);
    glEnd();
    //pintu buat lantai 3
    glColor3f(0.8, 0.2, 0.3);
    glBegin(GL_QUADS);
    glVertex2i(-41, 47);
    glVertex2i(-41, 21);
    glVertex2i(-45, 21);
    glVertex2i(-45, 47);
    glEnd();

    //jendela buat lantai 3
    glColor3f(0.3, 0.4, 0.5);
    glBegin(GL_QUADS);
    glVertex2i(-41, 47);
    glVertex2i(-41, 44);
    glVertex2i(-45, 44);
    glVertex2i(-45, 47);
    glEnd();

    //bingkai jendela
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-41, 44);
    glVertex2i(-41, 47);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-41, 47);
    glVertex2i(-45, 47);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-45, 47);
    glVertex2i(-45, 44);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-45, 44);
    glVertex2i(-41, 44);
    glEnd();

    glColor3f(0.3, 0.4, 0.5);
    glBegin(GL_QUADS);
    glVertex2i(-46, 29);
    glVertex2i(-46, 47);
    glVertex2i(-52, 47);
    glVertex2i(-52, 29);
    glEnd();

    //bingkai jendela
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-46, 29);
    glVertex2i(-46, 47);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-46, 47);
    glVertex2i(-52, 47);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-52, 47);
    glVertex2i(-52, 29);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-52, 29);
    glVertex2i(-46, 29);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-52, 44);
    glVertex2i(-46, 44);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-49, 29);
    glVertex2i(-49, 47);
    glEnd();


    //kamar ujung

    //lantai 3

    //jendela
    glColor3f(0.3, 0.4, 0.5);
    glBegin(GL_QUADS);
    glVertex2i(-69, 34);
    glVertex2i(-69, 47);
    glVertex2i(-73, 47);
    glVertex2i(-73, 34);
    glEnd();

    //bingkai jendela
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-69, 34);
    glVertex2i(-69, 47);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-69, 47);
    glVertex2i(-73, 47);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-73, 47);
    glVertex2i(-73, 34);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-73, 34);
    glVertex2i(-69, 34);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-73, 44);
    glVertex2i(-69, 44);
    glEnd();

    //pintu buat lantai 3
    glColor3f(0.8, 0.2, 0.3);
    glBegin(GL_QUADS);
    glVertex2i(-64, 47);
    glVertex2i(-64, 21);
    glVertex2i(-68, 21);
    glVertex2i(-68, 47);
    glEnd();

    //jendela buat lantai 3
    glColor3f(0.3, 0.4, 0.5);
    glBegin(GL_QUADS);
    glVertex2i(-64, 47);
    glVertex2i(-64, 44);
    glVertex2i(-68, 44);
    glVertex2i(-68, 47);
    glEnd();

    //bingkai jendela
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-64, 44);
    glVertex2i(-64, 47);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-64, 47);
    glVertex2i(-68, 47);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-68, 47);
    glVertex2i(-68, 44);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-68, 44);
    glVertex2i(-64, 44);
    glEnd();

    glColor3f(0.3, 0.4, 0.5);
    glBegin(GL_QUADS);
    glVertex2i(-56, 29);
    glVertex2i(-56, 47);
    glVertex2i(-62, 47);
    glVertex2i(-62, 29);
    glEnd();

    //bingkai jendela
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-56, 29);
    glVertex2i(-56, 47);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-56, 47);
    glVertex2i(-62, 47);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-62, 47);
    glVertex2i(-62, 29);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-62, 29);
    glVertex2i(-56, 29);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-62, 44);
    glVertex2i(-56, 44);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-59, 29);
    glVertex2i(-59, 47);
    glEnd();

    //lantai 2
    //jendela

    glColor3f(0.3, 0.4, 0.5);
    glBegin(GL_QUADS);
    glVertex2i(-69, 2);
    glVertex2i(-69, 15);
    glVertex2i(-73, 15);
    glVertex2i(-73, 2);
    glEnd();

    //bingkai jendela
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-69, 2);
    glVertex2i(-69, 15);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-69, 15);
    glVertex2i(-73, 15);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-73, 15);
    glVertex2i(-73, 2);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-73, 2);
    glVertex2i(-69, 2);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-73, 12);
    glVertex2i(-69, 12);
    glEnd();

    //pintu buat lantai 2
    glColor3f(0.8, 0.2, 0.3);
    glBegin(GL_QUADS);
    glVertex2i(-64, 15);
    glVertex2i(-64, -19);
    glVertex2i(-68, -19);
    glVertex2i(-68, 15);
    glEnd();

    //jendela buat lantai 2
    glColor3f(0.3, 0.4, 0.5);
    glBegin(GL_QUADS);
    glVertex2i(-64, 15);
    glVertex2i(-64, 12);
    glVertex2i(-68, 12);
    glVertex2i(-68, 15);
    glEnd();

    //bingkai jendela
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-64, 12);
    glVertex2i(-64, 15);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-64, 15);
    glVertex2i(-68, 15);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-68, 15);
    glVertex2i(-68, 12);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-68, 12);
    glVertex2i(-64, 12);
    glEnd();

    glColor3f(0.3, 0.4, 0.5);
    glBegin(GL_QUADS);
    glVertex2i(-56, -7);
    glVertex2i(-56, 15);
    glVertex2i(-62, 15);
    glVertex2i(-62, -7);
    glEnd();

    //bingkai jendela
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-56, -7);
    glVertex2i(-56, 15);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-56, 15);
    glVertex2i(-62, 15);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-62, 15);
    glVertex2i(-62, -7);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-62, -7);
    glVertex2i(-56, -7);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-62, 12);
    glVertex2i(-56, 12);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-59, -7);
    glVertex2i(-59, 15);
    glEnd();

    //lantai 1
    //jendela

    glColor3f(0.3, 0.4, 0.5);
    glBegin(GL_QUADS);
    glVertex2i(-69, -27);
    glVertex2i(-69, -41);
    glVertex2i(-73, -41);
    glVertex2i(-73, -27);
    glEnd();

    //bingkai jendela
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-69, -27);
    glVertex2i(-69, -41);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-69, -41);
    glVertex2i(-73, -41);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-73, -41);
    glVertex2i(-73, -27);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-73, -27);
    glVertex2i(-69, -27);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-73, -30);
    glVertex2i(-69, -30);
    glEnd();

    //pintu buat lantai 1
    glColor3f(0.8, 0.2, 0.3);
    glBegin(GL_QUADS);
    glVertex2i(-64, -27);
    glVertex2i(-64, -59);
    glVertex2i(-68, -59);
    glVertex2i(-68, -27);
    glEnd();

    //jendela buat lantai 1
    glColor3f(0.3, 0.4, 0.5);
    glBegin(GL_QUADS);
    glVertex2i(-64, -27);
    glVertex2i(-64, -30);
    glVertex2i(-68, -30);
    glVertex2i(-68, -27);
    glEnd();

    //bingkai jendela
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-64, -30);
    glVertex2i(-64, -27);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-64, -27);
    glVertex2i(-68, -27);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-68, -27);
    glVertex2i(-68, -30);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-68, -30);
    glVertex2i(-64, -30);
    glEnd();

    glColor3f(0.3, 0.4, 0.5);
    glBegin(GL_QUADS);
    glVertex2i(-56, -49);
    glVertex2i(-56, -27);
    glVertex2i(-62, -27);
    glVertex2i(-62, -49);
    glEnd();

    //bingkai jendela
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-56, -49);
    glVertex2i(-56, -27);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-56, -27);
    glVertex2i(-62, -27);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-62, -27);
    glVertex2i(-62, -49);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-62, -49);
    glVertex2i(-56, -49);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-62, -30);
    glVertex2i(-56, -30);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-59, -49);
    glVertex2i(-59, -27);
    glEnd();


    //kamar pangkal
    //lantai 2

    //jendela

    glColor3f(0.3, 0.4, 0.5);
    glBegin(GL_QUADS);
    glVertex2i(-29, 2);
    glVertex2i(-29, 15);
    glVertex2i(-33, 15);
    glVertex2i(-33, 2);
    glEnd();

    //bingkai jendela
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-29, 2);
    glVertex2i(-29, 15);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-29, 15);
    glVertex2i(-33, 15);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-33, 15);
    glVertex2i(-33, 2);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-33, 2);
    glVertex2i(-29, 2);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-33, 12);
    glVertex2i(-29, 12);
    glEnd();

    //pintu buat lantai 2
    glColor3f(0.8, 0.2, 0.3);
    glBegin(GL_QUADS);
    glVertex2i(-24, 15);
    glVertex2i(-24, -19);
    glVertex2i(-28, -19);
    glVertex2i(-28, 15);
    glEnd();

    //jendela buat lantai 2
    glColor3f(0.3, 0.4, 0.5);
    glBegin(GL_QUADS);
    glVertex2i(-24, 15);
    glVertex2i(-24, 12);
    glVertex2i(-28, 12);
    glVertex2i(-28, 15);
    glEnd();

    //bingkai jendela
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-24, 12);
    glVertex2i(-24, 15);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-24, 15);
    glVertex2i(-28, 15);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-28, 15);
    glVertex2i(-28, 12);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-28, 12);
    glVertex2i(-24, 12);
    glEnd();

    glColor3f(0.3, 0.4, 0.5);
    glBegin(GL_QUADS);
    glVertex2i(-16, -7);
    glVertex2i(-16, 15);
    glVertex2i(-22, 15);
    glVertex2i(-22, -7);
    glEnd();

    //bingkai jendela
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-16, -7);
    glVertex2i(-16, 15);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-26, 15);
    glVertex2i(-22, 15);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-22, 15);
    glVertex2i(-22, -7);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-22, -7);
    glVertex2i(-16, -7);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-22, 12);
    glVertex2i(-16, 12);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-19, -7);
    glVertex2i(-19, 15);
    glEnd();

    //lantai 3

    //jendela

    glColor3f(0.3, 0.4, 0.5);
    glBegin(GL_QUADS);
    glVertex2i(-29, 34);
    glVertex2i(-29, 47);
    glVertex2i(-33, 47);
    glVertex2i(-33, 34);
    glEnd();

    //bingkai jendela
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-29, 34);
    glVertex2i(-29, 47);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-29, 47);
    glVertex2i(-33, 47);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-33, 47);
    glVertex2i(-33, 34);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-33, 34);
    glVertex2i(-29, 34);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-33, 44);
    glVertex2i(-29, 44);
    glEnd();

    //pintu buat lantai 3
    glColor3f(0.8, 0.2, 0.3);
    glBegin(GL_QUADS);
    glVertex2i(-24, 21);
    glVertex2i(-24, 47);
    glVertex2i(-28, 47);
    glVertex2i(-28, 21);
    glEnd();

    //jendela buat lantai 3
    glColor3f(0.3, 0.4, 0.5);
    glBegin(GL_QUADS);
    glVertex2i(-24, 47);
    glVertex2i(-24, 44);
    glVertex2i(-28, 44);
    glVertex2i(-28, 47);
    glEnd();

    //bingkai jendela
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-24, 44);
    glVertex2i(-24, 47);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-24, 47);
    glVertex2i(-28, 47);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-28, 47);
    glVertex2i(-28, 44);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-28, 44);
    glVertex2i(-24, 44);
    glEnd();

    glColor3f(0.3, 0.4, 0.5);
    glBegin(GL_QUADS);
    glVertex2i(-16, 29);
    glVertex2i(-16, 47);
    glVertex2i(-22, 47);
    glVertex2i(-22, 29);
    glEnd();

    //bingkai jendela
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-16, 29);
    glVertex2i(-16, 47);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-26, 47);
    glVertex2i(-22, 47);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-22, 29);
    glVertex2i(-22, 47);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-22, 47);
    glVertex2i(-16, 47);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-22, 44);
    glVertex2i(-16, 44);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(-19, 29);
    glVertex2i(-19, 47);
    glEnd();

    //Balkon
    //lantai 3
    glColor3f(0.5, 0.5, 0.5);
    glBegin(GL_QUADS);
    glVertex2i(-20, 21);
    glVertex2i(-20, 30);
    glVertex2i(-47, 30);
    glVertex2i(-47, 21);
    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINES);
    glVertex2i(-46, 30);
    glVertex2i(-46, 40);
    glVertex2i(-46, 40);
    glVertex2i(-21, 40);
    glVertex2i(-21, 40);
    glVertex2i(-21, 30);
    glVertex2i(-26, 40);
    glVertex2i(-26, 30);
    glVertex2i(-31, 40);
    glVertex2i(-31, 30);
    glVertex2i(-36, 40);
    glVertex2i(-36, 30);
    glVertex2i(-41, 40);
    glVertex2i(-41, 30);
    glEnd();

    glColor3f(0.5, 0.5, 0.5);
    glBegin(GL_QUADS);
    glVertex2i(-66, 21);
    glVertex2i(-66, 30);
    glVertex2i(-76, 30);
    glVertex2i(-76, 21);
    glColor3f(0.4, 0.4, 0.4);
    glVertex2i(-66, 21);
    glVertex2i(-66, 30);
    glVertex2i(-64, 30);
    glVertex2i(-64, 21);
    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINES);
    glVertex2i(-76, 30);
    glVertex2i(-76, 40);
    glVertex2i(-76, 40);
    glVertex2i(-66, 40);
    glVertex2i(-66, 40);
    glVertex2i(-66, 30);
    glVertex2i(-71, 40);
    glVertex2i(-71, 30);
    glVertex2i(-76, 40);
    glVertex2i(-76, 30);
    glVertex2i(-66, 40);
    glVertex2i(-66, 30);
    glVertex2f(-64.5, 30.0);
    glVertex2f(-64.5, 40.0);
    glVertex2f(-64.5, 40.0);
    glVertex2f(-66, 40.0);
    glEnd();

    //lantai 2
    glColor3f(0.5, 0.5, 0.5);
    glBegin(GL_QUADS);
    glVertex2i(-20, -10);
    glVertex2i(-20, -19);
    glVertex2i(-47, -19);
    glVertex2i(-47, -10);
    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINES);
    glVertex2i(-46, -10);
    glVertex2i(-46, 0);
    glVertex2i(-46, 0);
    glVertex2i(-21, 0);
    glVertex2i(-21, 0);
    glVertex2i(-21, -10);
    glVertex2i(-26, 0);
    glVertex2i(-26, -10);
    glVertex2i(-31, 0);
    glVertex2i(-31, -10);
    glVertex2i(-36, 0);
    glVertex2i(-36, -10);
    glVertex2i(-41, 0);
    glVertex2i(-41, -10);
    glEnd();

    glColor3f(0.5, 0.5, 0.5);
    glBegin(GL_QUADS);
    glVertex2i(-66, -10);
    glVertex2i(-66, -19);
    glVertex2i(-76, -19);
    glVertex2i(-76, -10);
    glColor3f(0.4, 0.4, 0.4);
    glVertex2i(-66, -10);
    glVertex2i(-66, -19);
    glVertex2i(-64, -19);
    glVertex2i(-64, -10);
    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINES);
    glVertex2i(-76, -10);
    glVertex2i(-76, 0);
    glVertex2i(-76, 0);
    glVertex2i(-66, 0);
    glVertex2i(-66, 0);
    glVertex2i(-66, -10);
    glVertex2i(-71, 0);
    glVertex2i(-71, -10);
    glVertex2i(-76, 0);
    glVertex2i(-76, -10);
    glVertex2i(-66, 0);
    glVertex2i(-66, -10);
    glVertex2f(-64.5, -10.0);
    glVertex2f(-64.5, 0);
    glVertex2f(-64.5, 0);
    glVertex2f(-66, 0);
    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINES);
    glVertex2i(-76, -60);
    glVertex2i(-76, -50);
    glVertex2i(-76, -50);
    glVertex2i(-66, -50);
    glVertex2i(-66, -50);
    glVertex2i(-66, -60);
    glVertex2i(-71, -50);
    glVertex2i(-71, -60);
    glVertex2i(-76, -50);
    glVertex2i(-76, -60);
    glVertex2i(-66, -50);
    glVertex2i(-66, -60);
    glVertex2f(-64.5, -60.0);
    glVertex2f(-64.5, -50);
    glVertex2f(-64.5, -50);
    glVertex2f(-66, -50);
    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINES);
    glVertex2i(-46, -60);
    glVertex2i(-46, -50);
    glVertex2i(-46, -50);
    glVertex2i(-36, -50);
    glVertex2i(-36, -50);
    glVertex2i(-36, -60);
    glVertex2i(-41, -50);
    glVertex2i(-41, -60);
    glVertex2i(-46, -50);
    glVertex2i(-46, -60);
    glVertex2i(-36, -50);
    glVertex2i(-36, -60);
    glEnd();

}

void interior_gedungkanan(){
    glLineWidth(5);

    //jendela kanan no 1 lantai 1
    glColor3f(0.3, 0.4, 0.5);
    glBegin(GL_QUADS);
    glVertex2i(16, -57);
    glVertex2i(16, -27);
    glVertex2i(34, -27);
    glVertex2i(34, -57);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(16, -27);
    glVertex2i(34, -27);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(16, -57);
    glVertex2i(34, -57);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(16, -30);
    glVertex2i(34, -30);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(16, -50);
    glVertex2i(34, -50);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(28, -27);
    glVertex2i(28, -57);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(22, -27);
    glVertex2i(22, -57);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(19, -27);
    glVertex2i(19, -50);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(31, -27);
    glVertex2i(31, -50);
    glEnd();

    //kamar tengah lantai 1

    //jendela
    glColor3f(0.3, 0.4, 0.5);
    glBegin(GL_QUADS);
    glVertex2i(36, -41);
    glVertex2i(36, -27);
    glVertex2i(40, -27);
    glVertex2i(40, -41);
    glEnd();

    //bingkai jendela
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(36, -41);
    glVertex2i(36, -27);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(36, -27);
    glVertex2i(40, -27);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(40, -27);
    glVertex2i(40, -41);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(40, -41);
    glVertex2i(36, -41);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(40, -30);
    glVertex2i(36, -30);
    glEnd();

    //pintu
    glColor3f(0.8, 0.2, 0.3);
    glBegin(GL_QUADS);
    glVertex2i(41, -59);
    glVertex2i(41, -27);
    glVertex2i(45, -27);
    glVertex2i(45, -59);
    glEnd();

    //jendela
    glColor3f(0.3, 0.4, 0.5);
    glBegin(GL_QUADS);
    glVertex2i(41, -30);
    glVertex2i(41, -27);
    glVertex2i(45, -27);
    glVertex2i(45, -30);
    glEnd();

    //bingkai jendela
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(41, -30);
    glVertex2i(41, -27);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(41, -27);
    glVertex2i(45, -27);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(45, -27);
    glVertex2i(45, -30);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(45, -30);
    glVertex2i(41, -30);
    glEnd();

    glColor3f(0.3, 0.4, 0.5);
    glBegin(GL_QUADS);
    glVertex2i(46, -49);
    glVertex2i(46, -27);
    glVertex2i(52, -27);
    glVertex2i(52, -49);
    glEnd();

    //bingkai jendela
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(46, -49);
    glVertex2i(46, -27);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(46, -27);
    glVertex2i(52, -27);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(52, -27);
    glVertex2i(52, -49);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(52, -49);
    glVertex2i(46, -49);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(52, -30);
    glVertex2i(46, -30);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(49, -49);
    glVertex2i(49, -27);
    glEnd();

    //kamar tengah lantai 2
    //jendela
    glColor3f(0.3, 0.4, 0.5);
    glBegin(GL_QUADS);
    glVertex2i(36, 2);
    glVertex2i(36, 15);
    glVertex2i(40, 15);
    glVertex2i(40, 2);
    glEnd();

    //bingkai jendela
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(36, 2);
    glVertex2i(36, 15);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(36, 15);
    glVertex2i(40, 15);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(40, 15);
    glVertex2i(40, 2);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(40, 2);
    glVertex2i(36, 2);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(40, 12);
    glVertex2i(36, 12);
    glEnd();

    //pintu
    glColor3f(0.8, 0.2, 0.3);
    glBegin(GL_QUADS);
    glVertex2i(41, 15);
    glVertex2i(41, -19);
    glVertex2i(45, -19);
    glVertex2i(45, 15);
    glEnd();

    //jendela
    glColor3f(0.3, 0.4, 0.5);
    glBegin(GL_QUADS);
    glVertex2i(41, 15);
    glVertex2i(41, 12);
    glVertex2i(45, 12);
    glVertex2i(45, 15);
    glEnd();

    //bingkai jendela
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(41, 12);
    glVertex2i(41, 15);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(41, 15);
    glVertex2i(45, 15);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(45, 15);
    glVertex2i(45, 12);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(45, 12);
    glVertex2i(41, 12);
    glEnd();

    glColor3f(0.3, 0.4, 0.5);
    glBegin(GL_QUADS);
    glVertex2i(46, -7);
    glVertex2i(46, 15);
    glVertex2i(52, 15);
    glVertex2i(52, -7);
    glEnd();

    //bingkai jendela
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(46, -7);
    glVertex2i(46, 15);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(46, 15);
    glVertex2i(52, 15);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(52, 15);
    glVertex2i(52, -7);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(52, -7);
    glVertex2i(46, -7);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(52, 12);
    glVertex2i(46, 12);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(49, -7);
    glVertex2i(49, 15);
    glEnd();

    //lantai 3
    //jendela
    glColor3f(0.3, 0.4, 0.5);
    glBegin(GL_QUADS);
    glVertex2i(36, 34);
    glVertex2i(36, 47);
    glVertex2i(40, 47);
    glVertex2i(40, 34);
    glEnd();

    //bingkai jendela
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(36, 34);
    glVertex2i(36, 47);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(36, 47);
    glVertex2i(40, 47);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(40, 47);
    glVertex2i(40, 34);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(40, 34);
    glVertex2i(36, 34);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(40, 44);
    glVertex2i(36, 44);
    glEnd();
    //pintu buat lantai 3
    glColor3f(0.8, 0.2, 0.3);
    glBegin(GL_QUADS);
    glVertex2i(41, 47);
    glVertex2i(41, 21);
    glVertex2i(45, 21);
    glVertex2i(45, 47);
    glEnd();

    //jendela buat lantai 3
    glColor3f(0.3, 0.4, 0.5);
    glBegin(GL_QUADS);
    glVertex2i(41, 47);
    glVertex2i(41, 44);
    glVertex2i(45, 44);
    glVertex2i(45, 47);
    glEnd();

    //bingkai jendela
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(41, 44);
    glVertex2i(41, 47);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(41, 47);
    glVertex2i(45, 47);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(45, 47);
    glVertex2i(45, 44);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(45, 44);
    glVertex2i(41, 44);
    glEnd();

    glColor3f(0.3, 0.4, 0.5);
    glBegin(GL_QUADS);
    glVertex2i(46, 29);
    glVertex2i(46, 47);
    glVertex2i(52, 47);
    glVertex2i(52, 29);
    glEnd();

    //bingkai jendela
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(46, 29);
    glVertex2i(46, 47);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(46, 47);
    glVertex2i(52, 47);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(52, 47);
    glVertex2i(52, 29);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(52, 29);
    glVertex2i(46, 29);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(52, 44);
    glVertex2i(46, 44);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(49, 29);
    glVertex2i(49, 47);
    glEnd();


    //kamar ujung

    //lantai 3

    //jendela
    glColor3f(0.3, 0.4, 0.5);
    glBegin(GL_QUADS);
    glVertex2i(69, 34);
    glVertex2i(69, 47);
    glVertex2i(73, 47);
    glVertex2i(73, 34);
    glEnd();

    //bingkai jendela
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(69, 34);
    glVertex2i(69, 47);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(69, 47);
    glVertex2i(73, 47);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(73, 47);
    glVertex2i(73, 34);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(73, 34);
    glVertex2i(69, 34);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(73, 44);
    glVertex2i(69, 44);
    glEnd();

    //pintu buat lantai 3
    glColor3f(0.8, 0.2, 0.3);
    glBegin(GL_QUADS);
    glVertex2i(64, 47);
    glVertex2i(64, 21);
    glVertex2i(68, 21);
    glVertex2i(68, 47);
    glEnd();

    //jendela buat lantai 3
    glColor3f(0.3, 0.4, 0.5);
    glBegin(GL_QUADS);
    glVertex2i(64, 47);
    glVertex2i(64, 44);
    glVertex2i(68, 44);
    glVertex2i(68, 47);
    glEnd();

    //bingkai jendela
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(64, 44);
    glVertex2i(64, 47);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(64, 47);
    glVertex2i(68, 47);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(68, 47);
    glVertex2i(68, 44);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(68, 44);
    glVertex2i(64, 44);
    glEnd();

    glColor3f(0.3, 0.4, 0.5);
    glBegin(GL_QUADS);
    glVertex2i(56, 29);
    glVertex2i(56, 47);
    glVertex2i(62, 47);
    glVertex2i(62, 29);
    glEnd();

    //bingkai jendela
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(56, 29);
    glVertex2i(56, 47);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(56, 47);
    glVertex2i(62, 47);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(62, 47);
    glVertex2i(62, 29);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(62, 29);
    glVertex2i(56, 29);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(62, 44);
    glVertex2i(56, 44);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(59, 29);
    glVertex2i(59, 47);
    glEnd();

    //lantai 2
    //jendela

    glColor3f(0.3, 0.4, 0.5);
    glBegin(GL_QUADS);
    glVertex2i(69, 2);
    glVertex2i(69, 15);
    glVertex2i(73, 15);
    glVertex2i(73, 2);
    glEnd();

    //bingkai jendela
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(69, 2);
    glVertex2i(69, 15);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(69, 15);
    glVertex2i(73, 15);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(73, 15);
    glVertex2i(73, 2);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(73, 2);
    glVertex2i(69, 2);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(73, 12);
    glVertex2i(69, 12);
    glEnd();

    //pintu buat lantai 2
    glColor3f(0.8, 0.2, 0.3);
    glBegin(GL_QUADS);
    glVertex2i(64, 15);
    glVertex2i(64, -19);
    glVertex2i(68, -19);
    glVertex2i(68, 15);
    glEnd();

    //jendela buat lantai 2
    glColor3f(0.3, 0.4, 0.5);
    glBegin(GL_QUADS);
    glVertex2i(64, 15);
    glVertex2i(64, 12);
    glVertex2i(68, 12);
    glVertex2i(68, 15);
    glEnd();

    //bingkai jendela
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(64, 12);
    glVertex2i(64, 15);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(64, 15);
    glVertex2i(68, 15);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(68, 15);
    glVertex2i(68, 12);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(68, 12);
    glVertex2i(64, 12);
    glEnd();

    glColor3f(0.3, 0.4, 0.5);
    glBegin(GL_QUADS);
    glVertex2i(56, -7);
    glVertex2i(56, 15);
    glVertex2i(62, 15);
    glVertex2i(62, -7);
    glEnd();

    //bingkai jendela
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(56, -7);
    glVertex2i(56, 15);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(56, 15);
    glVertex2i(62, 15);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(62, 15);
    glVertex2i(62, -7);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(62, -7);
    glVertex2i(56, -7);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(62, 12);
    glVertex2i(56, 12);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(59, -7);
    glVertex2i(59, 15);
    glEnd();

    //lantai 1
    //jendela

    glColor3f(0.3, 0.4, 0.5);
    glBegin(GL_QUADS);
    glVertex2i(69, -27);
    glVertex2i(69, -41);
    glVertex2i(73, -41);
    glVertex2i(73, -27);
    glEnd();

    //bingkai jendela
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(69, -27);
    glVertex2i(69, -41);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(69, -41);
    glVertex2i(73, -41);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(73, -41);
    glVertex2i(73, -27);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(73, -27);
    glVertex2i(69, -27);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(73, -30);
    glVertex2i(69, -30);
    glEnd();

    //pintu buat lantai 1
    glColor3f(0.8, 0.2, 0.3);
    glBegin(GL_QUADS);
    glVertex2i(64, -27);
    glVertex2i(64, -59);
    glVertex2i(68, -59);
    glVertex2i(68, -27);
    glEnd();

    //jendela buat lantai 1
    glColor3f(0.3, 0.4, 0.5);
    glBegin(GL_QUADS);
    glVertex2i(64, -27);
    glVertex2i(64, -30);
    glVertex2i(68, -30);
    glVertex2i(68, -27);
    glEnd();

    //bingkai jendela
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(64, -30);
    glVertex2i(64, -27);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(64, -27);
    glVertex2i(68, -27);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(68, -27);
    glVertex2i(68, -30);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(68, -30);
    glVertex2i(64, -30);
    glEnd();

    glColor3f(0.3, 0.4, 0.5);
    glBegin(GL_QUADS);
    glVertex2i(56, -49);
    glVertex2i(56, -27);
    glVertex2i(62, -27);
    glVertex2i(62, -49);
    glEnd();

    //bingkai jendela
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(56, -49);
    glVertex2i(56, -27);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(56, -27);
    glVertex2i(62, -27);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(62, -27);
    glVertex2i(62, -49);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(62, -49);
    glVertex2i(56, -49);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(62, -30);
    glVertex2i(56, -30);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(59, -49);
    glVertex2i(59, -27);
    glEnd();


    //kamar pangkal
    //lantai 2

    //jendela

    glColor3f(0.3, 0.4, 0.5);
    glBegin(GL_QUADS);
    glVertex2i(29, 2);
    glVertex2i(29, 15);
    glVertex2i(33, 15);
    glVertex2i(33, 2);
    glEnd();

    //bingkai jendela
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(29, 2);
    glVertex2i(29, 15);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(29, 15);
    glVertex2i(33, 15);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(33, 15);
    glVertex2i(33, 2);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(33, 2);
    glVertex2i(29, 2);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(33, 12);
    glVertex2i(29, 12);
    glEnd();

    //pintu buat lantai 2
    glColor3f(0.8, 0.2, 0.3);
    glBegin(GL_QUADS);
    glVertex2i(24, 15);
    glVertex2i(24, -19);
    glVertex2i(28, -19);
    glVertex2i(28, 15);
    glEnd();

    //jendela buat lantai 2
    glColor3f(0.3, 0.4, 0.5);
    glBegin(GL_QUADS);
    glVertex2i(24, 15);
    glVertex2i(24, 12);
    glVertex2i(28, 12);
    glVertex2i(28, 15);
    glEnd();

    //bingkai jendela
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(24, 12);
    glVertex2i(24, 15);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(24, 15);
    glVertex2i(28, 15);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(28, 15);
    glVertex2i(28, 12);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(28, 12);
    glVertex2i(24, 12);
    glEnd();

    glColor3f(0.3, 0.4, 0.5);
    glBegin(GL_QUADS);
    glVertex2i(16, -7);
    glVertex2i(16, 15);
    glVertex2i(22, 15);
    glVertex2i(22, -7);
    glEnd();

    //bingkai jendela
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(16, -7);
    glVertex2i(16, 15);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(26, 15);
    glVertex2i(22, 15);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(22, 15);
    glVertex2i(22, -7);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(22, -7);
    glVertex2i(16, -7);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(22, 12);
    glVertex2i(16, 12);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(19, -7);
    glVertex2i(19, 15);
    glEnd();

    //lantai 3

    //jendela

    glColor3f(0.3, 0.4, 0.5);
    glBegin(GL_QUADS);
    glVertex2i(29, 34);
    glVertex2i(29, 47);
    glVertex2i(33, 47);
    glVertex2i(33, 34);
    glEnd();

    //bingkai jendela
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(29, 34);
    glVertex2i(29, 47);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(29, 47);
    glVertex2i(33, 47);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(33, 47);
    glVertex2i(33, 34);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(33, 34);
    glVertex2i(29, 34);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(33, 44);
    glVertex2i(29, 44);
    glEnd();

    //pintu buat lantai 3
    glColor3f(0.8, 0.2, 0.3);
    glBegin(GL_QUADS);
    glVertex2i(24, 21);
    glVertex2i(24, 47);
    glVertex2i(28, 47);
    glVertex2i(28, 21);
    glEnd();

    //jendela buat lantai 3
    glColor3f(0.3, 0.4, 0.5);
    glBegin(GL_QUADS);
    glVertex2i(24, 47);
    glVertex2i(24, 44);
    glVertex2i(28, 44);
    glVertex2i(28, 47);
    glEnd();

    //bingkai jendela
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(24, 44);
    glVertex2i(24, 47);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(24, 47);
    glVertex2i(28, 47);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(28, 47);
    glVertex2i(28, 44);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(28, 44);
    glVertex2i(24, 44);
    glEnd();

    glColor3f(0.3, 0.4, 0.5);
    glBegin(GL_QUADS);
    glVertex2i(16, 29);
    glVertex2i(16, 47);
    glVertex2i(22, 47);
    glVertex2i(22, 29);
    glEnd();

    //bingkai jendela
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(16, 29);
    glVertex2i(16, 47);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(26, 47);
    glVertex2i(22, 47);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(22, 29);
    glVertex2i(22, 47);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(22, 47);
    glVertex2i(16, 47);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(22, 44);
    glVertex2i(16, 44);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(19, 29);
    glVertex2i(19, 47);
    glEnd();

    //Balkon
    //lantai 3
    glColor3f(0.5, 0.5, 0.5);
    glBegin(GL_QUADS);
    glVertex2i(20, 21);
    glVertex2i(20, 30);
    glVertex2i(47, 30);
    glVertex2i(47, 21);
    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINES);
    glVertex2i(46, 30);
    glVertex2i(46, 40);
    glVertex2i(46, 40);
    glVertex2i(21, 40);
    glVertex2i(21, 40);
    glVertex2i(21, 30);
    glVertex2i(26, 40);
    glVertex2i(26, 30);
    glVertex2i(31, 40);
    glVertex2i(31, 30);
    glVertex2i(36, 40);
    glVertex2i(36, 30);
    glVertex2i(41, 40);
    glVertex2i(41, 30);
    glEnd();

    glColor3f(0.5, 0.5, 0.5);
    glBegin(GL_QUADS);
    glVertex2i(66, 21);
    glVertex2i(66, 30);
    glVertex2i(76, 30);
    glVertex2i(76, 21);
    glColor3f(0.4, 0.4, 0.4);
    glVertex2i(66, 21);
    glVertex2i(66, 30);
    glVertex2i(64, 30);
    glVertex2i(64, 21);
    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINES);
    glVertex2i(76, 30);
    glVertex2i(76, 40);
    glVertex2i(76, 40);
    glVertex2i(66, 40);
    glVertex2i(66, 40);
    glVertex2i(66, 30);
    glVertex2i(71, 40);
    glVertex2i(71, 30);
    glVertex2i(76, 40);
    glVertex2i(76, 30);
    glVertex2i(66, 40);
    glVertex2i(66, 30);
    glVertex2f(64.5, 30.0);
    glVertex2f(64.5, 40.0);
    glVertex2f(64.5, 40.0);
    glVertex2f(66, 40.0);
    glEnd();

    //lantai 2
    glColor3f(0.5, 0.5, 0.5);
    glBegin(GL_QUADS);
    glVertex2i(20, -10);
    glVertex2i(20, -19);
    glVertex2i(47, -19);
    glVertex2i(47, -10);
    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINES);
    glVertex2i(46, -10);
    glVertex2i(46, 0);
    glVertex2i(46, 0);
    glVertex2i(21, 0);
    glVertex2i(21, 0);
    glVertex2i(21, -10);
    glVertex2i(26, 0);
    glVertex2i(26, -10);
    glVertex2i(31, 0);
    glVertex2i(31, -10);
    glVertex2i(36, 0);
    glVertex2i(36, -10);
    glVertex2i(41, 0);
    glVertex2i(41, -10);
    glEnd();

    glColor3f(0.5, 0.5, 0.5);
    glBegin(GL_QUADS);
    glVertex2i(66, -10);
    glVertex2i(66, -19);
    glVertex2i(76, -19);
    glVertex2i(76, -10);
    glColor3f(0.4, 0.4, 0.4);
    glVertex2i(66, -10);
    glVertex2i(66, -19);
    glVertex2i(64, -19);
    glVertex2i(64, -10);
    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINES);
    glVertex2i(76, -10);
    glVertex2i(76, 0);
    glVertex2i(76, 0);
    glVertex2i(66, 0);
    glVertex2i(66, 0);
    glVertex2i(66, -10);
    glVertex2i(71, 0);
    glVertex2i(71, -10);
    glVertex2i(76, 0);
    glVertex2i(76, -10);
    glVertex2i(66, 0);
    glVertex2i(66, -10);
    glVertex2f(64.5, -10.0);
    glVertex2f(64.5, 0);
    glVertex2f(64.5, 0);
    glVertex2f(66, 0);
    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINES);
    glVertex2i(76, -60);
    glVertex2i(76, -50);
    glVertex2i(76, -50);
    glVertex2i(66, -50);
    glVertex2i(66, -50);
    glVertex2i(66, -60);
    glVertex2i(71, -50);
    glVertex2i(71, -60);
    glVertex2i(76, -50);
    glVertex2i(76, -60);
    glVertex2i(66, -50);
    glVertex2i(66, -60);
    glVertex2f(64.5, -60.0);
    glVertex2f(64.5, -50);
    glVertex2f(64.5, -50);
    glVertex2f(66, -50);
    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINES);
    glVertex2i(46, -60);
    glVertex2i(46, -50);
    glVertex2i(46, -50);
    glVertex2i(36, -50);
    glVertex2i(36, -50);
    glVertex2i(36, -60);
    glVertex2i(41, -50);
    glVertex2i(41, -60);
    glVertex2i(46, -50);
    glVertex2i(46, -60);
    glVertex2i(36, -50);
    glVertex2i(36, -60);
    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINES);
    glVertex2i(40, -60);
    glVertex2i(40, -50);
    glVertex2i(40, -50);
    glVertex2i(20, -50);
    glVertex2i(20, -50);
    glVertex2i(20, -60);
    glVertex2i(30, -50);
    glVertex2i(30, -60);
    glVertex2i(40, -50);
    glVertex2i(40, -60);
    glVertex2i(20, -50);
    glVertex2i(20, -60);
    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINES);
    glVertex2i(-40, -60);
    glVertex2i(-40, -50);
    glVertex2i(-40, -50);
    glVertex2i(-20, -50);
    glVertex2i(-20, -50);
    glVertex2i(-20, -60);
    glVertex2i(-30, -50);
    glVertex2i(-30, -60);
    glVertex2i(-40, -50);
    glVertex2i(-40, -60);
    glVertex2i(-20, -50);
    glVertex2i(-20, -60);
    glEnd();

    //tangga bawah
    glColor3f(0.9, 0.9, 0.9);
    glBegin(GL_QUADS);
    glVertex2i(-22, -58);
    glVertex2i(22, -58);
    glVertex2i(24, -64);
    glVertex2i(-24, -64);
    glEnd();

}

void atap_pinggiran(){
    glColor3f(0.9, 0.9, 0.9);
    glBegin(GL_LINES);
    glVertex2i(-18, 55);
    glVertex2i(-79, 55);
    glEnd();

    glColor3f(0.7, 0.7, 0.7);
    glBegin(GL_QUADS);
    glVertex2i(-18, 54);
    glVertex2i(-79, 54);
    glVertex2i(-75, 50);
    glVertex2i(-18, 50);
    glEnd();

    glColor3f(0.9, 0.9, 0.9);
    glBegin(GL_LINES);
    glVertex2i(18, 55);
    glVertex2i(79, 55);
    glEnd();

    glColor3f(0.7, 0.7, 0.7);
    glBegin(GL_QUADS);
    glVertex2i(18, 54);
    glVertex2i(79, 54);
    glVertex2i(75, 50);
    glVertex2i(18, 50);
    glEnd();

    //logo atap
    glColor3f(0.3, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex2i(3, 79);
    glVertex2i(-3, 79);
    glVertex2i(-3, 69);
    glVertex2i(3, 69);
    glEnd();

    glColor3f(1.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2i(-3, 79);
    glVertex2i(0, 77);
    glVertex2i(0, 74);
    glVertex2i(-3, 72);
    glEnd();

    glColor3f(1.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2i(3, 79);
    glVertex2i(1, 75);
    glVertex2i(1, 71);
    glVertex2i(3, 69);
    glEnd();


    glColor3f(1.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2i(-2, 69);
    glVertex2i(-1, 71);
    glVertex2i(0, 72);
    glVertex2i(0, 69);
    glEnd();
}

void display(void) {
    glLineWidth(3);
    glClear(GL_COLOR_BUFFER_BIT);

    langit_tanah();
    rangka_dasar();
    bingkai_atap();
    interior_pintudepan();
    interior_gedungkiri();
    interior_gedungkanan();
    luaran_pintu_depan();
    atap_pinggiran();


 glutSwapBuffers(); }
