#ifndef GUARD_POKEMON_SUMMARY_SCREEN_HGSS_H
#define GUARD_POKEMON_SUMMARY_SCREEN_HGSS_H

extern u8 gLastViewedMonIndexHGSS;
extern const u8 *const gMoveDescriptionPointersHGSS[];
extern const struct SpriteTemplate gSpriteTemplate_MoveTypesHGSS;
extern const struct CompressedSpriteSheet gSpriteSheet_MoveTypesHGSS;

void ShowPokemonSummaryScreenHGSS(u8 mode, void *mons, u8 monIndex, u8 maxMonIndex, void (*callback)(void));
void ShowSelectMovePokemonSummaryScreenHGSS(struct Pokemon *mons, u8 monIndex, u8 maxMonIndex, void (*callback)(void), u16 newMove);
void ShowPokemonSummaryScreenHandleDeoxysHGSS(u8 mode, struct BoxPokemon *mons, u8 monIndex, u8 maxMonIndex, void (*callback)(void));
u8 GetMoveSlotToReplaceHGSS(void);
void SummaryScreen_SetAnimDelayTaskIdHGSS(u8 taskId);

#endif // GUARD_POKEMON_SUMMARY_SCREEN_HGSS_H
