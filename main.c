#include <FaNES.h>

void main(void) {
    setPaletteColor(PALETTE_BACKGROUND_1 + 3, 0x30);
    printNametableString(NAMETABLE_A_POSITION(2, 2), "Hello World!");
    printNametableString(NAMETABLE_A_POSITION(2, 4), "Привет мир! Этот текст");
    printNametableString(NAMETABLE_A_POSITION(2, 6), "должен быть в кодировке KOI8R.");
    onGraphics();
    while(TRUE) {
        waitFrame();
    }
}
