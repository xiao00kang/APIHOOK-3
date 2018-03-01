#pragma once

#ifndef __SEND_LOG__
#define __SEND_LOG__

#define MAX_LOG_SIZE 260

extern HANDLE hWriteMailslot;

void SendLog(LPCTSTR szLogMessage);
void CatProcessPath(LPTSTR szLogMessage);
void CatLogTime(LPTSTR szLogMessage);

#endif // !__SEND_LOG__

