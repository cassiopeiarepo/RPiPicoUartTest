#ifndef __MINICOM_H__
#define __MINICOM_H__

#include "conn/minicom/config.h"

class Minicom {

public:
    Minicom();

    void init();

    void puts(const char* str);

};


#endif
