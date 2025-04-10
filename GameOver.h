/*
Lua Assignment Game
Author:		Philip Alassad
Filename:	GameOver.h
Date:		March 2025
Last Updated:	12/03/2025

Description: Header file for GameOver class
*/
#pragma once
#include "SceneManager.h"

class Hud;
class Input;
class Audio;
class GameOver
{
private:
    //pointers
    lua_State* L;
    Audio* p_GameAudio;

    //constants for Lua*************************************    
    double timeLimit;
    RGBColour GameOverTextColour;
    Vector2  GameOverMessagePosition;
    string GameOverMessage;
    //******************************************************   

    //members
    double m_totalTime;

    bool m_IsPlaying;

    //dispatcher for PART 4
    Dispatcher disp;    

    //custom methods for PART 4
    void MuteAudio();
    void PlayAudio();

public:
    GameOver(Audio* GA);
    ~GameOver();

    E_GameStates Update(double DeltaTime, Input* input);
    void Draw(Hud* hud);

    //Init method for PART 4
    void Init(Dispatcher& disp)
    {
        Dispatcher::Command::voidvoidfunc f{ [this](void) {return MuteAudio(); } };
        disp.Register("MuteAudio", Dispatcher::Command{ f });

        f = { [this](void) {return PlayAudio(); } };
        disp.Register("PlayAudio", Dispatcher::Command{ f });
    }
};

