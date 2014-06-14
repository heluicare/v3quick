
#ifndef __PLAYER_SERVICE_PROTOCOL_WIN32_H_
#define __PLAYER_SERVICE_PROTOCOL_WIN32_H_

#include "stdafx.h"

#include "PlayerServiceProtocol.h"

PLAYER_NS_BEGIN

class PlayerServiceProtocolWin32 : public PlayerServiceProtocol
{
public:
    static WCHAR *utf8towide(const char *input);
    static char *widetoutf8(WCHAR *input);
    static bool isDirectoryExists(WCHAR *directory);
    static bool isFileExists(WCHAR *path);

};

PLAYER_NS_END

#endif // __PLAYER_SERVICE_PROTOCOL_WIN32_H_
