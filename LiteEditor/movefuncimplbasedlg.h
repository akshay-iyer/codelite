//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
//
// copyright            : (C) 2008 by Eran Ifrah                            
// file name            : movefuncimplbasedlg.h              
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
// C++ code generated with wxFormBuilder (version Sep 26 2007)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __movefuncimplbasedlg__
#define __movefuncimplbasedlg__

#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include "filepicker.h"
#include <wx/wxscintilla.h>
#ifdef __VISUALC__
#include <wx/link_additions.h>
#endif //__VISUALC__
#include <wx/sizer.h>
#include <wx/statline.h>
#include <wx/button.h>
#include <wx/dialog.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class MoveFuncImplBaseDlg
///////////////////////////////////////////////////////////////////////////////
class MoveFuncImplBaseDlg : public wxDialog 
{
	private:
	
	protected:
		wxStaticText* m_staticText4;
		FilePicker *m_filePicker;
		wxStaticText* m_staticText5;
		wxScintilla* m_preview;
		wxStaticLine* m_staticline2;
		wxButton* m_buttonOK;
		wxButton* m_buttoncancel;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnButtonOK( wxCommandEvent& event ){ event.Skip(); }
		virtual void OnButtonCancel( wxCommandEvent& event ){ event.Skip(); }
		
	
	public:
		MoveFuncImplBaseDlg( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Move Function Implementation Preview"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 746,422 ), long style = wxDEFAULT_DIALOG_STYLE );
	
};

#endif //__movefuncimplbasedlg__
