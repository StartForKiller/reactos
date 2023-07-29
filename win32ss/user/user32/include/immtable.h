/* DEFINE_IMM_ENTRY(type, name, params, retval, retkind) */
DEFINE_IMM_ENTRY(BOOL, ImmWINNLSEnableIME, (HWND hwnd, BOOL enable), 0, NONVOID)
DEFINE_IMM_ENTRY(BOOL, ImmWINNLSGetEnableStatus, (HWND hwnd), 0, NONVOID)
DEFINE_IMM_ENTRY(LRESULT, ImmSendIMEMessageExW, (HWND hwnd, LPARAM lParam), 0, NONVOID)
DEFINE_IMM_ENTRY(LRESULT, ImmSendIMEMessageExA, (HWND hwnd, LPARAM lParam), 0, NONVOID)
DEFINE_IMM_ENTRY(BOOL, ImmIMPGetIMEW, (HWND hwnd, LPIMEPROW ime), 0, NONVOID)
DEFINE_IMM_ENTRY(BOOL, ImmIMPGetIMEA, (HWND hwnd, LPIMEPROA ime), 0, NONVOID)
DEFINE_IMM_ENTRY(BOOL, ImmIMPQueryIMEW, (LPIMEPROW ime), 0, NONVOID)
DEFINE_IMM_ENTRY(BOOL, ImmIMPQueryIMEA, (LPIMEPROA ime), 0, NONVOID)
DEFINE_IMM_ENTRY(BOOL, ImmIMPSetIMEW, (HWND hwnd, LPIMEPROW ime), 0, NONVOID)
DEFINE_IMM_ENTRY(BOOL, ImmIMPSetIMEA, (HWND hwnd, LPIMEPROA ime), 0, NONVOID)
DEFINE_IMM_ENTRY(HIMC, ImmAssociateContext, (HWND hwnd, HIMC hIMC), 0, NONVOID)
DEFINE_IMM_ENTRY(LRESULT, ImmEscapeA, (HKL hKL, HIMC hIMC, UINT uEscape, LPVOID lpData), 0, NONVOID)
DEFINE_IMM_ENTRY(LRESULT, ImmEscapeW, (HKL hKL, HIMC hIMC, UINT uEscape, LPVOID lpData), 0, NONVOID)
DEFINE_IMM_ENTRY(LONG, ImmGetCompositionStringA, (HIMC hIMC, DWORD dwIndex, LPVOID lpBuf, DWORD dwBufLen), 0, NONVOID)
DEFINE_IMM_ENTRY(LONG, ImmGetCompositionStringW, (HIMC hIMC, DWORD dwIndex, LPVOID lpBuf, DWORD dwBufLen), 0, NONVOID)
DEFINE_IMM_ENTRY(BOOL, ImmGetCompositionWindow, (HIMC hIMC, LPCOMPOSITIONFORM lpCompForm), 0, NONVOID)
DEFINE_IMM_ENTRY(HIMC, ImmGetContext, (HWND hwnd), 0, NONVOID)
DEFINE_IMM_ENTRY(HWND, ImmGetDefaultIMEWnd, (HWND hwnd), 0, NONVOID)
DEFINE_IMM_ENTRY(BOOL, ImmIsIME, (HKL hKL), 0, NONVOID)
DEFINE_IMM_ENTRY(BOOL, ImmReleaseContext, (HWND hwnd, HIMC hIMC), 0, NONVOID)
DEFINE_IMM_ENTRY(BOOL, ImmRegisterClient, (/*PSHAREDINFO*/ LPVOID pInfo, HINSTANCE hInst), TRUE, NONVOID)
DEFINE_IMM_ENTRY(BOOL, ImmGetCompositionFontW, (HIMC hIMC, LPLOGFONTW plf), 0, NONVOID)
DEFINE_IMM_ENTRY(BOOL, ImmGetCompositionFontA, (HIMC hIMC, LPLOGFONTA plf), 0, NONVOID)
DEFINE_IMM_ENTRY(BOOL, ImmSetCompositionFontW, (HIMC hIMC, LPLOGFONTW plf), 0, NONVOID)
DEFINE_IMM_ENTRY(BOOL, ImmSetCompositionFontA, (HIMC hIMC, LPLOGFONTA plf), 0, NONVOID)
DEFINE_IMM_ENTRY(BOOL, ImmSetCompositionWindow, (HIMC hIMC, LPCOMPOSITIONFORM lpCompForm), 0, NONVOID)
DEFINE_IMM_ENTRY(BOOL, ImmNotifyIME, (HIMC hIMC, DWORD dwAction, DWORD dwIndex, DWORD dwValue), 0, NONVOID)
DEFINE_IMM_ENTRY(/*PINPUTCONTEXT*/ LPVOID, ImmLockIMC, (HIMC hIMC), 0, NONVOID)
DEFINE_IMM_ENTRY(BOOL, ImmUnlockIMC, (HIMC hIMC), 0, NONVOID)
DEFINE_IMM_ENTRY(BOOL, ImmLoadIME, (HKL hKL), 0, NONVOID)
DEFINE_IMM_ENTRY(BOOL, ImmSetOpenStatus, (HIMC hIMC, BOOL bOpen), 0, NONVOID)
DEFINE_IMM_ENTRY(BOOL, ImmFreeLayout, (DWORD dwFlags), 0, NONVOID)
DEFINE_IMM_ENTRY(BOOL, ImmActivateLayout, (HKL hKL), 0, NONVOID)
DEFINE_IMM_ENTRY(BOOL, ImmGetCandidateWindow, (HIMC hIMC, DWORD dwIndex, LPCANDIDATEFORM lpCandForm), 0, NONVOID)
DEFINE_IMM_ENTRY(BOOL, ImmSetCandidateWindow, (HIMC hIMC, LPCANDIDATEFORM lpCandForm), 0, NONVOID)
DEFINE_IMM_ENTRY(BOOL, ImmConfigureIMEW, (HKL hKL, HWND hWnd, DWORD dwMode, LPVOID lpData), 0, NONVOID)
DEFINE_IMM_ENTRY(BOOL, ImmGetConversionStatus, (HIMC hIMC, LPDWORD lpdwConversion, LPDWORD lpdwSentence), 0, NONVOID)
DEFINE_IMM_ENTRY(BOOL, ImmSetConversionStatus, (HIMC hIMC, DWORD dwConversion, DWORD dwSentence), 0, NONVOID)
DEFINE_IMM_ENTRY(BOOL, ImmSetStatusWindowPos, (HIMC hIMC, LPPOINT lppt), 0, NONVOID)
DEFINE_IMM_ENTRY(BOOL, ImmGetImeInfoEx, (PIMEINFOEX info, IMEINFOEXCLASS type, LPVOID pvKey), 0, NONVOID)
DEFINE_IMM_ENTRY(/*PIMEDPI*/ LPVOID, ImmLockImeDpi, (HKL hKL), 0, NONVOID)
DEFINE_IMM_ENTRY(VOID, ImmUnlockImeDpi, (/*PIMEDPI*/ LPVOID dpi), 0, VOID)
DEFINE_IMM_ENTRY(BOOL, ImmGetOpenStatus, (HIMC hIMC), 0, NONVOID)
DEFINE_IMM_ENTRY(BOOL, ImmSetActiveContext, (HWND hwnd, HIMC hIMC, BOOL bFlag), 0, NONVOID)
DEFINE_IMM_ENTRY(BOOL, ImmTranslateMessage, (HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam), 0, NONVOID)
DEFINE_IMM_ENTRY(BOOL, ImmLoadLayout, (HKL hKL, PIMEINFOEX info), 0, NONVOID)
DEFINE_IMM_ENTRY(DWORD, ImmProcessKey, (HWND hwnd, HKL hKL, UINT uVKey, LPARAM lParam, DWORD dwHotKeyID), 0, NONVOID)
DEFINE_IMM_ENTRY(LRESULT, ImmPutImeMenuItemsIntoMappedFile, (HIMC hIMC), 0, NONVOID)
DEFINE_IMM_ENTRY(DWORD, ImmGetProperty, (HKL hKL, DWORD dwIndex), 0, NONVOID)
DEFINE_IMM_ENTRY(BOOL, ImmSetCompositionStringA, (HIMC hIMC, DWORD dwIndex, LPCVOID lpComp, DWORD dwCompLen, LPCVOID lpRead, DWORD dwReadLen), 0, NONVOID)
DEFINE_IMM_ENTRY(BOOL, ImmSetCompositionStringW, (HIMC hIMC, DWORD dwIndex, LPCVOID lpComp, DWORD dwCompLen, LPCVOID lpRead, DWORD dwReadLen), 0, NONVOID)
DEFINE_IMM_ENTRY(BOOL, ImmEnumInputContext, (DWORD dwThreadID, IMCENUMPROC lpfn, LPARAM lParam), 0, NONVOID)
DEFINE_IMM_ENTRY(LRESULT, ImmSystemHandler, (HIMC hIMC, WPARAM wParam, LPARAM lParam), 0, NONVOID)
DEFINE_IMM_ENTRY(HRESULT, CtfImmTIMActivate, (HKL hKL), 0, NONVOID)
DEFINE_IMM_ENTRY(VOID, CtfImmRestoreToolbarWnd, (DWORD dwStatus), 0, VOID)
DEFINE_IMM_ENTRY(DWORD, CtfImmHideToolbarWnd, (VOID), 0, NONVOID)
DEFINE_IMM_ENTRY(LRESULT, CtfImmDispatchDefImeMessage, (HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam), 0, NONVOID)
