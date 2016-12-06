/***************************************************************
 * Name:      exGUIMain.cpp
 * Purpose:   Code for Application Frame
 * Author:     ()
 * Created:   2016-11-21
 * Copyright:  ()
 * License:
 **************************************************************/

#include "exGUIMain.h"
#include <wx/msgdlg.h>
#include <stack>
//(*InternalHeaders(exGUIFrame)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//helper functions
enum wxbuildinfoformat
{
    short_f, long_f
};

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(exGUIFrame)
const long exGUIFrame::idMenuQuit = wxNewId();
const long exGUIFrame::idMenuAbout = wxNewId();
const long exGUIFrame::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(exGUIFrame,wxFrame)
    //(*EventTable(exGUIFrame)
    //*)
END_EVENT_TABLE()

exGUIFrame::exGUIFrame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(exGUIFrame)
    wxMenuItem* MenuItem2;
    wxMenuItem* MenuItem1;
    wxMenu* Menu1;
    wxMenuBar* MenuBar1;
    wxMenu* Menu2;

    Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
    MenuBar1 = new wxMenuBar();
    Menu1 = new wxMenu();
    MenuItem1 = new wxMenuItem(Menu1, idMenuQuit, _("Quit\tAlt-F4"), _("Quit the application"), wxITEM_NORMAL);
    Menu1->Append(MenuItem1);
    MenuBar1->Append(Menu1, _("&File"));
    Menu2 = new wxMenu();
    MenuItem2 = new wxMenuItem(Menu2, idMenuAbout, _("About\tF1"), _("Show info about this application"), wxITEM_NORMAL);
    Menu2->Append(MenuItem2);
    MenuBar1->Append(Menu2, _("Help"));
    SetMenuBar(MenuBar1);
    StatusBar1 = new wxStatusBar(this, ID_STATUSBAR1, 0, _T("ID_STATUSBAR1"));
    int __wxStatusBarWidths_1[1] = { -1 };
    int __wxStatusBarStyles_1[1] = { wxSB_NORMAL };
    StatusBar1->SetFieldsCount(1,__wxStatusBarWidths_1);
    StatusBar1->SetStatusStyles(1,__wxStatusBarStyles_1);
    SetStatusBar(StatusBar1);

    Connect(idMenuQuit,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&exGUIFrame::OnQuit);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&exGUIFrame::OnAbout);
    //*)
}

exGUIFrame::~exGUIFrame()
{
    //(*Destroy(exGUIFrame)
    //*)
}

void exGUIFrame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void exGUIFrame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}
wxString zamienNaDwojkowy(wxString liczba)

{
    wxString wynik;
    double value;
    if(liczba.ToDouble(&value))
    {

        int czesc_calk = (int) value;
        double czesc_ul = value - czesc_calk;
        std::stack < int > stosLiczb;
        while (!(czesc_calk==0))
        {
            stosLiczb.push(czesc_calk%2);
            czesc_calk=czesc_calk/2;//czesc_calk=(int)((double)czesc_calk/(double)2);
        }
        while( stosLiczb.empty() == false )
        {
            wynik<< stosLiczb.top();
            stosLiczb.pop();
        }
        wynik=wynik+".";
        std::stack < int > stosLiczb1;
        while (!(czesc_ul==1))
        {
            double temp;
            temp =czesc_ul*2;
            if (temp>1){
                stosLiczb1.push(1);
                czesc_ul=temp-1.0;
            }else if(temp<1){
                stosLiczb1.push(0);
                czesc_ul=temp;
            } else if(temp==1){
            stosLiczb1.push(1);
                break;
            }

        }
        while( stosLiczb1.empty() == false )
        {
            wynik<< stosLiczb1.top();
            stosLiczb1.pop();
        }
        return wynik;
    }
}
void exGUIFrame::OnButton1Click(wxCommandEvent& event)
{
    TextCtrl2->Enable('True');
    wxString napis,wynik1;
    napis=TextCtrl1->GetValue();
    wynik1=zamienNaDwojkowy(napis);
    TextCtrl2->SetValue(wynik1);
    Layout();
}

void exGUIFrame::OnTextCtrl1Text(wxCommandEvent& event)
{
}
