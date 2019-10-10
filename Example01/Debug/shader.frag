#version 330 core

in vec3 ourColor;//输入
in vec3 ourpos;

out vec4 color;//输出

void main()
{
    color = vec4(ourColor, 1.0f);
}