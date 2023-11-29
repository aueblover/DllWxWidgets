#pragma once

#ifndef __BASE_H 
// Make sure to only declare these classes once 
#define __BASE_H 

#include <wx/gdicmn.h>
#include <wx/app.h>
#include <wx/frame.h>

class __declspec(dllexport) MainApp : public wxApp // MainApp is the class for our application 
{
    // MainApp just acts as a container for the window, or frame in MainFrame
public:
    virtual bool OnInit();
};

class __declspec(dllexport) MainFrame : public wxFrame // MainFrame is the class for our window, 
{
    // It contains the window and all objects in it 
public:
    MainFrame(const wxString& title, const wxPoint& pos, const wxSize& size);
};

DECLARE_APP(MainApp)

#endif