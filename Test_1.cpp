#include<winuser.h>
#include<conio.h>
#include<iostream>
#include<stdio.h>

void moveMouse(int x, int y) {
    INPUT input;
    input.type = INPUT_MOUSE;
    input.mi.mouseData = 0;
    input.mi.dx = x;
    input.mi.dy = y;
    input.mi.dwFlags = MOUSEEVENTF_ABSOLUTE | MOUSEEVENTF_MOVE;
    SendInput(1, &input, sizeof(input));
}

int main(int argc, char* argv[]) {
    moveMouse(100000,100000);
    return 1;
}