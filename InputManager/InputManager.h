//
// Created by Vit on 19/03/2016.
//

#ifndef SQUESS_INPUTMANAGER_H
#define SQUESS_INPUTMANAGER_H

#include <string>

class InputManager
{
public:
    // Default constructor
    InputManager();

    void RequestInput();

    std::string GetInputThisFrame();

private:
    std::string m_xInputThisFrame;
};


#endif //SQUESS_INPUTMANAGER_H
