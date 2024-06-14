# Shin Megami Tensei V: Vengeance Fix
[![Patreon-Button](https://github.com/Lyall/SMTVFix/assets/695941/e6c60210-6f5e-460a-ad73-a66387e7b5d9)](https://www.patreon.com/Wintermance) [![ko-fi](https://ko-fi.com/img/githubbutton_sm.svg)](https://ko-fi.com/W7W01UAI9)<br />
[![Github All Releases](https://img.shields.io/github/downloads/Lyall/SMTVFix/total.svg)](https://github.com/Lyall/SMTVFix/releases)

This is a fix for ultrawide/narrower displays in Shin Megami Tensei V: Vengeance.

## Features
- Remove pillarboxing/letterboxing.
- Correct FOV at any resolution.

## Installation
- Grab the latest release of SMTVFix from [here.](https://github.com/Lyall/SMTVFix/releases)
- Extract the contents of the release zip in to the the game folder. e.g. ("**steamapps\common\SMT5V**" for Steam).

### Steam Deck/Linux Additional Instructions
🚩**You do not need to do this if you are using Windows!**
- Open up the game properties in Steam and add `WINEDLLOVERRIDES="dsound=n,b" %command%` to the launch options.

## Configuration
- See **SMTVFix.ini** to adjust settings for the fix.

## Known Issues
Please report any issues you see.
This list will contain bugs which may or may not be fixed.

## Screenshots
| ![ezgif-6-44e78ab660](https://github.com/Lyall/SMTVFix/assets/695941/1db582c4-2fe6-4a6a-8c1d-a44f5c96252f) |
|:--:|
| Gameplay |

## Credits
[Ultimate ASI Loader](https://github.com/ThirteenAG/Ultimate-ASI-Loader) for ASI loading. <br />
[inipp](https://github.com/mcmtroffaes/inipp) for ini reading. <br />
[spdlog](https://github.com/gabime/spdlog) for logging. <br />
[safetyhook](https://github.com/cursey/safetyhook) for hooking.
