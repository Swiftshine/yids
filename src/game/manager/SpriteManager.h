#ifndef SPRITEMANAGER_H
#define SPRITEMANAGER_H

#include "sprites/Sprite.h"

typedef struct SpriteList {
    Sprite* mSprites;
    uint32_t m_4;
} SpriteList;

// 0x020EC7AC
uint32_t SpriteManager_SpriteCount;

// 0x020EC7B0
SpriteList SpriteManger_SpriteList;

// 0x01FFD03C
void SpriteManager_Reset();

// 0x01FFD058
void SpriteManager_UpdateSprites(SpriteList* pList);

// 0x01FFD0B
void SpriteManager_RenderSprites(SpriteList* pList, void* unk1);

// 0x01FFD1E0
void SpriteManager_UpdateAll(void* unk0, void* unk2);

// 0x01FFD220
Sprite* SpriteManager_InitSprite(Sprite* pSprite, SpriteCallbacks* pCallbacks, size_t allocSize, SpriteBuildInfo* pBuildInfo);

#endif
