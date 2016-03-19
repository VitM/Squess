//
// Created by Vit on 19/03/2016.
//

// The GameManager class is responsible for maintaining the game flow, i.e. it determines
// when and how the game waits for input, processes the input and then renders an output

#ifndef SQUESS_GAMEMANAGER_H
#define SQUESS_GAMEMANAGER_H

class GameManager
{
    public:
        // Default constructor
        GameManager(bool bShouldEndGame);

        // The game takes place fully within this loop
        void StartGameLoop();
    private:
        // If there is any input from the player, we can parse it here
        void GetInput();

        // The processing for 1 frame of the game will be done here
        void ProcessGameFrame();

        // The game will render a frame using this method
        void RenderFrame();

        bool m_bShouldEndGame;
};

#endif //SQUESS_GAMEMANAGER_H
