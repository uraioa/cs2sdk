#pragma once

#include <cstdint>

class CEconItem {
   public:
    static CEconItem* CreateInstance();

    char pad0[0x10];  // 2 vtables
    uint64_t m_ulID;
    uint64_t m_ulOriginalID;
    void* m_pCustomDataOptimizedObject;
    uint32_t m_unAccountID;
    uint32_t m_unInventory;
    uint16_t m_unDefIndex;
    uint16_t m_unOrigin : 5;
    uint16_t m_nQuality : 4;
    uint16_t m_unLevel : 2;
    uint16_t m_nRarity : 4;
    uint16_t m_dirtybitInUse : 1;
    int16_t m_iItemSet;
    int m_bSOUpdateFrame;
    uint8_t m_unFlags;
};