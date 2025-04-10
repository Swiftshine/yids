Yoshi's Island DS  
[![Discord Badge]][discord]
=============

[Discord Badge]: https://img.shields.io/static/v1?message=Discord&logo=discord&labelColor=5c5c5c&color=7289DA&logoColor=white&label=%20
[discord]: https://discord.gg/Fy4za2WsT6

A decompilation project for *Yoshi's Island DS*, using DSD and Ghidra

Structure notes:
* `config/` contains the folders created by DSD, which are plaintext metadata and configuration for the ROM
* `src/` contains the decompiled C code
* `orig/` is where you put the legally ripped ROM files you may want to work with
* `tools/` are where Python3 tools go

Supported versions thus far:
* `AYWE00`: USA 1.0/r0

Terms:
* `Sprite`: Anything that is loaded via the OAM
* `Pickup`: Collectibles such as coins

> [!Note]
> You will need your own legally ripped USA 1.0 ROM (AYWE) to work on this project. Do not commit any copyrighted code or assets into this project.
