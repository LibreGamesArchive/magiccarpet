///////////////////////////////////////////////////////////////////////////////
// ControllerStatusBar.cpp
// =======================
// Derived Controller class for Status bar window
//
//  AUTHOR: Song Ho Ahn (song.ahn@gamil.com)
// CREATED: 2007-02-18
// UPDATED: 2007-02-18
///////////////////////////////////////////////////////////////////////////////

#include "ControllerStatusBar.h"
#include "resource.h"
#include "Log.h"
using namespace Win;



///////////////////////////////////////////////////////////////////////////////
// default contructor
///////////////////////////////////////////////////////////////////////////////
ControllerStatusBar::ControllerStatusBar()
{
}



///////////////////////////////////////////////////////////////////////////////
// handle WM_SIZE
///////////////////////////////////////////////////////////////////////////////
int ControllerStatusBar::size(int w, int h, WPARAM wParam)
{
    Win::log(L"HERE...");
    return 0;
}

