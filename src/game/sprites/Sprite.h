#ifndef SPRITE_H
#define SPRITE_H

#include "types.h"

struct Sprite;

// Size: Unknown
typedef struct SpriteBuildInfo { } SpriteBuildInfo;

typedef void (*SpriteCreateFunction)(Sprite* pSprite, SpriteBuildInfo* pBuildInfo);
typedef void (*SpriteUpdateFunction)(Sprite* pSprite);
typedef void (*SpriteRenderFunction)(Sprite* pSprite);
typedef void (*SpriteDestroyFunction)(Sprite* pSprite);

typedef enum SpriteFlags { } SpriteFlags;

// Size: 0x20
typedef struct Sprite {
    Sprite* mNext;                  // 0x0
    Sprite* mPrevious;              // 0x4
    uint32_t m_8;                   // 0x8
    SpriteUpdateFunction mUpdate;   // 0xC
    SpriteRenderFunction mRender;   // 0x10
    SpriteDestroyFunction mDestroy; // 0x14
    SpriteFlags mFlags;             // 0x18
    uint32_t m_1C;                  // 0x1C
} Sprite;

// Size: 0x10
typedef struct SpriteCallbacks {
    SpriteCreateFunction mCreate;   // 0x0
    SpriteUpdateFunction mUpdate;   // 0x4
    SpriteRenderFunction mRender;   // 0x8
    SpriteDestroyFunction mDestroy; // 0xC
} SpriteCallbacks;

#endif
