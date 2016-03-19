//
// Created by Vit on 19/03/2016.
//

#include "InputManager.h"
#include <iostream>

InputManager::InputManager()
{
    m_xInputThisFrame.clear();
}

void InputManager::RequestInput()
{
    std::getline(std::cin, m_xInputThisFrame);
}
std::string InputManager::GetInputThisFrame()
{
    return m_xInputThisFrame;
}