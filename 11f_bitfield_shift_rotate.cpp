#include <stdio.h> 

struct Bitfield { 
    unsigned int data : 8;
};

int main() { 
    struct Bitfield bf;
    bf.data = 0x0A;
    printf("Original Value: 0x%X\n", bf.data);

    bf.data = bf.data >> 1;
    printf("Right-Shift by 1: 0x%X\n", bf.data);

    bf.data = bf.data << 2;
    printf("Left-Shift by 2: 0x%X\n", bf.data);

    bf.data = (unsigned char)((bf.data << 3) | (bf.data >> (8 - 3)));
    printf("Left-Rotate by 3: 0x%X\n", bf.data);

    bf.data = (unsigned char)((bf.data >> 2) | (bf.data << (8 - 2)));
    printf("Right-Rotate by 2: 0x%X\n", bf.data);

    return 0;
}
