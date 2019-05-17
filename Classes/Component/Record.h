#ifndef __RECORD_H__
#define __RECORD_H__

#include "cocos2d.h"

USING_NS_CC;

class Record :public cocos2d::Layer
{
	CC_SYNTHESIZE(int, _kill, Kill);
	CC_SYNTHESIZE(int, _death, Death);
	CC_SYNTHESIZE(int, _assist, Assist);

private:

	Label* _labelKill;
	Label* _labelDeath;
	Label* _labelAssist;

public:

	bool init();
	void initSprite();
	void initLabel();

	void updateKill();
	void updateAssist();
	void updateDeath();

	CREATE_FUNC(Record);
};

#endif // !__RECORD_H__
