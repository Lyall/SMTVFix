# Shin Megami Tensei V: Vengeance Fix
[![Patreon-Button](https://github.com/Lyall/SMTVFix/assets/695941/e6c60210-6f5e-460a-ad73-a66387e7b5d9)](https://www.patreon.com/Wintermance) [![ko-fi](https://ko-fi.com/img/githubbutton_sm.svg)](https://ko-fi.com/W7W01UAI9)<br />
[![Github All Releases](https://img.shields.io/github/downloads/Lyall/SMTVFix/total.svg)](https://github.com/Lyall/SMTVFix/releases)

This is a fix for Shin Megami Tensei V: Vengeance that adds ultrawide/narrow display support, graphical tweaks and much more.

## Features
### General
- Skip intro logos/movie.
- Enable developer console.
- Remove 60FPS cap in menus.
- Adjust player camera distance/fov/height.

### Ultrawide/Narrower
- Remove pillarboxing/letterboxing.
- Correct FOV at any resolution.
- Centered 16:9 HUD.

### Graphical Tweaks
- Adjust resolution scale (screen percentage).
- Enable TAA.
- Adjust shadow resolution.
- Adjust LOD distance.
- Enable GTAO ambient occlusion.

## Installation
- Grab the latest release of SMTVFix from [here.](https://github.com/Lyall/SMTVFix/releases)
- Extract the contents of the release zip in to the the game folder. e.g. ("**steamapps\common\SMT5V**" for Steam).

### Steam Deck/Linux Additional Instructions
🚩**You do not need to do this if you are using Windows!**
- Open up the game properties in Steam and add `WINEDLLOVERRIDES="dsound=n,b" %command%` to the launch options.

## Configuration
- See **SMTVFix.ini** to adjust settings for the fix.

#### Console
- To make use of the developer console, you'll need to bind a key to use it. You'll need to add this to `%LOCALAPPDATA%\SMT5V\Saved\Config\WindowsNoEditor\Input.ini`:
```ini
[/Script/Engine.InputSettings]
ConsoleKeys=Tilde
```

## Known Issues
Please report any issues you see.
This list will contain bugs which may or may not be fixed.

### Ultrawide/Narrower Issues
- Map background does not span screen.

## Screenshots
| ![ezgif-6-44e78ab660](https://github.com/Lyall/SMTVFix/assets/695941/1db582c4-2fe6-4a6a-8c1d-a44f5c96252f) |
|:--:|
| Gameplay |

## Credits
[Ultimate ASI Loader](https://github.com/ThirteenAG/Ultimate-ASI-Loader) for ASI loading. <br />
[inipp](https://github.com/mcmtroffaes/inipp) for ini reading. <br />
[spdlog](https://github.com/gabime/spdlog) for logging. <br />
[Dumper7](https://github.com/Encryqed/Dumper-7) for generating UE4 SDK. <br />
[safetyhook](https://github.com/cursey/safetyhook) for hooking.
