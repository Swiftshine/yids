#ifndef CHARACOIN_H
#define CHARACOIN_H

typedef struct CharacterCoin {

};

void CharacterCoin_Create(CharacterCoin* sprite/*,more?*/);
void CharacterCoin_Update(CharacterCoin* sprite);
void CharacterCoin_Render(CharacterCoin* sprite);
void CharacterCoin_Destroy(CharacterCoin* sprite);

#endif