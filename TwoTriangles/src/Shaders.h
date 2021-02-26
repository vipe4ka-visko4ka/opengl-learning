//
// Created by vipe4ka-visko4ka on 26.02.21.
//

#ifndef BATTLECITY_SHADERS_H
#define BATTLECITY_SHADERS_H

const char *vertexShaderSource =
        "#version 460 core\n"
        "layout (location = 0) in vec3 aPos;"
        "layout (location = 1) in vec3 color2;"
        "out vec3 color;"
        "void main()"
        "{"
        "   color = color2;"
        "   gl_Position = vec4(aPos, 1.0);"
        "}";

const char *fragmentShaderSource =
        "#version 460 core\n"
        "in vec3 color;"
        "out vec4 FragColor;"
        "void main()"
        "{"
        "   FragColor = vec4(color, 1.0f);"
        "}";

#endif