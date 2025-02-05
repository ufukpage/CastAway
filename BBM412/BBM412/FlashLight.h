#pragma once
#include "GSpotLight.h"
#include "DefaultDynamicObject.h"

class FlashLight: 
	public DefaultDynamicObject, public GSpotLight
{

	glm::mat4 toggleModel;
	glm::mat4 toggleTranslation;
	glm::mat4 toggleRotation;
	glm::mat4 toggleScale;

	bool onHand{ false };

public:

	FlashLight(const string & obj, const glm::vec3 & dis);

	void toggleOnHand();

	bool isOnHand();
	inline void toggleDefaultRender();

	virtual void render() override; 

	virtual void calculateLightening() override;

	// Inherited via Moveable
	virtual void translate(glm::vec3 displacement) override;

	virtual void translate(float x, float y, float z) override;
	virtual void translateOn(float x, float y, float z, const Directions & _dir) override;

	virtual void rotate(float x, float y, float z) override;
	virtual void rotateAround(float x, float y, float z, const Directions & dir) override;

	~FlashLight();

};

