#ifndef __BUTTON_H__
#define __BUTTON_H__
//各类Tag
#define BUTTONLISTTAG 0
#define MINEBUTTONTAG 1
#define EPOWERBUTTONTAG 2
#define BARRACKBUTTONTAG 3
#define CARINCBUTTONTAG 4
#define MONEYPOWERLISTTAG 5
#define MONEYTAG 6
#define MONEYPNG 7
#define POWERTAG 8
#define POWERPNG 9
#define SOLDIERBUTTONTAG 10
#define TANKBUTTONTAG 11
#define ROBOTBUTTONTAG 12
#include"cocos2d.h"
USING_NS_CC;
class button : public Layer
{
	//各类建筑按钮
	Sprite*minebutton;
	Sprite*epowerbutton;
	Sprite*barrackbutton;
	Sprite*carincbutton;
	Sprite*soldierbutton;
	Sprite*tankbutton;
	Sprite*robotbutton;
	//上下按钮背景栏
	Sprite*buttonlist;
	Sprite*moneypowerlist;
	//钱与电力
	String*smoney;
	Sprite*moneypng;
	Label*lblmoney;
	String*spower;
	Sprite*powerpng;
	Label*lblpower;
public:
	int money = 1000;
	int power = 1000;
	int enemy_money = 1000;
	int enemy_power = 1000;
	virtual bool init();
	virtual void onEnter();
	virtual void onExit();
	bool isTap(cocos2d::EventMouse*em, cocos2d::Node*node);
	int buildornot = 0;//按钮是否提供了建造允许
	int buildchoice = 0;//修建哪个建筑
	int enemy_buildornot = 0;//按钮是否提供了建造允许
	int enemy_buildchoice = 0;//修建哪个建筑
	virtual bool onMouseDown(Event*e);
	virtual void onMouseUp(Event*e);
	void scheduleMoneyPower(float delta);
	void schedulebutton(float delta);
	void updatemoney(int buildchoice);
	CREATE_FUNC(button);
};
#endif 

