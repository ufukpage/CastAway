#pragma once
#include "DirecLight.h"
#include "GBasicLightObject.h"

class GDirecLight :
	public DirecLight, public GBasicLightObject
{

public:

	GDirecLight(const std::string & obj, const GLuint & _prog = (GLuint)RenderMode::WIREFRAME);
	GDirecLight(const std::string & sub, const std::string & obj, const GLuint & _prog = (GLuint)RenderMode::WIREFRAME);
	GDirecLight(const std::string & obj,const glm::vec3 & dis, const GLuint & _prog = (GLuint)RenderMode::WIREFRAME);
	GDirecLight(const std::string & sub, const std::string & obj, const glm::vec3 & dis, const GLuint & _prog = (GLuint)RenderMode::WIREFRAME);

	GDirecLight(const std::string & obj, const GLuint & _vbo, const GLuint & _points_size, const GLuint & _prog = (GLuint)RenderMode::WIREFRAME);
	GDirecLight(const std::string & sub, const std::string & obj, const GLuint & _vbo, const GLuint & _points_size, const GLuint & _prog = (GLuint)RenderMode::WIREFRAME);
	GDirecLight(const std::string & obj, const glm::vec3 & dis, const GLuint & _vbo, const GLuint & _points_size, const GLuint & _prog = (GLuint)RenderMode::WIREFRAME);
	GDirecLight(const std::string & sub, const std::string & obj, const glm::vec3 & dis, const GLuint & _vbo, const GLuint & _points_size, const GLuint & _prog = (GLuint)RenderMode::WIREFRAME);
	

	// Inherited via Moveable
	virtual void translate(glm::vec3 displacement) override;

	virtual void translate(float x, float y, float z) override;
	virtual void translateOn(float x, float y, float z, const Directions & _dir) override;

	virtual void rotate(float x, float y, float z) override;
	virtual void rotateAround(float x, float y, float z, const Directions & dir) override;

	~GDirecLight();
};

