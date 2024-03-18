#ifndef SCENEBASIC_UNIFORM_H
#define SCENEBASIC_UNIFORM_H

#include "helper/scene.h"

#include <glad/glad.h>
#include "helper/glslprogram.h"

class SceneBasic_Uniform : public Scene
{
private:
    GLuint vaoHandle;
    GLSLProgram prog;
    GLSLProgram progNomralMap;
    GLSLProgram projSky;
    GLSLProgram progAlpha;
    GLSLProgram progLight;
    GLSLProgram projBlur;
    GLSLProgram projFinal;
    
    float angle;
    

    unsigned int woodTexture;
    void compile();


    glm::vec3 lightPos;

    // normal Map
    unsigned int diffuseMap;
    unsigned int normalMap;


    // skybox
    unsigned int skyboxVAO;
    unsigned int cubemapTexture;

    // grass
    unsigned int transparentVAO;
    unsigned int transparentTexture;

    // gaussian blur
    unsigned int hdrFBO;
    unsigned int pingpongFBO[2];
    unsigned int pingpongColorbuffers[2];
    unsigned int colorBuffers[2];
public:
    SceneBasic_Uniform();

    void initGrass();
    void initSkybox();
    void initScene();
    void update( float t );
    void render();
    void resize(int, int);
};

#endif // SCENEBASIC_UNIFORM_H
