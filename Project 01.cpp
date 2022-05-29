
#include <iostream>
#include "windows.h"
#include "audiere.h" 
#pragma comment(lib, "audiere.lib")
using namespace audiere;

int main()
{
    int count = 0;
    int Answer;
    std::cout << "Hey, it is a game of 'Oh lucky man!' - you are given 10 questions, and you need to score 75 points, +10 for one correct answer, -8 for an incorrect one, and -5 for an additional hint, well, are you ready ? \n1) Of course\n2) No\n";
    std::cin >> Answer;


    if (Answer == 1) {
        std::cout << "Good! So, first question: What soft drink was the first to be taken into space?\n1)Sprite\n2)Fanta\n3)Coca-cola\n4)I need additional hint\n";
        std::cin >> Answer;
        if (Answer == 4) {
            count -= 5;
            std::cout << "Became the most popular drink at the moment\n";
            std::cout << "1)Sprite\n2)Fanta\n3)Coca-cola\n";
            std::cin >> Answer;
            if (Answer == 3) {
                count += 10;
                std::cout << "It is true\nYou have " << count << " points\n";
            }
            else
            {
                count -= 8;
                std::cout << "It is not correct\nYou have " << count << " points\n";
            }
        }
        else {
            if (Answer == 3) {
                count += 10;
                std::cout << "It is correct\nYou have " << count << " points\n";
            }
            else {
                count -= 8;
                std::cout << "It is not correct\nYou have " << count << " points\n";
            }
        }


        std::cout << "What is the strongest house in the Three Little Pigs made of?\n1)Brick\n2)Bamboo\n3)Sticks\n4)I need additional hint\n";
        std::cin >> Answer;
        if (Answer == 4) {
            count -= 5;
            std::cout << "Looks like a rectangle\n";
            std::cout << "1)Brick\n2)Bamboo\n3)Sticks\n";
            std::cin >> Answer;
            if (Answer == 1) {
                count += 10;
                std::cout << "It is true\nYou have " << count << " points\n";
            }
            else
            {
                count -= 8;
                std::cout << "It is not correct\nYou have " << count << " points\n";
            }
        }
        else {
            if (Answer == 1) {
                count += 10;
                std::cout << "It is correct\nYou have " << count << " points\n";
            }
            else {
                count -= 8;
                std::cout << "It is not correct\nYou have " << count << " points\n";
            }
        }


        std::cout << "What movie is Prince Charming from?\n1)Cinderella\n2)Mermaid\n3)sleeping Beauty\n4)I need additional hint\n";
        std::cin >> Answer;
        if (Answer == 4) {
            count -= 5;
            std::cout << "A girl named Rhodopis\n";
            std::cout << "1)Cinderella\n2)Mermaid\n3)sleeping Beauty\n";
            std::cin >> Answer;
            if (Answer == 1) {
                count += 10;
                std::cout << "It is true\nYou have " << count << " points\n";
            }
            else
            {
                count -= 8;
                std::cout << "It is not correct\nYou have " << count << " points\n";
            }
        }
        else {
            if (Answer == 1) {
                count += 10;
                std::cout << "It is correct\nYou have " << count << " points\n";
            }
            else {
                count -= 8;
                std::cout << "It is not correct\nYou have " << count << " points\n";
            }
        }


        std::cout << "What movie is Prince Charming from?\n1)Cinderella\n2)Mermaid\n3)sleeping Beauty\n4)I need additional hint\n";
        std::cin >> Answer;
        if (Answer == 4) {
            count -= 5;
            std::cout << "A girl named Rhodopis\n";
            std::cout << "1)Cinderella\n2)Mermaid\n3)sleeping Beauty\n";
            std::cin >> Answer;
            if (Answer == 1) {
                count += 10;
                std::cout << "It is true\nYou have " << count << " points\n";
            }
            else
            {
                count -= 8;
                std::cout << "It is not correct\nYou have " << count << " points\n";
            }
        }
        else {
            if (Answer == 1) {
                count += 10;
                std::cout << "It is correct\nYou have " << count << " points\n";
            }
            else {
                count -= 8;
                std::cout << "It is not correct\nYou have " << count << " points\n";
            }
        }


        std::cout << "What country is Justin Bieber from?\n1)France\n2)USA\n3)Canada\n4)I need additional hint\n";
        std::cin >> Answer;
        if (Answer == 4) {
            count -= 5;
            std::cout << "On the flag of nature\n";
            std::cout << "1)France\n2)USA\n3)Canada\n";
            std::cin >> Answer;
            if (Answer == 3) {
                count += 10;
                std::cout << "It is true\nYou have " << count << " points\n";
            }
            else
            {
                count -= 8;
                std::cout << "It is not correct\nYou have " << count << " points\n";
            }
        }
        else {
            if (Answer == 3) {
                count += 10;
                std::cout << "It is correct\nYou have " << count << " points\n";
            }
            else {
                count -= 8;
                std::cout << "It is not correct\nYou have " << count << " points\n";
            }
        }


        std::cout << "What holiday movie sequel did Donald Trump star in?\n1)Alone at home\n2)Home Alone 2: Lost in New York\n3)Richie Rich\n4)I need additional hint\n";
        std::cin >> Answer;
        if (Answer == 4) {
            count -= 5;
            std::cout << "Capital of the world\n";
            std::cout << "1)Alone at home\n2)Home Alone 2: Lost in New York\n3)Richie Rich\n";
            std::cin >> Answer;
            if (Answer == 2) {
                count += 10;
                std::cout << "It is true\nYou have " << count << " points\n";
            }
            else
            {
                count -= 8;
                std::cout << "It is not correct\nYou have " << count << " points\n";
            }
        }
        else {
            if (Answer == 2) {
                count += 10;
                std::cout << "It is correct\nYou have " << count << " points\n";
            }
            else {
                count -= 8;
                std::cout << "It is not correct\nYou have " << count << " points\n";
            }
        }

        //7th quest
        std::cout << "What is the national animal of Scotland?\n1)Horse\n2)Unicorn\n3)Wolf\n4)I need additional hint\n";
        std::cin >> Answer;
        if (Answer == 4) {
            count -= 5;
            std::cout << "Is it real?\n";
            std::cout << "1)Horse\n2)Unicorn\n3)Wolf\n";
            std::cin >> Answer;
            if (Answer == 2) {
                count += 10;
                std::cout << "It is true\nYou have " << count << " points\n";
            }
            else
            {
                count -= 8;
                std::cout << "It is not correct\nYou have " << count << " points\n";
            }
        }
        else {
            if (Answer == 2) {
                count += 10;
                std::cout << "It is correct\nYou have " << count << " points\n";
            }
            else {
                count -= 8;
                std::cout << "It is not correct\nYou have " << count << " points\n";
            }
        }


        std::cout << "How long is a moment?\n1)90 seconds\n2)120 seconds\n3)180 seconds\n4)I need additional hint\n";
        std::cin >> Answer;
        if (Answer == 4) {
            count -= 5;
            std::cout << "One and a half times more than a minute\n";
            std::cout << "1)90 seconds\n2)120 seconds\n3)180 seconds\n";
            std::cin >> Answer;
            if (Answer == 1) {
                count += 10;
                std::cout << "It is true\nYou have " << count << " points\n";
            }
            else
            {
                count -= 8;
                std::cout << "It is not correct\nYou have " << count << " points\n";
            }
        }
        else {
            if (Answer == 1) {
                count += 10;
                std::cout << "It is correct\nYou have " << count << " points\n";
            }
            else {
                count -= 8;
                std::cout << "It is not correct\nYou have " << count << " points\n";
            }
        }


        std::cout << "What country is Prague in?\n1)Spain\n2)Brazil\n3)Czech\n4)I need additional hint\n";
        std::cin >> Answer;
        if (Answer == 4) {
            count -= 5;
            std::cout << "The smallest of the three countries by area\n";
            std::cout << "1)Spain\n2)Brazil\n3)Czech\n";
            std::cin >> Answer;
            if (Answer == 3) {
                count += 10;
                std::cout << "It is true\nYou have " << count << " points\n";
            }
            else
            {
                count -= 8;
                std::cout << "It is not correct\nYou have " << count << " points\n";
            }
        }
        else {
            if (Answer == 3) {
                count += 10;
                std::cout << "It is correct\nYou have " << count << " points\n";
            }
            else {
                count -= 8;
                std::cout << "It is not correct\nYou have " << count << " points\n";
            }
        }


        std::cout << "How many taste buds does the average human tongue have?\n1)10\n2)1000\n3)10000\n4)I need additional hint\n";
        std::cin >> Answer;
        if (Answer == 4) {
            count -= 5;
            std::cout << "More than the average number of inhabitants in the villages\n";
            std::cout << "1)10\n2)1000\n3)10000\n";
            std::cin >> Answer;
            if (Answer == 3) {
                count += 10;
                std::cout << "It is true\nYou have " << count << " points\n";
            }
            else
            {
                count -= 8;
                std::cout << "It is not correct\nYou have " << count << " points\n";
            }
        }
        else {
            if (Answer == 3) {
                count += 10;
                std::cout << "It is correct\nYou have " << count << " points\n";
            }
            else {
                count -= 8;
                std::cout << "It is not correct\nYou have " << count << " points\n";
            }
        }


    }
    if (count >= 75) {
        AudioDevicePtr device = OpenDevice();
        OutputStreamPtr sound = OpenSound(device, "D:\\Games\\game-won.waw", false);
        sound->play();
        std::cout << "You win! I'm proud of you.";
    }
    else {
        std::cout << "Oh, you did not have enough points, maybe next time you will be more lucky.";
    }






}
