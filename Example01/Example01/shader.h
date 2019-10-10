#pragma once

#ifndef _HEAD_SHADER
#define _HEAD_SHADER

#include <GL/glew.h> // 包含glew来获取所有的必须OpenGL头文件
#include <string>

class Shader
{
public:
	GLint m_Program;/*程序ID*/;
public:
	Shader();/*读取构造Shader*/
	Shader(const GLchar* vertexPath, const GLchar* fragmentPath);

	~Shader();

	void Use();/*使用程序;*/

	void setBool(const std::string &name, bool bValue)const;
	void setInt(const std::string &name, int nValue)const;
	void setFloat(const std::string &name, float fValue)const;
	void setVec3(const std::string &name, float f1, float f2, float f3);


private:

};


#endif 
