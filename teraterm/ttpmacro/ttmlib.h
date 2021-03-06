// Tera Term
// Copyright(C) 1994-1998 T. Teranishi
// All rights reserved.

// TTMACRO.EXE, misc routines

#ifdef __cplusplus
extern "C" {
#endif

extern char UILanguageFile[MAX_PATH];

void CalcTextExtent(HDC DC, PCHAR Text, LPSIZE s);
void TTMGetDir(PCHAR Dir, int destlen);
void TTMSetDir(PCHAR Dir);
int GetAbsPath(PCHAR FName, int destlen);
int GetSpecialFolder(PCHAR dest, int dest_len, PCHAR type);
int GetMonitorLeftmost(int PosX, int PosY);
void BringupWindow(HWND hWnd);

#ifdef __cplusplus
}
#endif
