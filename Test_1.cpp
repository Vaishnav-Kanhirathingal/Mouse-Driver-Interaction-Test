#include<windows.h>

void moveMouse(int x, int y) {
    INPUT input;
    input.type = INPUT_MOUSE;
    input.mi.dx = x;
    input.mi.dy = y;
    input.mi.time = 0;
    input.mi.dwFlags = MOUSEEVENTF_MOVE;
    SendInput(1, &input, sizeof(input));
}              

int main(int argc, char* argv[]) {
    for (int i = 0;i < 100;i++) {
        moveMouse(10, 0);
        Sleep(20);
    }
    return 1;
}