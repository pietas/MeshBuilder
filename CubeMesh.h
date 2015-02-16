#include <GL\glut.h>

class CubeMesh
{
private:
	GLfloat mWidth;
	GLfloat mHeight;
	GLfloat mDepth;
	bool createMesh();

public:
	CubeMesh(GLfloat, GLfloat, GLfloat);
	GLfloat getWidth();
	void setWidth(GLfloat);
	GLfloat getHeight();
	void setHeight(GLfloat);
	GLfloat getDepth();
	void setDepth(GLfloat);
};