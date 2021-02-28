/*
* GL02Primitive.cpp: Vertex, Primitive and Color
* Draw Simple 2D colored Shapes: quad, triangle and polygon.
*/
#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

/* Initialize OpenGL Graphics */
void initGL() {
	// Set "clearing" or background color
	glClearColor(0.960f, 0.960f, 0.960f, 0.960f); // Black and opaque
}

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
	glClear(GL_COLOR_BUFFER_BIT);   // Clear the color buffer with current clearing color

    // back part
	glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.2424242452f, 0.4583333297f);
	glVertex2f(-0.272727276f, 0.4583333297f);
	glVertex2f(-0.2727272759f, -0.4166666634f);//(-9,-10)
	glVertex2f(0.2424242452f, -0.4166666634f);//(8,-10)
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.4545454601f, 0.1666666656f);//(15,4)
	glVertex2f(-0.4848484908f, 0.1666666656f);
	glVertex2f(-0.4848484908f,  -0.1249999993f);
	glVertex2f(0.4545454601f, -0.1249999993f);//(15,-3)
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.2727272759f, 0.4166666634f);//(9,10)
	glVertex2f(-0.3030303066f, 0.4166666634f);//(-10,10)
	glVertex2f(-0.3030303066f, -0.3749999971f);//(-10,-9)
	glVertex2f(0.2727272759f, -0.3749999971f);//(9,-9)
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.3030303066f, 0.3749999971f);//(10,9)
    glVertex2f(-0.3333333373f, 0.3749999971f);//(-11,9)
	glVertex2f(-0.3333333373f,-0.3333333308f);//(-11,-8)
	glVertex2f(0.3030303066f, -0.3333333308f);//(10,-8)
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.3333333373f, 0.3333333308f);//(11, 8)
    glVertex2f(-0.363636368f, 0.3333333308f);//(-12,8)
    glVertex2f(-0.363636368f, -0.2916666645f);//(-12,-7)
    glVertex2f(0.3333333373f, -0.2916666645f);//(11,-7)
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.363636368f, 0.2916666645f);//(12,7)
    glVertex2f(-0.3939393987f, 0.2916666645f);//(-13,7)
	glVertex2f(-0.3939393987f, -0.2499999982f);//(-13,-6)
	glVertex2f(0.363636368f, -0.2499999982f);//(12,-6)
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.3939393987f, 0.2499999982f);//(13,6)
    glVertex2f(-0.4242424294f, 0.2499999982f);//(-14,6)
	glVertex2f(-00.4242424294f, -0.2083333319f);//(-14,-5)
	glVertex2f(0.3939393987f, -0.2083333319f);//(13,-5)
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.4242424294f, 0.2083333319f);//(14,5)
	glVertex2f(-0.4545454601f, 0.2083333319f);//(-15,5)
	glVertex2f(-0.4545454601f, -0.1666666656f);//(-15,-4)
	glVertex2f(0.4242424294f, -0.1666666656f);//(14,-4)
    glEnd();

    // y part
    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.843f, 0.0f);
    glVertex2f(0.2424242452f, 0.4166666634f);//(8,10)
    glVertex2f(-0.2727272759f, 0.4166666634f);//(-9,10)
	glVertex2f(-0.2727272759f, -0.3749999971f);//(-9,-9)
	glVertex2f(0.2424242452f, -0.3749999971f);//(8,-9)
    glEnd();

    glBegin(GL_QUADS);
     glColor3f(1.0f, 0.843f, 0.0f);
    glVertex2f(0.2727272759f, 0.3749999971f);//(9,9)
    glVertex2f(-0.3030303066f, 0.3749999971f);//(-10,9)
	glVertex2f(-0.3030303066f, -0.3333333308f);//(-9,-8)
	glVertex2f(0.2727272759f, -0.3333333308f);//(9,-8)
    glEnd();

    glBegin(GL_QUADS);
     glColor3f(1.0f, 0.843f, 0.0f);
    glVertex2f(0.3030303066f, 0.3333333308f);//(10,8)
    glVertex2f(-0.3333333373f, 0.3333333308f);//(-11,8)
	glVertex2f(-0.3333333373f, -0.2916666645f);//(-9,-8)
	glVertex2f(0.3030303066f, -0.2916666645f);//(10,-8)
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.843f, 0.0f);
    glVertex2f(0.3333333373f, 0.2916666645f);//(11,7)
    glVertex2f(-0.363636368f, 0.2916666645f);//(-12,7)
	glVertex2f(-0.363636368f, -0.2499999982f);//(-12,-6)
	glVertex2f(0.3333333373f, -0.2499999982f);//(11,-6)
    glEnd();

    glBegin(GL_QUADS);
     glColor3f(1.0f, 0.843f, 0.0f);
    glVertex2f(0.363636368f, 0.2499999982f);//(12,6)
    glVertex2f(-0.3939393987f, 0.2499999982f);//(-13,6)
	glVertex2f(-0.3939393987f, -0.2083333319f);//(-13,-6)
	glVertex2f(0.363636368f, -0.2083333319f);//(11,-6)
    glEnd();

    glBegin(GL_QUADS);
     glColor3f(1.0f, 0.843f, 0.0f);
    glVertex2f(0.3939393987f, 0.2083333319f);//(13,5)
    glVertex2f(-0.4242424294f, 0.2083333319f);//(-14,5)
	glVertex2f(-0.4242424294f, -0.1666666656f);//(-14,-4)
	glVertex2f(0.3939393987f,-0.1666666656f);//(11,-4)
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.843f, 0.0f);
    glVertex2f(0.4242424294f, 0.1666666656f);//(14,4)
    glVertex2f(-0.4545454601f, 0.1666666656f);//(-15,4)
	glVertex2f(-0.4545454601f, -0.1249999993f);//(-15,-3)
	glVertex2f(0.4242424294f,-0.1249999993f);//(14,-3)
    glEnd();

    //bat
    glBegin(GL_QUADS);
    glColor3f(0.125f, 0.125f, 0.125f);
    glVertex2f(0.3939393987f, 0.1249999993f);//(13,3)
    glVertex2f(-0.4242424294f, 0.1249999993f);//(-14,3)
	glVertex2f(-0.4242424294f, -0.083333333f);//(-14,,-2)
	glVertex2f(0.3939393987f,-0.083333333f);//(13,-2)
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.125f, 0.125f, 0.125f);
    glVertex2f(0.060606061f, 0.3333333308f);//(2,8)
    glVertex2f(-0.0909090917f, 0.3333333308f);//(-3,8)
	glVertex2f(-0.0909090917f, -0.2083333319f);//(-14,,-2)
	glVertex2f(0.060606061f,-0.2083333319f);//(2,-2)
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.125f, 0.125f, 0.125f);
    glVertex2f(-0.1818181838f,0.3333333308f);//(-6,8)
    glVertex2f(-0.2727272759f,0.3333333308f);//(-9,8)
    glVertex2f(-0.2727272759f,0.2916666645f);//(-9,7)
    glVertex2f(-0.1818181838f,0.2916666645f);//(-6,7)
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.125f, 0.125f, 0.125f);
    glVertex2f(-0.2121212145f,0.2916666645f);//(-7,7)
    glVertex2f(-0.3030303066f,0.2916666645f);//(-10,7)
    glVertex2f(-0.3030303066f,0.1249999993f);//(-9,7)
    glVertex2f(-0.2121212145f,0.1249999993f);//(-7,7)
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.125f, 0.125f, 0.125f);
    glVertex2f(-0.1818181838f,0.1666666656f);//(-6,4)
    glVertex2f(-0.3939393987f,0.1666666656f);//(-13,4)
    glVertex2f(-0.3939393987f,0.1249999993f);//(-13,3)
    glVertex2f(-0.1818181838f,0.1249999993f);//(-6,3)
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.125f, 0.125f, 0.125f);
    glVertex2f(-0.1818181838f,0.1666666656f);//(-6,4)
    glVertex2f(-0.3939393987f,0.1666666656f);//(-13,4)
    glVertex2f(-0.3939393987f,0.1249999993f);//(-13,3)
    glVertex2f(-0.1818181838f,0.1249999993f);//(-6,3)
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.125f, 0.125f, 0.125f);
    glVertex2f(-0.2121212145f, 0.2083333319f);//(-7,5)
    glVertex2f(-0.363636368f, 0.2083333319f);//(-12,5)
    glVertex2f(-0.363636368f,0.1249999993f);//(-12,3)
    glVertex2f(-0.2121212145f,0.1249999993f);//(-7,3)
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.125f, 0.125f, 0.125f);
    glVertex2f(-0.2121212145f,0.2499999982f);//(-7,6)
    glVertex2f(-0.3333333373f, 0.2499999982f);//(-11,6)
    glVertex2f(-0.3333333373f,0.1249999993f);//(-11,4)
    glVertex2f(-0.2121212145f,0.1249999993f);//(-7,4)
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.125f, 0.125f, 0.125f);
    glVertex2f(-0.2121212145f,0.2499999982f);//(-7,6)
    glVertex2f(-0.3333333373f, 0.2499999982f);//(-11,6)
    glVertex2f(-0.3333333373f,0.1249999993f);//(-11,4)
    glVertex2f(-0.2121212145f,0.1249999993f);//(-7,4)
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.125f, 0.125f, 0.125f);
    glVertex2f(-0.1212121224f,0.1666666656f);//(-4,4)
    glVertex2f(0.0909090917f, 0.1666666656f);//(3,4)
    glVertex2f(0.0909090917f,0.1249999993f);//(3,3)
    glVertex2f(-0.1212121224f,0.1249999993f);//(-4,3)
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.125f, 0.125f, 0.125f);
    glVertex2f(0.363636368f, -0.083333333f);//(12,-2)
    glVertex2f(-0.3939393987f, -0.083333333f);//(-13,-2)
    glVertex2f(-0.3939393987f,-0.1249999993f);//(-13,-3)
    glVertex2f(0.363636368f,-0.1249999993f);//(12,-3)
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.125f, 0.125f, 0.125f);
    glVertex2f(0.3333333373f,-0.1249999993f);//(11,-3)
    glVertex2f(-0.363636368f,-0.1249999993f);//(-12,-3)
    glVertex2f(-0.363636368f, -0.1666666656f);//(-12,-4)
    glVertex2f(0.3333333373f,-0.1666666656f);//(11,-4)
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.125f, 0.125f, 0.125f);
    glVertex2f(-0.3333333373f,-0.1666666656f);//(-11,-4)
    glVertex2f(-0.1212121224f, -0.1666666656f);//(-4,-4)
    glVertex2f(-0.1212121224f,-0.2083333319f);//(-4,-5)
    glVertex2f(-0.3333333373f,-0.2083333319f);//(-11,-5)
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.125f, 0.125f, 0.125f);
    glVertex2f(-0.1515151531f,-0.2083333319f);//(-5,-5)
    glVertex2f(-0.3030303066f, -0.2083333319f);//(-10,-5)
    glVertex2f(-0.3030303066f,-0.2499999982f);//(-10,-6)
    glVertex2f(-0.1515151531f,-0.2499999982f);//(-5,-6)
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.125f, 0.125f, 0.125f);
    glVertex2f(-0.1818181838f,-0.2499999982f);//(-6,-6)
    glVertex2f(-0.2727272759f, -0.2499999982f);//(-9,-6)
    glVertex2f(-0.2727272759f,-0.2916666645f);//(-9,-7)
    glVertex2f(-0.1818181838f,-0.2916666645f);//(-6,-7)
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.125f, 0.125f, 0.125f);
    glVertex2f(-0.1818181838f,-0.2916666645f);//(-6,-7)
    glVertex2f(-0.2121212145f,-0.2916666645f);//(-9,-7)
    glVertex2f(-0.2121212145f, -0.3333333308f);//(-9,-6)
    glVertex2f(-0.1818181838f,-0.3333333308f);//(-6,-6)
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.125f, 0.125f, 0.125f);
    glVertex2f(0.0303030303f,-0.2083333319f);//(1,-5)
    glVertex2f(-0.060606061f,-0.2083333319f);//(-2,-5)
    glVertex2f(-0.060606061f, -0.2916666645f);//(-2,-7)
    glVertex2f(0.0303030303f,-0.2916666645f);//(1,-7)
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.125f, 0.125f, 0.125f);
    glVertex2f(0.00000f,-0.2916666645f);//(0,-7)
    glVertex2f(-0.0303030303f,-0.2916666645f);//(-1,-7)
    glVertex2f(-0.0303030303f, -0.3333333308f);//(-1,-8)
    glVertex2f(0.00000f,-0.3333333308f);//(0,-8)
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.125f, 0.125f, 0.125f);
    glVertex2f(0.3030303066f,-0.1666666656f);//(10,-4)
    glVertex2f(0.0909090917f,-0.1666666656f);//(3,-4)
    glVertex2f(0.0909090917f, -0.2083333319f);//(3,-8)
    glVertex2f(0.3030303066f,-0.2083333319f);//(10,-8)
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.125f, 0.125f, 0.125f);
    glVertex2f(0.2727272759f,-0.2083333319f);//(9,-5)
    glVertex2f(0.1212121224f,-0.2083333319f);//(3,-5)
    glVertex2f(0.1212121224f, -0.2499999982f);//(3,-6)
    glVertex2f(0.2727272759f,-0.2499999982f);//(9,-6)
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.125f, 0.125f, 0.125f);
    glVertex2f(0.2424242452f,-0.2499999982f);//(8,-6)
    glVertex2f(0.1515151531f,-0.2499999982f);//(5,-6)
    glVertex2f(0.1515151531f, -0.2916666645f);//(5,-7)
    glVertex2f(0.2424242452f,-0.2916666645f);//(8,-7)
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.125f, 0.125f, 0.125f);
    glVertex2f(0.1818181838f,-0.2916666645f);//(6,-7)
    glVertex2f(0.1515151531f,-0.2916666645f);//(5,-7)
    glVertex2f(0.1515151531f, -0.3333333308f);//(5,-8)
    glVertex2f(0.1818181838f,-0.3333333308f);//(6,-8)
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.125f, 0.125f, 0.125f);
    glVertex2f(0.363636368f,0.1666666656f);//(12,4)
    glVertex2f(0.1515151531f,0.1666666656f);//(5,4)
    glVertex2f(0.1515151531f, 0.1249999993f);//(5,3)
    glVertex2f(0.363636368f,0.1249999993f);//(12,3)
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.125f, 0.125f, 0.125f);
    glVertex2f(0.3333333373f,0.2083333319f);//(11,5)
    glVertex2f(0.1818181838f,0.2083333319f);//(5,5)
    glVertex2f(0.1818181838f, 0.1666666656f);//(5,4)
    glVertex2f(0.3333333373f,0.1666666656f);//(11,4)
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.125f, 0.125f, 0.125f);
    glVertex2f(0.3030303066f,0.2499999982f);//(10,6)
    glVertex2f(0.1818181838f,0.2499999982f);//(6,6)
    glVertex2f(0.1818181838f, 0.1666666656f);//(6,5)
    glVertex2f(0.3030303066f,0.1666666656f);//(10,5)
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.125f, 0.125f, 0.125f);
    glVertex2f(0.2727272759f,0.2916666645f);//(9,7)
    glVertex2f(0.1818181838f,0.2916666645f);//(6,7)
    glVertex2f(0.1818181838f,0.2499999982f);//(6,6)
    glVertex2f(0.2727272759f,0.2499999982f);//(9,6)
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.125f, 0.125f, 0.125f);
    glVertex2f(0.2424242452f,0.3333333308f);//(8,8)
    glVertex2f(0.1515151531f,0.3333333308f);//(5,8)
    glVertex2f(0.1515151531f,0.2916666645f);//(5,7)
    glVertex2f(0.2424242452f,0.2916666645f);//(8,7)
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.125f, 0.125f, 0.125f);
    glVertex2f(-0.060606061f,0.3749999971f);//(-2,9)
    glVertex2f(-0.0909090917f,0.3749999971f);//(-3,9)
    glVertex2f(-0.0909090917f,0.3333333308f);//(-3,8)
    glVertex2f(-0.060606061f,0.3333333308f);//(-2,8)
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.125f, 0.125f, 0.125f);
    glVertex2f(0.060606061f,0.3749999971f);//(-2,9)
    glVertex2f(0.0303030303f,0.3749999971f);//(-3,9)
    glVertex2f(0.0303030303f,0.3333333308f);//(-3,8)
    glVertex2f(0.060606061f,0.3333333308f);//(-2,8)
    glEnd();



	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);          // Initialize GLUT
	glutCreateWindow("Batman Logo");  // Create window with the given title
	glutInitWindowSize(1920, 1080);   // Set the window's initial width & height
	glutInitWindowPosition(100, 50); // Position the window's initial top-left corner
	glutDisplayFunc(display);       // Register callback handler for window re-paint event
	initGL();                       // Our own OpenGL initialization
	glutMainLoop();                 // Enter the event-processing loop
	return 0;
}
