# fortnite-balls-in-my-jaws
i accidentally broke my left testicle
<br>
<br>
enough joke, its time for the real shit.<br>
this is the **original** roblox 2016 source from [git.rip](http://git.rip/), which is now seized.<br>
if you dont know what to do, heres the guide:<br>
<br>
# How to Compile Block Game 2016:

# Requirements

 - **The Source** 😉
 - Visual Studio 2015 and 2017 with the necessary build tools. (v140_xp)
 - DirectX 9
 - Microsoft Visual C++ Redistributable 2015
 - [Windows 7 SDK](https://www.microsoft.com/en-us/download/details.aspx?id=8279)
 - Dependencies used in the source (which will be mentioned in a sec)
 - A brain and some patients (Compiling does take a lot of time)!

## Dependencies

In order to compile you will need some libraries/dependencies to be able to compile.

 - **[Boost 1.56.0](https://www.boost.org/users/history/version_1_56_0.html)**
 - **[cpp-netlib-0.11.0-final](https://github.com/cpp-netlib/cpp-netlib/releases/tag/cpp-netlib-0.11.0-final)**
 - **[DSBaseClasses](https://cdn.discordapp.com/attachments/462956576526041101/798917355672436817/DSBaseClasses.zip)** *(For the record feature in the client)*
 - **QT 4.8.5** *(for Studio) (won't be included in this guide)*
 - **[SDK](https://mega.nz/file/GkFjxChI#M9rgAczMFpw6NEAPI_gmZkkQ-vcgkGTxxBekgnula5Y)**
 - **[SDL 2.0.4](https://www.libsdl.org/release/SDL2-2.0.4.zip)**
 - **[Telemetry2SDKWin32_20M](https://cdn.discordapp.com/attachments/462956576526041101/798917365261139998/Telemetry.zip)**
 - **[VMProtect 2.13](https://pastebin.com/BeyEqyPk)** *2 Header Files* *(For client protection)*
 - **[w3c-libwww-5.4.0](https://www.w3.org/Library/Distribution/old/w3c-libwww-5.4.0.zip)**
 - **[curl 7.43.0](https://curl.se/download/curl-7.43.0.zip)**
 - **[zlib 1.2.8](https://zlib.net/fossils/zlib-1.2.8.tar.gz)**
 - **VMProtect 2.13** *Misc Files* ([File 1](https://cdn.discordapp.com/attachments/705472616600698910/798662082051702825/VMProtectSDK32.lib)) ([File 2](https://cdn.discordapp.com/attachments/705472616600698910/798662083692068924/VMProtectSDK.h)) ([File 3](https://cdn.discordapp.com/attachments/705472616600698910/798662086116900904/VMProtectSDK32.dll))

## Organizing files and folders

Now before we start compiling anything we have to organize where everything goes.

 1. Create a Folder on your root called "Trunk2012" (It should be like C:\Trunk2012)
 2. Create another folder inside Trunk2012 Called "Contribs"
 3. Create another folder inside Trunk2012 Called "Build"
 4. Put your block game source inside Build folder
 5. Download/Extract all the dependencies
 6. Put boost inside the "Contribs" directory (The path should look like this: C:\Trunk2012\Contribs\boost_1_56_0)
 7. Put C++ netlib dependency inside the "Contribs" directory (The path should look like this: C:\Trunk2012\Contribs\cpp-netlib-0.11.0-final)
 8. Put DSBaseClasses inside the "Contribs" directory (The path should look like this: C:\Trunk2012\Contribs\DSBaseClasses)
 9. Put SDK inside the "Contribs" directory (The path should should look like this: C:\Trunk2012\Contribs\SDK)
 10. Put SDL 2.0.4 inside the "Contribs" directory (The path should look like this: C:\Trunk2012\Contribs\SDL2.0.4)
 11. Duplicate SDL2.0.4 Folder but rename the copy to just "SDL2"  (The path should look like this: C:\Trunk2012\Contribs\SDL2)
 12. Put Telemetry inside the "Contribs" directory (The path should look like this: C:\Trunk2012\Contribs\Telemetry) (Inside should be another folder called Telemetry2SDKWin32_20M)
 13. Create a folder inside "Contribs" called "VMProtectWin_2.13" and put the 2 Header files of VM Protect *(aka VMP)* Inside of "VMProtectWin_2.13".
 14. Put w3c-libwww-5.4.0 dependency inside the "Contribs" directory (The path should look like this: C:\Trunk2012\Contribs\w3c-libwww-5.4.0)
 15. Create a folder in Contribs Called "windows" and another inside "windows" called "x86" and place the zlib and curl dependencies inside there: (It should look like this C:\Trunk2012\windows\x86\curl\curl-7.43.0 and C:\Trunk2012\windows\x86\zlib\zlib-1.2.8) (Note how those dependencies are in nested directories)
 16. Create a folder in Contribs Called "VMP" and put the vmp misc files inside there.

>The Contribs folder should look like this:<br>
![Contribs Folder](https://i.imgur.com/s7fvVzu.png)<br>
*(Ignore the fact that the "VMP" folder is missing from the screenshot)*

## Setting up the environment
In order for the source to know where to find the depedencies you need to create an environment variable on the system, To do this, Create a system variable with the name "CONTRIB_PATH" and the value being the contrib path (C:\Trunk2012\Contribs) <br>
![enter image description here](https://images-ext-2.discordapp.net/external/KwezZ33xuHYr0lZXYqA4cpTMVOWdjfCldRsJwXuPBEs/https/i.imgur.com/l9SxGvr.png)<br>
*(In the screenshot it shows just C:\Trunk2012 but ignore that because I put the contribs all in the root of Trunk2012 instead of a dedicated folder called Contribs)*
<br><br>
Guide by Yakov.<br><br>
# Disclaimer:
i might get fucked by roblox, so you should get this while u can 😀<br>
theres a fixed version of the source made by **hitius** but u gotta seek for it 👀<br>
