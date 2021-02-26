//
// Created by vipe4ka-visko4ka on 26.02.21.
//

#ifndef BATTLECITY_VBO_H
#define BATTLECITY_VBO_H

const GLfloat vertices[] = {
        0.5f, 0.5f, 0.0f,
        0.5f, -0.5f, 0.0f,
        -0.5f, -0.5f, 0.0f,
        -0.5f, 0.5f, 0.0f
};

GLuint indices[] = {  // помните, что мы начинаем с 0!
        0, 1, 3,  // первый треугольник
        1, 2, 3   // второй треугольник
};

#endif //BATTLECITY_VBO_H
