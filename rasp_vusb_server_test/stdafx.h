// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>

#define _WINSOCK_DEPRECATED_NO_WARNINGS

#pragma comment(lib, "ws2_32.lib")

// TODO: reference additional headers your program requires here

#define PORT 19508
#define IP_FOUND "FIND_VUSB_DEVICE"
#define IP_FOUND_ACK "VUSB_DEVICE_FOUND_ACK"

#define KEYBOARD_INPUT_CMD 0x05
#define REL_MOUSE_INPUT_CMD 0x06
#define ABS_MOUSE_INPUT_CMD 0x07