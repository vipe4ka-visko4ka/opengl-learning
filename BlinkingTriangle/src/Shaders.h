//
// Created by vipe4ka-visko4ka on 26.02.21.
//

#ifndef BATTLECITY_SHADERS_H
#define BATTLECITY_SHADERS_H

#define GLSL(src) "#version 460 core\n" #src

const char *vertexShaderSource = GLSL(
                                         in vec2 position;

                                         void main() {
                                             gl_Position = vec4(position, 0.0, 1.0);
                                         }
                                 );

const char *fragmentShaderSource =  GLSL(
                                            uniform vec3 triangleColor;
                                            out vec4 outColor;

                                            void main() {
                                                outColor = vec4(triangleColor, 1.0f);
                                            }
                                    );

#endif