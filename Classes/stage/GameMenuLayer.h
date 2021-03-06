#pragma once
#include <cocos2d.h>
USING_NS_CC;

class GameMenuLayer : public Layer {
public:
	CREATE_FUNC(GameMenuLayer);
	virtual bool init();

private:
	Sprite * shadow;
	Sprite * board;

	void appearAction();
	void disappearAction();
};