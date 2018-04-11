#pragma once
#include "pak_defs.h"
#include <stdio.h>
#include <strings.h>

bool pakParseHeader(void* buffer, MyPakHeader* myHeader);
unsigned int pakWriteHeader(MyPakHeader* myHeader, void* buffer);
bool pakCheckFormat(void* buffer, unsigned int size);
