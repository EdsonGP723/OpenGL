
/*
 * OGL01Shape3D.cpp: 3D Shapes
 */
#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

 /* Global variables */
    char title[] = "3D Shapes";
    GLfloat anglePyramid = 0.0f;

/* Initialize OpenGL Graphics */
void initGL() {
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
    glClearDepth(1.0f);                   // Set background depth to farthest
    glEnable(GL_DEPTH_TEST);   // Enable depth testing for z-culling
    glDepthFunc(GL_LEQUAL);    // Set the type of depth-test
    glShadeModel(GL_SMOOTH);   // Enable smooth shading
    glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);  // Nice perspective corrections
}

/* Handler for window-repaint event. Called back when the window first appears and
   whenever the window needs to be re-painted. */
void display() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); // Clear color and depth buffers
    glMatrixMode(GL_MODELVIEW);     // To operate on model-view matrix

    // Render a pyramid consists of 4 triangles
    glLoadIdentity();                  // Reset the model-view matrix
    glTranslatef(0.0f, 0.0f, -25.0f);  // Move left and into the screen
    glRotatef(anglePyramid, 0.0f, 1.0f, 0.0f);

    glBegin(GL_TRIANGLES); // Begin drawing the pyramid with 4 triangles

    // Centro
    glColor3f(1.0f, 0.0f, 0.0f);  
    glVertex3f(3.78f, -3.5f, 0.0f);
    glVertex3f(1.85f, 2.24f, -3.23f);
    glVertex3f(-1.91f, -3.5f, -3.29f);

    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex3f(-1.91f, -3.5f, -3.29f);
    glVertex3f(1.85f, 2.24f, -3.23f);
    glVertex3f(-3.74f, 2.24f, 0.0f);

    glColor3f(1.0f, 0.0f, 1.0f);
    glVertex3f(-1.91f, -3.5f, -3.29f);
    glVertex3f(-3.74f, 2.24f, 0.0f);
    glVertex3f(-1.91f, -3.5f, 3.29f);

    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex3f(-1.91f, -3.5f, 3.29f);
    glVertex3f(-3.74f, 2.24f, 0.0f);
    glVertex3f(1.85f, 2.24f, 3.23f);

    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex3f(-1.91f, -3.5f, 3.29f);
    glVertex3f(1.85f, 2.24f, 3.23f);
    glVertex3f(3.78f, -3.5f, 0.0f);

    glColor3f(0.0f, 1.0f, 1.0f);
    glVertex3f(3.78f, -3.5f, 0.0f);
    glVertex3f(1.85f, 2.24f, 3.23f);
    glVertex3f(1.85f, 2.24f, -3.23f);

    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex3f(1.85f, 2.24f, 3.23f);
    glVertex3f(-3.74f, 2.24f, 0.0f);
    glVertex3f(1.85f, 2.24f, -3.23f);

    glColor3f(0.5f, 1.0f, 1.0f);
    glVertex3f(-1.91f, -3.5f, 3.29f);
    glVertex3f(3.78f, -3.5f, 0.0f);
    glVertex3f(-1.91f, -3.5f, -3.29f);

    //PIRAMIDE SUPERIOR
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex3f(1.85f, 2.25f, 3.23f);
    glVertex3f(-3.74f, 2.25f, 0.0f);
    glVertex3f(1.85f, 2.25f, -3.23f);

    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex3f(-3.74f, 2.25f, 0.0f);
    glVertex3f(0.0f, 7.0f, 0.0f);
    glVertex3f(1.85f, 2.25f, 3.23f);

    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex3f(1.85f, 2.24f, 3.23f);
    glVertex3f(0.0f, 7.0f, 0.0f);
    glVertex3f(1.85f, 2.25f, -3.23f);

    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex3f(1.85f, 2.25f, -3.23f);
    glVertex3f(0.0f, 7.0f, 0.0f);
    glVertex3f(-3.74f, 2.25f, 0.0f);

    //PIRAMIDE DERECHA
    glColor3f(1.0f, 0.0f, 1.0f);
    glVertex3f(3.78f, -3.5f, -0.1f);
    glVertex3f(1.85f, 2.25f, -3.25f);
    glVertex3f(-1.91f, -3.5f, -3.31f);

    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex3f(3.78f, -3.5f, -0.1f);
    glVertex3f(1.85f, 2.25f, -3.25f);
    glVertex3f(4.0f, -3.5f, -6.0f);

    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex3f(-1.91f, -3.5f, -3.31f);
    glVertex3f(1.85f, 2.25f, -3.25f);
    glVertex3f(4.0f, -3.5f, -6.0f);

    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex3f(3.78f, -3.5f, -0.1f);
    glVertex3f(4.0f, -3.5f, -6.0f);
    glVertex3f(-1.91f, -3.5f, -3.31f);
    
    //PIRAMIDE IZQUIERDA
    glColor3f(1.0f, 0.0f, 1.0f);
    glVertex3f(-1.91f, -3.5f, 3.31f);
    glVertex3f(1.85f, 2.25f, 3.25f);
    glVertex3f(3.78f, -3.5f, 0.1f);

    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex3f(3.78f, -3.5f, 0.1f);
    glVertex3f(1.85f, 2.25f, 3.25f);
    glVertex3f(4.0f, -3.5f, 6.0f);

    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex3f(-1.91f, -3.5f, 3.31f);
    glVertex3f(1.85f, 2.25f, 3.25f);
    glVertex3f(4.0f, -3.5f, 6.0f);

    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex3f(3.78f, -3.5f, 0.1f);
    glVertex3f(4.0f, -3.5f, 6.0f);
    glVertex3f(-1.91f, -3.5f, 3.31f);

    //PIRAMIDE TRASERA
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex3f(-1.90f, -3.5f, -3.31f);
    glVertex3f(-3.73f, 2.24f, 0.0f);
    glVertex3f(-1.90f, -3.5f, 3.31f);

    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex3f(-1.90f, -3.5f, -3.31f);
    glVertex3f(-3.73f, 2.24f, 0.0f);
    glVertex3f(-7.6f, -3.5f, 0.5f);   

    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex3f(-7.6f, -3.5f, 0.5f);
    glVertex3f(-3.73f, 2.24f, 0.0f);
    glVertex3f(-1.90f, -3.5f, 3.31f);

    glColor3f(0.0f, 1.0f, 1.0f);
    glVertex3f(-1.90f, -3.5f, -3.31f);
    glVertex3f(-7.6f, -3.5f, 0.5f);
    glVertex3f(-1.90f, -3.5f, 3.31f);
    
    
    


    glEnd();  // Done drawing the pyramid

    glutSwapBuffers();  // Swap the front and back frame buffers (double buffering)
}

void update(int value) {
    anglePyramid += 1.5f;

    glutPostRedisplay();
    glutTimerFunc(16, update, 0);
}

/* Handler for window re-size event. Called back when the window first appears and
   whenever the window is re-sized with its new width and height */
void reshape(GLsizei width, GLsizei height) {  // GLsizei for non-negative integer
    // Compute aspect ratio of the new window
    if (height == 0) height = 1;                // To prevent divide by 0
    GLfloat aspect = (GLfloat)width / (GLfloat)height;

    // Set the viewport to cover the new window
    glViewport(0, 0, width, height);

    // Set the aspect ratio of the clipping volume to match the viewport
    glMatrixMode(GL_PROJECTION);  // To operate on the Projection matrix
    glLoadIdentity();             // Reset
    // Enable perspective projection with fovy, aspect, zNear and zFar
    gluPerspective(45.0f, aspect, 0.1f, 100.0f);
}

/* Main function: GLUT runs as a console application starting at main() */
int main(int argc, char** argv) {
    glutInit(&argc, argv);            // Initialize GLUT
    glutInitDisplayMode(GLUT_DOUBLE); // Enable double buffered mode
    glutInitWindowSize(640, 480);   // Set the window's initial width & height
    glutInitWindowPosition(50, 50); // Position the window's initial top-left corner
    glutCreateWindow(title);          // Create window with the given title
    glutDisplayFunc(display);       // Register callback handler for window re-paint event
    glutReshapeFunc(reshape);       // Register callback handler for window re-size event
    initGL();                       // Our own OpenGL initialization
    glutTimerFunc(25, update, 0);
    glutMainLoop();                 // Enter the infinite event-processing loop
    return 0;
}
