//
// Created by Phoebe Mitchell on 12/02/2023.
//

#ifndef CHIP8_MEMORY_H
#define CHIP8_MEMORY_H


class Memory {
public:
    static const int FIRST_ADDRESS = 0x200;

    unsigned char GetAddress(int index);
    void SetAddress(int index, unsigned char address);
private:
    unsigned char m_memory[4096];
};


#endif //CHIP8_MEMORY_H
