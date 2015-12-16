#include <FaNES.h>

void main(void) {
    setPaletteColor(PALETTE_BACKGROUND_1 + 0, 0x0F);
    setPaletteColor(PALETTE_BACKGROUND_1 + 3, 0x30);
    printNametableString(NAMETABLE_A_POSITION(2, 2), "Hello World!");
    onGraphics();
    while(TRUE) {
        waitFrame();
    }
}
