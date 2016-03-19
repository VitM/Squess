//
// Created by Vit on 19/03/2016.
//

#include <iostream>

#include "GameManager.h"

GameManager::GameManager()
{
    m_bShouldEndGame = false;
    m_xInputManager = {};
}

void GameManager::StartGameLoop()
{
    while(!m_bShouldEndGame)
    {
        RenderFrame();

        GetInput();

        ProcessGameFrame();
    }
}

void GameManager::GetInput()
{
    m_xInputManager.RequestInput();
    if( m_xInputManager.GetInputThisFrame() == "exit" )
    {
        m_bShouldEndGame = true;
    }
}

void GameManager::ProcessGameFrame()
{

}

void GameManager::RenderFrame()
{
    std::cout << "Type \"exit\" to exit" << std::endl;
}