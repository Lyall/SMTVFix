# Shin Megami Tensei V: Vengeance Fix
[![Patreon-Button](https://github.com/Lyall/SMTVFix/assets/695941/e6c60210-6f5e-460a-ad73-a66387e7b5d9)](https://www.patreon.com/Wintermance) [![ko-fi](https://ko-fi.com/img/githubbutton_sm.svg)](https://ko-fi.com/W7W01UAI9)<br />
[![Github All Releases](https://img.shields.io/github/downloads/Lyall/SMTVFix/total.svg)](https://github.com/Lyall/SMTVFix/releases)

This is a fix for Shin Megami Tensei V: Vengeance that adds ultrawide/narrow display support, graphical tweaks and much more.

## Features
### General
- Skip intro logos/movie.
- Enable developer console.
- Force 4K movies.
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
- Enable screen space global illumination.

## Installation
- Grab the latest release of SMTVFix from [here.](https://github.com/Lyall/SMTVFix/releases)
- Extract the contents of the release zip in to the the game folder. e.g. ("**steamapps\common\SMT5V**" for Steam).

### Steam Deck/Linux Additional Instructions
🚩**You do not need to do this if you are using Windows!**
- Open up the game properties in Steam and add `WINEDLLOVERRIDES="dsound=n,b" %command%` to the launch options.

<details>
<summary>Installing SMTVFix as a Reloaded II Mod</summary>
  
*This applies to both Windows and Steam Deck/Linux*

Before starting, make sure to **delete any SMTVFix files** inside of the game's files **if you have already have used this fix** previously (*SMTVFix.ini*, *SMTVFix.asi*, *dsound.ini* and *dsound.dll*)

To make sure SMTVFix loads alongside any Reloaded II mods you are using, follow these steps:

- Download the file marked `SMTVFix_Reloaded-II.zip` from the "Assets" section below.

- Drag and drop `SMTVFix_Reloaded-II.zip` onto the Reloaded-II window. (Alternatively: [Manual Install](https://reloaded-project.github.io/Reloaded-II/QuickStart/))

- Enable it in your `Reloaded-II` mod list.
- You should now be able to start the game and see both SMTVFix and Reloaded II mods working.

</details>

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

- Battle transition may display at wrong aspect ratio if you have changed aspect ratio after booting the game. Restart the game to fix this.

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
