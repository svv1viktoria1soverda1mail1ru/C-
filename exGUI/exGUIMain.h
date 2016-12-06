/***************************************************************
 * Name:      exGUIMain.h
 * Purpose:   Defines Application Frame
 * Author:     ()
 * Created:   2016-11-21
 * Copyright:  ()
 * License:
 **************************************************************/

#ifndef EXGUIMAIN_H
#define EXGUIMAIN_H

//(*Headers(exGUIFrame)
#include <wx/menu.h>
#include <wx/frame.h>
#include <wx/statusbr.h>
//*)

class exGUIFrame: public wxFrame
{
    public:

        exGUIFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~exGUIFrame();

    private:

        //(*Handlers(exGUIFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnButton1Click(wxCommandEvent& event);
        void OnTextCtrl1Text(wxCommandEvent& event);
        //*)

        //(*Identifiers(exGUIFrame)
        static const long idMenuQuit;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(exGUIFrame)
        wxStatusBar* StatusBar1;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // EXGUIMAIN_H
