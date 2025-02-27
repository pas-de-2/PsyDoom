#pragma once

#include "Doom/doomdef.h"

struct texture_t;

//------------------------------------------------------------------------------------------------------------------------------------------
// Enum representing a style/mode for the title screen.
// This can vary depending on what game is loaded.
//------------------------------------------------------------------------------------------------------------------------------------------
enum class TitleScreenStyle : uint8_t {
    Doom,               // Doom style title screen where the 'DOOM' logo floats up over the fire
    FinalDoom,          // Final Doom style title screen where the main graphic displays over the fire and fades in from black
    GEC_ME_BETA3,       // GEC Master Edition Beta 3: shows both the 'DOOM' and 'Final DOOM' logos as well as the 'Master Edition' logo on top of fire
    GEC_ME_BETA4,       // GEC Master Edition Beta 4: show fire on top of a background, and logos on top of that
};

// How many types of title screen are supported
static constexpr uint8_t NUM_TITLE_SCREEN_STYLES = 4;

extern int32_t      gTitleScreenSpriteY;
extern texture_t    gTex_TITLE;

void START_Title() noexcept;
void STOP_Title(const gameaction_t exitAction) noexcept;
gameaction_t TIC_Title() noexcept;
void DRAW_Title() noexcept;
