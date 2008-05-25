//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
//
// copyright            : (C) 2008 by Eran Ifrah                            
// file name            : replaceinfilesbasepanel.h              
//                                                                          
// -------------------------------------------------------------------------
// A                                                                        
//              _____           _      _     _ _                            
//             /  __ \         | |    | |   (_) |                           
//             | /  \/ ___   __| | ___| |    _| |_ ___                      
//             | |    / _ \ / _  |/ _ \ |   | | __/ _ \                     
//             | \__/\ (_) | (_| |  __/ |___| | ||  __/                     
//              \____/\___/ \__,_|\___\_____/_|\__\___|                     
//                                                                          
//                                                  F i l e                 
//                                                                          
//    This program is free software; you can redistribute it and/or modify  
//    it under the terms of the GNU General Public License as published by  
//    the Free Software Foundation; either version 2 of the License, or     
//    (at your option) any later version.                                   
//                                                                          
//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
 ///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Mar 19 2008)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __replaceinfilesbasepanel__
#define __replaceinfilesbasepanel__

#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/listbox.h>
#include <wx/sizer.h>
#include <wx/textctrl.h>
#include <wx/button.h>
#include <wx/panel.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class ReplaceInFilesBasePanel
///////////////////////////////////////////////////////////////////////////////
class ReplaceInFilesBasePanel : public wxPanel 
{
	private:
	
	protected:
		wxStaticText* m_staticText8;
		wxListBox* m_listBox1;
		wxStaticText* m_staticText4;
		wxTextCtrl* m_textCtrlReplaceWith;
		wxButton* m_buttonReplaceAll;
		wxButton* m_buttonClear;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnItemSelected( wxCommandEvent& event ){ event.Skip(); }
		virtual void OnItemDClicked( wxCommandEvent& event ){ event.Skip(); }
		virtual void OnReplaceAll( wxCommandEvent& event ){ event.Skip(); }
		virtual void OnReplaceAllUI( wxUpdateUIEvent& event ){ event.Skip(); }
		virtual void OnClearResults( wxCommandEvent& event ){ event.Skip(); }
		virtual void OnClearResultsUI( wxUpdateUIEvent& event ){ event.Skip(); }
		
	
	public:
		ReplaceInFilesBasePanel( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 648,300 ), long style = wxTAB_TRAVERSAL );
		~ReplaceInFilesBasePanel();
	
};

#endif //__replaceinfilesbasepanel__
