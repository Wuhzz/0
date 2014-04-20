

#pragma once
#include "keyedit.h"
#include "cocos2d.h"

USING_NS_CC;

keyedit::keyedit(void)
{
}


keyedit::~keyedit(void)
{
}

keyedit::keyedit(long time)
{
	CCSize screenSize=CCDirector::sharedDirector()->getVisibleSize();
	createTime = time;
	positionX = rand()%(int)(screenSize.width);
	positionY = rand()%(int)(screenSize.height);
	this->setPosition(ccp(positionX,positionY));
	this->initWithFile("key.png");
}

void keyedit::keyRunAnimation()
{
	CCActionInterval *rotation = CCRotateTo::create(1,180);
	this->runAction(rotation);

}
/*void node::NodeChange(int color)
{	
	this->color=color;
	CCAnimation* animation = CCAnimation::create();
	if(this->color==2)
		animation->addSpriteFrameWithFileName("node2.png");
	else if(this->color==0)
		animation->addSpriteFrameWithFileName("node0.png");

	animation->setDelayPerUnit(2.8f / 14.0f);//�������÷��򲻻ᶯ̬����
	animation->setRestoreOriginalFrame(false);//�Ƿ�ص���һ֡
	animation->setLoops(1);//�ظ����� ��-1:����ѭ����
	CCFiniteTimeAction * animate = CCAnimate::create(animation);
	this->runAction(animate);
}*/