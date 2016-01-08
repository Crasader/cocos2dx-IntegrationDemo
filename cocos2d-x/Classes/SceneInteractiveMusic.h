#pragma once

#include "SceneBase.h"

#define TBL_SIZE    9

class SceneInteractiveMusic : public SceneBase
{
public:
    SceneInteractiveMusic();
    ~SceneInteractiveMusic();

    static cocos2d::Scene* createScene();

    virtual bool init();
    virtual void update(float dt);
    virtual void onKeyPressed(cocos2d::EventKeyboard::KeyCode keyCode, cocos2d::Event* unused_event);
    virtual void onRelease();

    // a selector callback
    void PostEvent_(Ref* sender, int ix);
    //void menuCloseCallback(cocos2d::Ref* pSender);
    //void setMenuColor(int index);

    // implement the "static create()" method manually
    CREATE_FUNC(SceneInteractiveMusic);

private:
    cocos2d::Label * m_label;
    cocos2d::Label * m_menu[TBL_SIZE];
    /// Game Object ID for the Music.
    static const AkGameObjectID GAME_OBJECT_MUSIC = 100;

    /// Holds the playing ID of the launched PLAY_MARKERS event.
    AkPlayingID m_iPlayingID;
};
