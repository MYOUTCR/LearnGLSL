#pragma once

#ifndef _HEAD_SHADER
#define _HEAD_SHADER

#include <GL/glew.h> // ����glew����ȡ���еı���OpenGLͷ�ļ�
#include <string>

class Shader
{
public:
	GLint m_Program;/*����ID*/;
public:
	Shader();/*��ȡ����Shader*/
	Shader(const GLchar* vertexPath, const GLchar* fragmentPath);

	~Shader();

	void Use();/*ʹ�ó���;*/

	void setBool(const std::string &name, bool bValue)const;
	void setInt(const std::string &name, int nValue)const;
	void setFloat(const std::string &name, float fValue)const;
	void setVec3(const std::string &name, float f1, float f2, float f3);


private:

};


#endif 
