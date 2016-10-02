#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__

#include "cocos2d.h"

class HelloWorld : public cocos2d::Layer
{
private:
    CC_DISALLOW_COPY_AND_ASSIGN(HelloWorld);
protected:
    HelloWorld();
    Node * player1, * player2;
    
public:
    static cocos2d::Scene* createScene();

    virtual bool init();
    
    // a selector callback
    void menuMoveBallsCallback(cocos2d::Ref* pSender);
    
    // implement the "static create()" method manually
    CREATE_FUNC(HelloWorld);
    
    virtual void update(float delta);
};

#endif // __HELLOWORLD_SCENE_H__
