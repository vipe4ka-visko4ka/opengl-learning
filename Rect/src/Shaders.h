//
// Created by vipe4ka-visko4ka on 26.02.21.
//

#ifndef BATTLECITY_SHADERS_H
#define BATTLECITY_SHADERS_H

const char *vertexShaderSource =
        "#version 460 core\n"
        "layout (location = 0) in vec3 aPos;"
        "void main()"
        "{"
        "   gl_Position = vec4(aPos.x, aPos.y, aPos.z, 1.0);"
        "}";

const char *fragmentShaderSource =
        "#version 460 core\n"
        "out vec4 FragColor;"
        "void main()"
        "{"
        "   FragColor = vec4(1.0f, 0.0f, 0.0f, 1.0f);\n"
        "}";

#endif