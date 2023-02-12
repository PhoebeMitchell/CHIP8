//
// Created by Phoebe Mitchell on 12/02/2023.
//

#include "../Memory.h"

unsigned char Memory::GetAddress(int index) {
    return m_memory[index];
}

void Memory::SetAddress(int index, unsigned char address) {
    m_memory[index] = address;
}
