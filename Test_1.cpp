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
    input.mi.dwFlags = MOUSEEVENTF_MOVE;
    SendInput(1, &input, sizeof(input));
}

int main(int argc, char* argv[]) {
    for (int i = 0;i < 500;i++) {
        moveMouse(10, 0);
        _sleep(20);
    }
    return 1;
}