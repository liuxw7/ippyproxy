////////////////////////////////////////////////////////////////////////////////////////////////////
// IpPyProxy
//
// Copyright �2008 Liam Kirton <liam@int3.ws>
////////////////////////////////////////////////////////////////////////////////////////////////////
// IpPyProxy.h
//
// Created: 27/02/2008
////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#define SECURITY_WIN32

#include <winsock2.h>
#include <windows.h>

#include <mswsock.h>
#include <schnlsp.h>
#include <security.h>
#include <wincrypt.h>

#include <vector>

#include "Mutex.h"

////////////////////////////////////////////////////////////////////////////////////////////////////

class Socket;

////////////////////////////////////////////////////////////////////////////////////////////////////

void GetRandomBytes(unsigned char *lpBuffer, DWORD dwCount);

////////////////////////////////////////////////////////////////////////////////////////////////////

extern CRITICAL_SECTION g_ConsoleCriticalSection;
extern HANDLE g_hExitEvent;
extern HANDLE g_hCompletionPort;

extern Mutex g_SocketsMutex;
extern std::vector<Socket *> g_Sockets;

extern DWORD g_dwSocketInstanceCount;

extern USHORT g_LocalPort;
extern ULONG g_TargetIp;
extern USHORT g_TargetPort;

////////////////////////////////////////////////////////////////////////////////////////////////////