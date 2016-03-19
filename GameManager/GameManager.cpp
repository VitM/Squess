//
// Created by Vit on 19/03/2016.
//

#include "GameManager.h"

GameManager::GameManager(bool bShouldEndGame)
{
    m_bShouldEndGame = bShouldEndGame;
}

void GameManager::StartGameLoop()
{
    while(!m_bShouldEndGame)
    {
        GetInput();

        ProcessGameFrame();

        RenderFrame();
    }
}

void GameManager::GetInput()
{
    // For now, just exit the game next frame. This will be changed when we add input handling
    m_bShouldEndGame = true;
}

void GameManager::ProcessGameFrame()
{

}

void GameManager::RenderFrame()
{

}