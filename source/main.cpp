#include <nds.h>
#include <iostream>

// For 32 bit systems, add this line:
// https://github.com/devkitPro/buildscripts/issues/26
extern "C" void __sync_synchronize() {}

#include <maxmod9.h>
#include "soundbank.h"
#include "soundbank_bin.h"

int main()
{
  //Initialization
  PrintConsole m_screen_bottom;

  //consoleDemoInit();
  videoSetMode(MODE_FB0);
  vramSetBankA(VRAM_A_LCD);

  consoleInit(&m_screen_bottom, 3,BgType_Text4bpp, BgSize_T_256x256, 31, 0, false, true);
  consoleSelect(&m_screen_bottom);

  //Initialize music
  mmInitDefaultMem((mm_addr)soundbank_bin);

  //Load music
  mmLoad(MOD_MY_MUSIC);

  //Start music
  mmStart(MOD_MY_MUSIC, MM_PLAY_LOOP);

  scanKeys(); //Don't forget!

  /*  
  std::cout
    << "\n"
    << " libnds_example_2\n"
    << " From\n"
    << " https://github.com\n"
    << "   /richelbilderbeek\n"
    << "   /libnds_example_2\n"
    << "\n"
    << " Press A and B keys for effect\n";
  */
  //The maximum x coordinat
  const int maxx = 256;
  //The maximum y coordinat
  const int maxy = 192;
  //The maximum R/G/B color value
  const int max_color = 32;
  //Counter for the scroll effect
  int z = 0;

  while(1)
  {
    //Respond to keys
    scanKeys();
    const int held = keysHeld();
    if (!held) continue;
    if (held & KEY_A) ++z;
    if (held & KEY_B) { --z; if (z<0) z+=max_color; }
    for (int y=0; y!=maxy; ++y)
    {
      for (int x=0; x!=maxx; ++x)
      {
        VRAM_A[(y*maxx)+x]
          = RGB15(
            (x+z  ) % max_color,
            (y+z  ) % max_color,
            (x+y+z) % max_color);
      }
    }
  }
}
