//
// Created by Primary on 5/14/2018.
//

#ifndef POLYTEXT_DIRECTOR_H
#define POLYTEXT_DIRECTOR_H


class Director {

private:
    bool isRunning;

public:
    Director();

    // Returns 0 if okay to stop. 1 if can't stop yet.
    int stopRunning();
    bool running();

};


#endif //POLYTEXT_DIRECTOR_H
