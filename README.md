# Final Fantasy VII Remake Fix
[![Patreon-Button](https://raw.githubusercontent.com/Lyall/FF7RemakeFix/refs/heads/master/.github/Patreon-Button.png)](https://www.patreon.com/Wintermance) [![ko-fi](https://ko-fi.com/img/githubbutton_sm.svg)](https://ko-fi.com/W7W01UAI9)<br />
[![Github All Releases](https://img.shields.io/github/downloads/Lyall/FF7RemakeFix/total.svg)](https://github.com/Lyall/FF7RemakeFix/releases)

This is an ASI plugin for Final Fantasy VII Remake that adds ultrawide/narrower support and more.

## Features
### General
- Support for custom resolutions.
- Disable/adjust vignette.

### Ultrawide/Narrower
- Corrected aspect ratio and FOV.
- Centered 16:9 HUD.

## Installation
- Grab the latest release of FF7RemakeFix from [here.](https://github.com/Lyall/FF7RemakeFix/releases)
- Extract the contents of the release zip in to the the game folder.
(e.g. "**steamapps\common\FINAL FANTASY VII Remake**" for Steam).

### Steam Deck/Linux Additional Instructions
🚩**You do not need to do this if you are using Windows!**
- Open up the game properties in Steam and add `WINEDLLOVERRIDES="dsound=n,b" %command%` to the launch options.

## Configuration
- See **FF7RemakeFix.ini** to adjust settings.

## Known Issues
Please report any issues you see. This list will contain bugs which may or may not be fixed.

#### Ultrawide/Narrower
- Combat simulator transition cutscene is displayed at the wrong aspect ratio.
- Map menu has a blue tint when at <16:9.

## Recommended Mods
- [FFVIIHook](https://www.nexusmods.com/finalfantasy7remake/mods/74) by [emoose](https://github.com/emoose) - Unlocks the console, allows overriding certain cvars and more.

## Screenshots
| ![ezgif-83cb3f9957178e](https://github.com/user-attachments/assets/11eb03e6-34e1-47d3-87c7-c555f10e929f) |
|:--------------------------:|
| Gameplay |

## Credits
[Ultimate ASI Loader](https://github.com/ThirteenAG/Ultimate-ASI-Loader) for ASI loading. <br />
[inipp](https://github.com/mcmtroffaes/inipp) for ini reading. <br />
[spdlog](https://github.com/gabime/spdlog) for logging. <br />
[safetyhook](https://github.com/cursey/safetyhook) for hooking.<br />
[Dumper-7](https://github.com/Encryqed/Dumper-7) for dumping the SDK.
