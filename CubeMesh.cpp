#include "CubeMesh.h"
#include <iostream>

using namespace std;

CubeMesh::CubeMesh(GLfloat pWidth, GLfloat pHeight, GLfloat pDepth)
{
	mWidth = pWidth;
	mHeight = pHeight;
	mDepth = pDepth;
	CubeMesh::createMesh();
}

GLfloat
CubeMesh::getWidth()
{
	return mWidth;
}

GLfloat
CubeMesh::getHeight()
{
	return mHeight;
}

void
CubeMesh::setWidth(GLfloat pWidth)
{
	mWidth = pWidth;
}

void
CubeMesh::setHeight(GLfloat pHeight)
{
	mHeight = pHeight;
}

bool
CubeMesh::createMesh()
{

	//glPushMatrix();
	//{
	glColor3f(1.0f, 0.0f, 0.0f);
	glBegin(GL_TRIANGLES);
	{
		//TODO: Start using glVertex3fv for giving it an array of the values.
		//Also, start making this with triangle strips. Understand index arrays and surface normals.

		glVertex3f(-0.5f*mWidth, 0.5f*mHeight, 0.5f*mDepth);
		glVertex3f(-0.5f*mWidth, -0.5f*mHeight, 0.5f*mDepth);
		glVertex3f(0.5f*mWidth, -0.5f*mHeight, 0.5f*mDepth);

		glVertex3f(0.5f*mWidth, 0.5f*mHeight, 0.5f*mDepth);
		glVertex3f(-0.5f*mWidth, 0.5f*mHeight, 0.5f*mDepth);
		glVertex3f(0.5f*mWidth, -0.5f*mHeight, 0.5f*mDepth);

		glVertex3f(0.5f*mWidth, 0.5f*mHeight, -0.5f*mDepth);
		glVertex3f(-0.5f*mWidth, 0.5f*mHeight, 0.5f*mDepth);
		glVertex3f(0.5f*mWidth, 0.5f*mHeight, 0.5f*mDepth);

		glVertex3f(-0.5f*mWidth, 0.5f*mHeight, -0.5f*mDepth);
		glVertex3f(-0.5f*mWidth, 0.5f*mHeight, 0.5f*mDepth);
		glVertex3f(0.5f*mWidth, 0.5f*mHeight, -0.5f*mDepth);

		glVertex3f(-0.5f*mWidth, 0.5f*mHeight, 0.5f*mDepth);
		glVertex3f(-0.5f*mWidth, -0.5f*mHeight, -0.5f*mDepth);
		glVertex3f(-0.5f*mWidth, 0.5f*mHeight, -0.5f*mDepth);

		glVertex3f(-0.5f*mWidth, 0.5f*mHeight, 0.5f*mDepth);
		glVertex3f(-0.5f*mWidth, -0.5f*mHeight, -0.5f*mDepth);
		glVertex3f(-0.5f*mWidth, -0.5f*mHeight, 0.5f*mDepth);

		glVertex3f(0.5f*mWidth, -0.5f*mHeight, 0.5f*mDepth);
		glVertex3f(0.5f*mWidth, 0.5f*mHeight, 0.5f*mDepth);
		glVertex3f(0.5f*mWidth, 0.5f*mHeight, -0.5f*mDepth);

		glVertex3f(0.5f*mWidth, 0.5f*mHeight, -0.5f*mDepth);
		glVertex3f(0.5f*mWidth, -0.5f*mHeight, -0.5f*mDepth);
		glVertex3f(0.5f*mWidth, -0.5f*mHeight, 0.5f*mDepth);

		glVertex3f(0.5f*mWidth, -0.5f*mHeight, 0.5f*mDepth);
		glVertex3f(-0.5f*mWidth, -0.5f*mHeight, 0.5f*mDepth);
		glVertex3f(-0.5f*mWidth, -0.5f*mHeight, -0.5f*mDepth);

		glVertex3f(0.5f*mWidth, -0.5f*mHeight, 0.5f*mDepth);
		glVertex3f(-0.5f*mWidth, -0.5f*mHeight, -0.5f*mDepth);
		glVertex3f(0.5f*mWidth, -0.5f*mHeight, -0.5f*mDepth);

		glVertex3f(0.5f*mWidth, 0.5f*mHeight, -0.5f*mDepth);
		glVertex3f(0.5f*mWidth, -0.5f*mHeight, -0.5f*mDepth);
		glVertex3f(-0.5f*mWidth, -0.5f*mHeight, -0.5f*mDepth);

		glVertex3f(-0.5f*mWidth, -0.5f*mHeight, -0.5f*mDepth);
		glVertex3f(-0.5f*mWidth, 0.5f*mHeight, -0.5f*mDepth);
		glVertex3f(0.5f*mWidth, 0.5f*mHeight, -0.5f*mDepth);



	}
	glEnd();

	//}
	//glPopMatrix();
	return true;
}

