#include "catchtheball.h"

int pcResult = 0;

void Render()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    sprintf(string,"PC : %d ",pcResult);
    drawText(string, 10, 80);
    sprintf(string," Player : %d", playerResult);
    drawText(string,10,120);

    wall.left = wall.top = 0;
    wall.right = WINDOW_WIDTH ;
    wall.bottom = WINDOW_HEIGHT;

    DrawRectangle(ball);
    
    if(Test_Ball_Wall(ball, wall) == FROM_RIGHT)
        Xspeed = -delta;
    
    if(Test_Ball_Wall(ball, wall) == FROM_LEFT)
        Xspeed = delta;

    if(Test_Ball_Wall(ball, wall) == FROM_TOP)
        Yspeed = delta;

    if(Test_Ball_Wall(ball, wall) == FROM_BOTTOM)
    {
        Yspeed = -delta;
        pcResult += 1;
    }

    DrawRectangle(player_1);
    player_1.left = mouse_x - 20;
    player_1.right = mouse_x + 40;

    if(Test_Ball_Player(ball, player_1) == true)
        Yspeed = -delta;
    
    glutSwapBuffers();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(795, 500);
    glutInitWindowPosition(0, 0);
    glutCreateWindow("OpenGL Game");
    
    Settings();
    
    glutDisplayFunc(Render);
    glutIdleFunc(Render);
    
    glutTimerFunc(1, Timer, 1);
    
    glutReshapeFunc(reshape);
    
    glutKeyboardFunc(keyboard);

    glutSpecialFunc(inputKey);

    glutPassiveMotionFunc(MouseMotion);

    glutMainLoop();
    return 0;
}