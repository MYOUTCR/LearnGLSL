#version 330 core
layout (location = 0) in vec3 position;//layout标识;
layout (location = 1) in vec3 color;

out vec3 ourColor;//输入;
out vec3 ourpos;//输入;

uniform vec3 timeColor;
uniform float xOffset;//全局数据;

void main()
{
    gl_Position = vec4(position.x+xOffset,position.y,position.z,1.0f);
    ourColor=timeColor;
}